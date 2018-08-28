/*
 * blinky.S - using gnu assembler for stm32f0x
 *
 * LED on PA5
 */
    .syntax unified
    .thumb
    .cpu cortex-m0
    .fpu softvfp

/*--------------------------------------------------------------------*/
/*-- DEFINES                                                          */

#include "stm32f0.inc"
#include "macros.inc"

#if 1
    // these reduce the size of the symbol table while still simple names
    #define LED_PORT GPIOA
    #define LED_PIN  GPIO_BSRR_BS_5
    #define LED_Hz 5
    #define DELAY_CYCLES (F_CPU/LED_Hz/2)
#else
    // you uses these .equiv, to have access to the symbols in gdb
    .equiv LED_PORT,GPIOA
    .equiv LED_PIN,GPIO_BSRR_BS_5
    .equiv LED_Hz,5
    .equiv DELAY_CYCLES,F_CPU/LED_Hz/2
#endif

/*--------------------------------------------------------------------*/
/*-- DATA Section                                                     */
    .data

/*--------------------------------------------------------------------*/

/*-- BSS Section                                                      */
    .bss
millis:                 // milliseconds since reset
    .word 0

/*--------------------------------------------------------------------*/
/*-- TEXT Section                                                     */
    .text

    .type Reset_Handler,%function
Reset_Handler:
    //--- establish a good stack pointer
    ldr r0,=_stack
    mov sp,r0

    bl SystemInit

    //--- setup systick timer
    write_32 millis, 0
    ldr r0,=F_CPU/1000
    bl SysTick_Config

    bl main                 // Note: main never actually returns

    .type DefaultHandler,%function
Default_Handler:
    b Default_Handler       // trap the cpu from further execution

/*--------------------------------------------------------------------*/
main:
    //--- Turn on clock for GPIOA
    set_bit RCC+AHBENR, RCC_AHBENR_GPIOAEN

    //--- config PA5 as output
    set_bit GPIOA+MODER, GPIO_MODER_MODER5_0

    ldr r7,=LED_PORT                @ GPIOA
    ldr r6,=LED_PIN                 @ GPIO_PIN_5

loop:
    //--- turn LED on
    str  r6, [r7, BSRR]

    // use cycle counting delay of 50 msec
    delay_cycles ((F_CPU/1000)*50)

    //--- turn LED off
    str  r6, [r7, BRR]

    // use SysTick counting delay of 450 msec
    ldr r0,=450
    bl delay_ms

    b   loop

    // __attribute__((noreturn))

/*--------------------------------------------------------------------*/
SystemInit:

.if F_CPU > 8000000

    .if F_CPU > 24000000
        //--- set FLASH to 1ws & prefetch
        write_reg FLASH+ACR, FLASH_ACR_LATENCY+FLASH_ACR_PRFTBE
    .endif

    //--- turn on PLL Multiplier with HSI(8MHz)/2 as source
    .if F_CPU == 12000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL3
    .elseif F_CPU == 16000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL3
    .elseif F_CPU == 20000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL5
    .elseif F_CPU == 24000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL6
    .elseif F_CPU == 28000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL7
    .elseif F_CPU == 32000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL8
    .elseif F_CPU == 36000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL9
    .elseif F_CPU == 40000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL10
    .elseif F_CPU == 44000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL11
    .elseif F_CPU == 48000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL12
    .elseif F_CPU == 52000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL13
    .elseif F_CPU == 56000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL14
    .elseif F_CPU == 60000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL15
    .elseif F_CPU == 64000000
      modify_reg RCC+CFGR, RCC_CFGR_PLLMUL_Msk, RCC_CFGR_PLLMUL16
    .else
     .err //--- Error: unsupported F_CPU frequency
    .endif

#define USE_MACROS 0

    //--- turn on PLL
#if USE_MACROS
    set_bit RCC+CR_RCC, RCC_CR_PLLON
#else
    ldr r1,=RCC
    ldr r0,[r1,CR_RCC];
    ldr r2,=RCC_CR_PLLON
    orrs r0,r2
    str r0,[r1,CR_RCC];
#endif

    //--- wait for PLL to be ready
#if USE_MACROS
    wait_flag_set RCC+CR_RCC, RCC_CR_PLLRDY
#else
    // assume r1 has RCC
    ldr r2,=RCC_CR_PLLRDY
1:
    ldr r0,[r1,CR_RCC]
    tst r0,r2
    bne 1b
#endif

    //--- enable PLL with HSI/2 as clock
#if USE_MACROS
    modify_reg RCC+CFGR, RCC_CFGR_SW, RCC_CFGR_SW_1
#else
    // assume r1 has RCC
    ldr r0,[r1,CFGR]
    movs r2,#RCC_CFGR_SW
    bics r0,r2
    movs r2,#RCC_CFGR_SW_1
    orrs r0,r2
    str r0,[r1,CFGR]
#endif

    //--- wait for till PLL is used as system clock source
#if USE_MACROS
    wait_flag_set_offset RCC, CFGR, RCC_CFGR_SWS_PLL
#else
    // assume r1 has RCC
    movs r2,#RCC_CFGR_SWS_PLL
1:
    ldr r0,[r1,CFGR]
    tst r0,r2
    bne 1b
#endif
.else
    //--- just use the default HSI running at 8MHz
.endif

    bx lr

/*--------------------------------------------------------------------
 * delay_ms - using SysTick to run a timer
 *
 * r0 - delay in msec
 */
    .type delay_ms, %function
delay_ms:
    ldr r1,=millis                  // load millis addr
    ldr r2,[r1]                     // starting tick_cnt
1:
    ldr r3,[r1]                     // current tick_cnt
    subs r3,r3,r2                   // diff
    cmp r3,r0                       // diff < msec
    wfe                             // wait for a change
    bcc 1b                          // keep looping
2:
    bx lr

/*--------------------------------------------------------------------
 * SysTick_Config( r0=ticks )
 */
    .type SysTick_Config, %function
SysTick_Config:
    subs r0,#1
    ldr r1,=SysTick
    str r0,[r1,LOAD]
    movs r0,#0
    str r0,[r1,VAL]
    ldr r0,=SysTick_CTRL_CLKSOURCE_Msk+ \
            SysTick_CTRL_TICKINT_Msk+ \
            SysTick_CTRL_ENABLE_Msk
    str r0,[r1,CTRL]
    bx lr

/*--------------------------------------------------------------------
 * SysTick_Handler
 */
    .type SysTick_Handler, %function
SysTick_Handler:
    ldr r1,=millis
    ldr r0,[r1]
    adds r0,#1
    str r0,[r1]
    bx lr

/*--------------------------------------------------------------------*/
    .type pc_offset_constants, %object
pc_offset_constants:
    //--- PC offset constants (=some_constant) stored here by compiler

/*--------------------------------------------------------------------
 * _vector_table - fault and exception handlers
 */
    .section .isr_vector,"a",%progbits
    .type _vector_table, %object
_vector_table:
    .word  _stack
    .word  Reset_Handler
    .word  NMI_Handler                      //--- FAULT HANDLERS
    .word  HardFault_Handler
    .word  0
    .word  0
    .word  0
    .word  0
    .word  0
    .word  0
    .word  0
    .word  SVC_Handler
    .word  0
    .word  0
    .word  PendSV_Handler
    .word  SysTick_Handler
                                            //--- ISR HANDLERS -----------------
    .word  WWDG_IRQHandler                  //--- Window WatchDog
    .word  PVD_IRQHandler                   //--- PVD through EXTI Line detect
    .word  RTC_IRQHandler                   //--- RTC through the EXTI line
    .word  FLASH_IRQHandler                 //--- FLASH
    .word  RCC_CRS_IRQHandler               //--- RCC and CRS
    .word  EXTI0_1_IRQHandler               //--- EXTI Line 0 and 1
    .word  EXTI2_3_IRQHandler               //--- EXTI Line 2 and 3
    .word  EXTI4_15_IRQHandler              //--- EXTI Line 4 to 15
    .word  TSC_IRQHandler                   //--- TSC
    .word  DMA1_Channel1_IRQHandler         //--- DMA1 Channel 1
    .word  DMA1_Channel2_3_IRQHandler       //--- DMA1 Channel 2 and Channel 3
    .word  DMA1_Channel4_5_IRQHandler       //--- DMA1 Channel 4 and Channel 5
    .word  ADC1_COMP_IRQHandler             //--- ADC1, COMP1 and COMP2
    .word  TIM1_BRK_UP_TRG_COM_IRQHandler   //--- TIM1 Break,Update,Trigger & Commutation
    .word  TIM1_CC_IRQHandler               //--- TIM1 Capture Compare
    .word  TIM2_IRQHandler                  //--- TIM2
    .word  TIM3_IRQHandler                  //--- TIM3
    .word  TIM6_DAC_IRQHandler              //--- TIM6 and DAC
    .word  0                                //--- Reserved
    .word  TIM14_IRQHandler                 //--- TIM14
    .word  TIM15_IRQHandler                 //--- TIM15
    .word  TIM16_IRQHandler                 //--- TIM16
    .word  TIM17_IRQHandler                 //--- TIM17
    .word  I2C1_IRQHandler                  //--- I2C1
    .word  I2C2_IRQHandler                  //--- I2C2
    .word  SPI1_IRQHandler                  //--- SPI1
    .word  SPI2_IRQHandler                  //--- SPI2
    .word  USART1_IRQHandler                //--- USART1
    .word  USART2_IRQHandler                //--- USART2
    .word  0                                //--- Reserved
    .word  CEC_CAN_IRQHandler               //--- CEC and CAN
    .word  0                                //--- Reserved
    .word BootRAM                           //--- This is for boot in RAM mode

    .equiv BootRAM, 0xF108F85F

/*--------------------------------------------------------------------
 * setup some weak references to fault handlers
 */
    .weak      Reset_Handler
    .type      Reset_Handler,%function

    .weak      NMI_Handler
    .thumb_set NMI_Handler,Default_Handler

    .weak      HardFault_Handler
    .thumb_set HardFault_Handler,Default_Handler

    .weak      SVC_Handler
    .thumb_set SVC_Handler,Default_Handler

    .weak      PendSV_Handler
    .thumb_set PendSV_Handler,Default_Handler

#if 0
    .weak      SysTick_Handler
    .thumb_set SysTick_Handler,Default_Handler
#endif

    .weak      WWDG_IRQHandler
    .thumb_set WWDG_IRQHandler,Default_Handler

    .weak      PVD_IRQHandler
    .thumb_set PVD_IRQHandler,Default_Handler

    .weak      RTC_IRQHandler
    .thumb_set RTC_IRQHandler,Default_Handler

    .weak      FLASH_IRQHandler
    .thumb_set FLASH_IRQHandler,Default_Handler

    .weak      RCC_CRS_IRQHandler
    .thumb_set RCC_CRS_IRQHandler,Default_Handler

    .weak      EXTI0_1_IRQHandler
    .thumb_set EXTI0_1_IRQHandler,Default_Handler

    .weak      EXTI2_3_IRQHandler
    .thumb_set EXTI2_3_IRQHandler,Default_Handler

    .weak      EXTI4_15_IRQHandler
    .thumb_set EXTI4_15_IRQHandler,Default_Handler

    .weak      TSC_IRQHandler
    .thumb_set TSC_IRQHandler,Default_Handler

    .weak      DMA1_Channel1_IRQHandler
    .thumb_set DMA1_Channel1_IRQHandler,Default_Handler

    .weak      DMA1_Channel2_3_IRQHandler
    .thumb_set DMA1_Channel2_3_IRQHandler,Default_Handler

    .weak      DMA1_Channel4_5_IRQHandler
    .thumb_set DMA1_Channel4_5_IRQHandler,Default_Handler

    .weak      ADC1_COMP_IRQHandler
    .thumb_set ADC1_COMP_IRQHandler,Default_Handler

    .weak      TIM1_BRK_UP_TRG_COM_IRQHandler
    .thumb_set TIM1_BRK_UP_TRG_COM_IRQHandler,Default_Handler

    .weak      TIM1_CC_IRQHandler
    .thumb_set TIM1_CC_IRQHandler,Default_Handler

    .weak      TIM2_IRQHandler
    .thumb_set TIM2_IRQHandler,Default_Handler

    .weak      TIM3_IRQHandler
    .thumb_set TIM3_IRQHandler,Default_Handler

    .weak      TIM6_DAC_IRQHandler
    .thumb_set TIM6_DAC_IRQHandler,Default_Handler

    .weak      TIM14_IRQHandler
    .thumb_set TIM14_IRQHandler,Default_Handler

    .weak      TIM15_IRQHandler
    .thumb_set TIM15_IRQHandler,Default_Handler

    .weak      TIM16_IRQHandler
    .thumb_set TIM16_IRQHandler,Default_Handler
    .weak      TIM17_IRQHandler
    .thumb_set TIM17_IRQHandler,Default_Handler

    .weak      I2C1_IRQHandler
    .thumb_set I2C1_IRQHandler,Default_Handler

    .weak      I2C2_IRQHandler
    .thumb_set I2C2_IRQHandler,Default_Handler

    .weak      SPI1_IRQHandler
    .thumb_set SPI1_IRQHandler,Default_Handler

    .weak      SPI2_IRQHandler
    .thumb_set SPI2_IRQHandler,Default_Handler

    .weak      USART1_IRQHandler
    .thumb_set USART1_IRQHandler,Default_Handler

    .weak      USART2_IRQHandler
    .thumb_set USART2_IRQHandler,Default_Handler

    .weak      CEC_CAN_IRQHandler
    .thumb_set CEC_CAN_IRQHandler,Default_Handler

@------------------------------------------------------------
@ vim: set ts=4 sw=4 expandtab:
@------------------------------------------------------------

