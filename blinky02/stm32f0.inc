/*--------------------------------------------------------------------------------
* stm32f0 constant definitions are below here.
*/

#define PERIPH_BASE     0x40000000
#define APBPERIPH_BASE  PERIPH_BASE
#define AHBPERIPH_BASE  PERIPH_BASE+0x00020000
#define AHB2PERIPH_BASE PERIPH_BASE+0x08000000

#define GPIOA    AHB2PERIPH_BASE+0x00000000
#define GPIOB    AHB2PERIPH_BASE+0x00000400
#define GPIOC    AHB2PERIPH_BASE+0x00000800
#define GPIOD    AHB2PERIPH_BASE+0x00000C00

//---------------------------------------------------------------
//--- GPIO_Typedef
#define MODER     0x00
#define OTYPER    0x04
#define OSPEEDR   0x08
#define PUPDR     0x0c
#define IDR       0x10
#define ODR       0x14
#define BSRR      0x18
#define LCKR      0x1c
#define AFRL      0x20
#define AFRH      0x24
#define BRR       0x28

/*******************  Bit definition for GPIO_MODER register  *****************/
#define GPIO_MODER_MODER0_Pos           (0)
#define GPIO_MODER_MODER0_Msk           (0x3U << GPIO_MODER_MODER0_Pos)        /*!< 0x00000003 */
#define GPIO_MODER_MODER0               GPIO_MODER_MODER0_Msk
#define GPIO_MODER_MODER0_0             (0x1U << GPIO_MODER_MODER0_Pos)        /*!< 0x00000001 */
#define GPIO_MODER_MODER0_1             (0x2U << GPIO_MODER_MODER0_Pos)        /*!< 0x00000002 */
#define GPIO_MODER_MODER1_Pos           (2U)
#define GPIO_MODER_MODER1_Msk           (0x3U << GPIO_MODER_MODER1_Pos)        /*!< 0x0000000C */
#define GPIO_MODER_MODER1               GPIO_MODER_MODER1_Msk
#define GPIO_MODER_MODER1_0             (0x1U << GPIO_MODER_MODER1_Pos)        /*!< 0x00000004 */
#define GPIO_MODER_MODER1_1             (0x2U << GPIO_MODER_MODER1_Pos)        /*!< 0x00000008 */
#define GPIO_MODER_MODER2_Pos           (4U)
#define GPIO_MODER_MODER2_Msk           (0x3U << GPIO_MODER_MODER2_Pos)        /*!< 0x00000030 */
#define GPIO_MODER_MODER2               GPIO_MODER_MODER2_Msk
#define GPIO_MODER_MODER2_0             (0x1U << GPIO_MODER_MODER2_Pos)        /*!< 0x00000010 */
#define GPIO_MODER_MODER2_1             (0x2U << GPIO_MODER_MODER2_Pos)        /*!< 0x00000020 */
#define GPIO_MODER_MODER3_Pos           (6U)
#define GPIO_MODER_MODER3_Msk           (0x3U << GPIO_MODER_MODER3_Pos)        /*!< 0x000000C0 */
#define GPIO_MODER_MODER3               GPIO_MODER_MODER3_Msk
#define GPIO_MODER_MODER3_0             (0x1U << GPIO_MODER_MODER3_Pos)        /*!< 0x00000040 */
#define GPIO_MODER_MODER3_1             (0x2U << GPIO_MODER_MODER3_Pos)        /*!< 0x00000080 */
#define GPIO_MODER_MODER4_Pos           (8U)
#define GPIO_MODER_MODER4_Msk           (0x3U << GPIO_MODER_MODER4_Pos)        /*!< 0x00000300 */
#define GPIO_MODER_MODER4               GPIO_MODER_MODER4_Msk
#define GPIO_MODER_MODER4_0             (0x1U << GPIO_MODER_MODER4_Pos)        /*!< 0x00000100 */
#define GPIO_MODER_MODER4_1             (0x2U << GPIO_MODER_MODER4_Pos)        /*!< 0x00000200 */
#define GPIO_MODER_MODER5_Pos           (10)
#define GPIO_MODER_MODER5_Msk           (0x3U << GPIO_MODER_MODER5_Pos)        /*!< 0x00000C00 */
#define GPIO_MODER_MODER5               GPIO_MODER_MODER5_Msk
#define GPIO_MODER_MODER5_0             (0x1U << GPIO_MODER_MODER5_Pos)        /*!< 0x00000400 */
#define GPIO_MODER_MODER5_1             (0x2U << GPIO_MODER_MODER5_Pos)        /*!< 0x00000800 */
#define GPIO_MODER_MODER6_Pos           (12U)
#define GPIO_MODER_MODER6_Msk           (0x3U << GPIO_MODER_MODER6_Pos)        /*!< 0x00003000 */
#define GPIO_MODER_MODER6               GPIO_MODER_MODER6_Msk
#define GPIO_MODER_MODER6_0             (0x1U << GPIO_MODER_MODER6_Pos)        /*!< 0x00001000 */
#define GPIO_MODER_MODER6_1             (0x2U << GPIO_MODER_MODER6_Pos)        /*!< 0x00002000 */
#define GPIO_MODER_MODER7_Pos           (14U)
#define GPIO_MODER_MODER7_Msk           (0x3U << GPIO_MODER_MODER7_Pos)        /*!< 0x0000C000 */
#define GPIO_MODER_MODER7               GPIO_MODER_MODER7_Msk
#define GPIO_MODER_MODER7_0             (0x1U << GPIO_MODER_MODER7_Pos)        /*!< 0x00004000 */
#define GPIO_MODER_MODER7_1             (0x2U << GPIO_MODER_MODER7_Pos)        /*!< 0x00008000 */
#define GPIO_MODER_MODER8_Pos           (16U)
#define GPIO_MODER_MODER8_Msk           (0x3U << GPIO_MODER_MODER8_Pos)        /*!< 0x00030000 */
#define GPIO_MODER_MODER8               GPIO_MODER_MODER8_Msk
#define GPIO_MODER_MODER8_0             (0x1U << GPIO_MODER_MODER8_Pos)        /*!< 0x00010000 */
#define GPIO_MODER_MODER8_1             (0x2U << GPIO_MODER_MODER8_Pos)        /*!< 0x00020000 */
#define GPIO_MODER_MODER9_Pos           (18U)
#define GPIO_MODER_MODER9_Msk           (0x3U << GPIO_MODER_MODER9_Pos)        /*!< 0x000C0000 */
#define GPIO_MODER_MODER9               GPIO_MODER_MODER9_Msk
#define GPIO_MODER_MODER9_0             (0x1U << GPIO_MODER_MODER9_Pos)        /*!< 0x00040000 */
#define GPIO_MODER_MODER9_1             (0x2U << GPIO_MODER_MODER9_Pos)        /*!< 0x00080000 */
#define GPIO_MODER_MODER10_Pos          (20)
#define GPIO_MODER_MODER10_Msk          (0x3U << GPIO_MODER_MODER10_Pos)       /*!< 0x00300000 */
#define GPIO_MODER_MODER10              GPIO_MODER_MODER10_Msk
#define GPIO_MODER_MODER10_0            (0x1U << GPIO_MODER_MODER10_Pos)       /*!< 0x00100000 */
#define GPIO_MODER_MODER10_1            (0x2U << GPIO_MODER_MODER10_Pos)       /*!< 0x00200000 */
#define GPIO_MODER_MODER11_Pos          (22U)
#define GPIO_MODER_MODER11_Msk          (0x3U << GPIO_MODER_MODER11_Pos)       /*!< 0x00C00000 */
#define GPIO_MODER_MODER11              GPIO_MODER_MODER11_Msk
#define GPIO_MODER_MODER11_0            (0x1U << GPIO_MODER_MODER11_Pos)       /*!< 0x00400000 */
#define GPIO_MODER_MODER11_1            (0x2U << GPIO_MODER_MODER11_Pos)       /*!< 0x00800000 */
#define GPIO_MODER_MODER12_Pos          (24U)
#define GPIO_MODER_MODER12_Msk          (0x3U << GPIO_MODER_MODER12_Pos)       /*!< 0x03000000 */
#define GPIO_MODER_MODER12              GPIO_MODER_MODER12_Msk
#define GPIO_MODER_MODER12_0            (0x1U << GPIO_MODER_MODER12_Pos)       /*!< 0x01000000 */
#define GPIO_MODER_MODER12_1            (0x2U << GPIO_MODER_MODER12_Pos)       /*!< 0x02000000 */
#define GPIO_MODER_MODER13_Pos          (26U)
#define GPIO_MODER_MODER13_Msk          (0x3U << GPIO_MODER_MODER13_Pos)       /*!< 0x0C000000 */
#define GPIO_MODER_MODER13              GPIO_MODER_MODER13_Msk
#define GPIO_MODER_MODER13_0            (0x1U << GPIO_MODER_MODER13_Pos)       /*!< 0x04000000 */
#define GPIO_MODER_MODER13_1            (0x2U << GPIO_MODER_MODER13_Pos)       /*!< 0x08000000 */
#define GPIO_MODER_MODER14_Pos          (28U)
#define GPIO_MODER_MODER14_Msk          (0x3U << GPIO_MODER_MODER14_Pos)       /*!< 0x30000000 */
#define GPIO_MODER_MODER14              GPIO_MODER_MODER14_Msk
#define GPIO_MODER_MODER14_0            (0x1U << GPIO_MODER_MODER14_Pos)       /*!< 0x10000000 */
#define GPIO_MODER_MODER14_1            (0x2U << GPIO_MODER_MODER14_Pos)       /*!< 0x20000000 */
#define GPIO_MODER_MODER15_Pos          (30)
#define GPIO_MODER_MODER15_Msk          (0x3U << GPIO_MODER_MODER15_Pos)       /*!< 0xC0000000 */
#define GPIO_MODER_MODER15              GPIO_MODER_MODER15_Msk
#define GPIO_MODER_MODER15_0            (0x1U << GPIO_MODER_MODER15_Pos)       /*!< 0x40000000 */
#define GPIO_MODER_MODER15_1            (0x2U << GPIO_MODER_MODER15_Pos)       /*!< 0x80000000 */
/******************  Bit definition for GPIO_OTYPER register  *****************/
#define GPIO_OTYPER_OT_0                (0x00000001U)
#define GPIO_OTYPER_OT_1                (0x00000002U)
#define GPIO_OTYPER_OT_2                (0x00000004U)
#define GPIO_OTYPER_OT_3                (0x00000008U)
#define GPIO_OTYPER_OT_4                (0x00000010)
#define GPIO_OTYPER_OT_5                (0x00000020)
#define GPIO_OTYPER_OT_6                (0x00000040)
#define GPIO_OTYPER_OT_7                (0x00000080)
#define GPIO_OTYPER_OT_8                (0x00000100)
#define GPIO_OTYPER_OT_9                (0x00000200)
#define GPIO_OTYPER_OT_10               (0x00000400)
#define GPIO_OTYPER_OT_11               (0x00000800)
#define GPIO_OTYPER_OT_12               (0x00001000)
#define GPIO_OTYPER_OT_13               (0x00002000)
#define GPIO_OTYPER_OT_14               (0x00004000)
#define GPIO_OTYPER_OT_15               (0x00008000)
/****************  Bit definition for GPIO_OSPEEDR register  ******************/
#define GPIO_OSPEEDR_OSPEEDR0_Pos       (0)
#define GPIO_OSPEEDR_OSPEEDR0_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR0_Pos)    /*!< 0x00000003 */
#define GPIO_OSPEEDR_OSPEEDR0           GPIO_OSPEEDR_OSPEEDR0_Msk
#define GPIO_OSPEEDR_OSPEEDR0_0         (0x1U << GPIO_OSPEEDR_OSPEEDR0_Pos)    /*!< 0x00000001 */
#define GPIO_OSPEEDR_OSPEEDR0_1         (0x2U << GPIO_OSPEEDR_OSPEEDR0_Pos)    /*!< 0x00000002 */
#define GPIO_OSPEEDR_OSPEEDR1_Pos       (2U)
#define GPIO_OSPEEDR_OSPEEDR1_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR1_Pos)    /*!< 0x0000000C */
#define GPIO_OSPEEDR_OSPEEDR1           GPIO_OSPEEDR_OSPEEDR1_Msk
#define GPIO_OSPEEDR_OSPEEDR1_0         (0x1U << GPIO_OSPEEDR_OSPEEDR1_Pos)    /*!< 0x00000004 */
#define GPIO_OSPEEDR_OSPEEDR1_1         (0x2U << GPIO_OSPEEDR_OSPEEDR1_Pos)    /*!< 0x00000008 */
#define GPIO_OSPEEDR_OSPEEDR2_Pos       (4U)
#define GPIO_OSPEEDR_OSPEEDR2_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR2_Pos)    /*!< 0x00000030 */
#define GPIO_OSPEEDR_OSPEEDR2           GPIO_OSPEEDR_OSPEEDR2_Msk
#define GPIO_OSPEEDR_OSPEEDR2_0         (0x1U << GPIO_OSPEEDR_OSPEEDR2_Pos)    /*!< 0x00000010 */
#define GPIO_OSPEEDR_OSPEEDR2_1         (0x2U << GPIO_OSPEEDR_OSPEEDR2_Pos)    /*!< 0x00000020 */
#define GPIO_OSPEEDR_OSPEEDR3_Pos       (6U)
#define GPIO_OSPEEDR_OSPEEDR3_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR3_Pos)    /*!< 0x000000C0 */
#define GPIO_OSPEEDR_OSPEEDR3           GPIO_OSPEEDR_OSPEEDR3_Msk
#define GPIO_OSPEEDR_OSPEEDR3_0         (0x1U << GPIO_OSPEEDR_OSPEEDR3_Pos)    /*!< 0x00000040 */
#define GPIO_OSPEEDR_OSPEEDR3_1         (0x2U << GPIO_OSPEEDR_OSPEEDR3_Pos)    /*!< 0x00000080 */
#define GPIO_OSPEEDR_OSPEEDR4_Pos       (8U)
#define GPIO_OSPEEDR_OSPEEDR4_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR4_Pos)    /*!< 0x00000300 */
#define GPIO_OSPEEDR_OSPEEDR4           GPIO_OSPEEDR_OSPEEDR4_Msk
#define GPIO_OSPEEDR_OSPEEDR4_0         (0x1U << GPIO_OSPEEDR_OSPEEDR4_Pos)    /*!< 0x00000100 */
#define GPIO_OSPEEDR_OSPEEDR4_1         (0x2U << GPIO_OSPEEDR_OSPEEDR4_Pos)    /*!< 0x00000200 */
#define GPIO_OSPEEDR_OSPEEDR5_Pos       (10)
#define GPIO_OSPEEDR_OSPEEDR5_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR5_Pos)    /*!< 0x00000C00 */
#define GPIO_OSPEEDR_OSPEEDR5           GPIO_OSPEEDR_OSPEEDR5_Msk
#define GPIO_OSPEEDR_OSPEEDR5_0         (0x1U << GPIO_OSPEEDR_OSPEEDR5_Pos)    /*!< 0x00000400 */
#define GPIO_OSPEEDR_OSPEEDR5_1         (0x2U << GPIO_OSPEEDR_OSPEEDR5_Pos)    /*!< 0x00000800 */
#define GPIO_OSPEEDR_OSPEEDR6_Pos       (12U)
#define GPIO_OSPEEDR_OSPEEDR6_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR6_Pos)    /*!< 0x00003000 */
#define GPIO_OSPEEDR_OSPEEDR6           GPIO_OSPEEDR_OSPEEDR6_Msk
#define GPIO_OSPEEDR_OSPEEDR6_0         (0x1U << GPIO_OSPEEDR_OSPEEDR6_Pos)    /*!< 0x00001000 */
#define GPIO_OSPEEDR_OSPEEDR6_1         (0x2U << GPIO_OSPEEDR_OSPEEDR6_Pos)    /*!< 0x00002000 */
#define GPIO_OSPEEDR_OSPEEDR7_Pos       (14U)
#define GPIO_OSPEEDR_OSPEEDR7_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR7_Pos)    /*!< 0x0000C000 */
#define GPIO_OSPEEDR_OSPEEDR7           GPIO_OSPEEDR_OSPEEDR7_Msk
#define GPIO_OSPEEDR_OSPEEDR7_0         (0x1U << GPIO_OSPEEDR_OSPEEDR7_Pos)    /*!< 0x00004000 */
#define GPIO_OSPEEDR_OSPEEDR7_1         (0x2U << GPIO_OSPEEDR_OSPEEDR7_Pos)    /*!< 0x00008000 */
#define GPIO_OSPEEDR_OSPEEDR8_Pos       (16U)
#define GPIO_OSPEEDR_OSPEEDR8_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR8_Pos)    /*!< 0x00030000 */
#define GPIO_OSPEEDR_OSPEEDR8           GPIO_OSPEEDR_OSPEEDR8_Msk
#define GPIO_OSPEEDR_OSPEEDR8_0         (0x1U << GPIO_OSPEEDR_OSPEEDR8_Pos)    /*!< 0x00010000 */
#define GPIO_OSPEEDR_OSPEEDR8_1         (0x2U << GPIO_OSPEEDR_OSPEEDR8_Pos)    /*!< 0x00020000 */
#define GPIO_OSPEEDR_OSPEEDR9_Pos       (18U)
#define GPIO_OSPEEDR_OSPEEDR9_Msk       (0x3U << GPIO_OSPEEDR_OSPEEDR9_Pos)    /*!< 0x000C0000 */
#define GPIO_OSPEEDR_OSPEEDR9           GPIO_OSPEEDR_OSPEEDR9_Msk
#define GPIO_OSPEEDR_OSPEEDR9_0         (0x1U << GPIO_OSPEEDR_OSPEEDR9_Pos)    /*!< 0x00040000 */
#define GPIO_OSPEEDR_OSPEEDR9_1         (0x2U << GPIO_OSPEEDR_OSPEEDR9_Pos)    /*!< 0x00080000 */
#define GPIO_OSPEEDR_OSPEEDR10_Pos      (20)
#define GPIO_OSPEEDR_OSPEEDR10_Msk      (0x3U << GPIO_OSPEEDR_OSPEEDR10_Pos)   /*!< 0x00300000 */
#define GPIO_OSPEEDR_OSPEEDR10          GPIO_OSPEEDR_OSPEEDR10_Msk
#define GPIO_OSPEEDR_OSPEEDR10_0        (0x1U << GPIO_OSPEEDR_OSPEEDR10_Pos)   /*!< 0x00100000 */
#define GPIO_OSPEEDR_OSPEEDR10_1        (0x2U << GPIO_OSPEEDR_OSPEEDR10_Pos)   /*!< 0x00200000 */
#define GPIO_OSPEEDR_OSPEEDR11_Pos      (22U)
#define GPIO_OSPEEDR_OSPEEDR11_Msk      (0x3U << GPIO_OSPEEDR_OSPEEDR11_Pos)   /*!< 0x00C00000 */
#define GPIO_OSPEEDR_OSPEEDR11          GPIO_OSPEEDR_OSPEEDR11_Msk
#define GPIO_OSPEEDR_OSPEEDR11_0        (0x1U << GPIO_OSPEEDR_OSPEEDR11_Pos)   /*!< 0x00400000 */
#define GPIO_OSPEEDR_OSPEEDR11_1        (0x2U << GPIO_OSPEEDR_OSPEEDR11_Pos)   /*!< 0x00800000 */
#define GPIO_OSPEEDR_OSPEEDR12_Pos      (24U)
#define GPIO_OSPEEDR_OSPEEDR12_Msk      (0x3U << GPIO_OSPEEDR_OSPEEDR12_Pos)   /*!< 0x03000000 */
#define GPIO_OSPEEDR_OSPEEDR12          GPIO_OSPEEDR_OSPEEDR12_Msk
#define GPIO_OSPEEDR_OSPEEDR12_0        (0x1U << GPIO_OSPEEDR_OSPEEDR12_Pos)   /*!< 0x01000000 */
#define GPIO_OSPEEDR_OSPEEDR12_1        (0x2U << GPIO_OSPEEDR_OSPEEDR12_Pos)   /*!< 0x02000000 */
#define GPIO_OSPEEDR_OSPEEDR13_Pos      (26U)
#define GPIO_OSPEEDR_OSPEEDR13_Msk      (0x3U << GPIO_OSPEEDR_OSPEEDR13_Pos)   /*!< 0x0C000000 */
#define GPIO_OSPEEDR_OSPEEDR13          GPIO_OSPEEDR_OSPEEDR13_Msk
#define GPIO_OSPEEDR_OSPEEDR13_0        (0x1U << GPIO_OSPEEDR_OSPEEDR13_Pos)   /*!< 0x04000000 */
#define GPIO_OSPEEDR_OSPEEDR13_1        (0x2U << GPIO_OSPEEDR_OSPEEDR13_Pos)   /*!< 0x08000000 */
#define GPIO_OSPEEDR_OSPEEDR14_Pos      (28U)
#define GPIO_OSPEEDR_OSPEEDR14_Msk      (0x3U << GPIO_OSPEEDR_OSPEEDR14_Pos)   /*!< 0x30000000 */
#define GPIO_OSPEEDR_OSPEEDR14          GPIO_OSPEEDR_OSPEEDR14_Msk
#define GPIO_OSPEEDR_OSPEEDR14_0        (0x1U << GPIO_OSPEEDR_OSPEEDR14_Pos)   /*!< 0x10000000 */
#define GPIO_OSPEEDR_OSPEEDR14_1        (0x2U << GPIO_OSPEEDR_OSPEEDR14_Pos)   /*!< 0x20000000 */
#define GPIO_OSPEEDR_OSPEEDR15_Pos      (30)
#define GPIO_OSPEEDR_OSPEEDR15_Msk      (0x3U << GPIO_OSPEEDR_OSPEEDR15_Pos)   /*!< 0xC0000000 */
#define GPIO_OSPEEDR_OSPEEDR15          GPIO_OSPEEDR_OSPEEDR15_Msk
#define GPIO_OSPEEDR_OSPEEDR15_0        (0x1U << GPIO_OSPEEDR_OSPEEDR15_Pos)   /*!< 0x40000000 */
#define GPIO_OSPEEDR_OSPEEDR15_1        (0x2U << GPIO_OSPEEDR_OSPEEDR15_Pos)   /*!< 0x80000000 */
/* Old Bit definition for GPIO_OSPEEDR register maintained for legacy purpose */
#define GPIO_OSPEEDER_OSPEEDR0     GPIO_OSPEEDR_OSPEEDR0
#define GPIO_OSPEEDER_OSPEEDR0_0   GPIO_OSPEEDR_OSPEEDR0_0
#define GPIO_OSPEEDER_OSPEEDR0_1   GPIO_OSPEEDR_OSPEEDR0_1
#define GPIO_OSPEEDER_OSPEEDR1     GPIO_OSPEEDR_OSPEEDR1
#define GPIO_OSPEEDER_OSPEEDR1_0   GPIO_OSPEEDR_OSPEEDR1_0
#define GPIO_OSPEEDER_OSPEEDR1_1   GPIO_OSPEEDR_OSPEEDR1_1
#define GPIO_OSPEEDER_OSPEEDR2     GPIO_OSPEEDR_OSPEEDR2
#define GPIO_OSPEEDER_OSPEEDR2_0   GPIO_OSPEEDR_OSPEEDR2_0
#define GPIO_OSPEEDER_OSPEEDR2_1   GPIO_OSPEEDR_OSPEEDR2_1
#define GPIO_OSPEEDER_OSPEEDR3     GPIO_OSPEEDR_OSPEEDR3
#define GPIO_OSPEEDER_OSPEEDR3_0   GPIO_OSPEEDR_OSPEEDR3_0
#define GPIO_OSPEEDER_OSPEEDR3_1   GPIO_OSPEEDR_OSPEEDR3_1
#define GPIO_OSPEEDER_OSPEEDR4     GPIO_OSPEEDR_OSPEEDR4
#define GPIO_OSPEEDER_OSPEEDR4_0   GPIO_OSPEEDR_OSPEEDR4_0
#define GPIO_OSPEEDER_OSPEEDR4_1   GPIO_OSPEEDR_OSPEEDR4_1
#define GPIO_OSPEEDER_OSPEEDR5     GPIO_OSPEEDR_OSPEEDR5
#define GPIO_OSPEEDER_OSPEEDR5_0   GPIO_OSPEEDR_OSPEEDR5_0
#define GPIO_OSPEEDER_OSPEEDR5_1   GPIO_OSPEEDR_OSPEEDR5_1
#define GPIO_OSPEEDER_OSPEEDR6     GPIO_OSPEEDR_OSPEEDR6
#define GPIO_OSPEEDER_OSPEEDR6_0   GPIO_OSPEEDR_OSPEEDR6_0
#define GPIO_OSPEEDER_OSPEEDR6_1   GPIO_OSPEEDR_OSPEEDR6_1
#define GPIO_OSPEEDER_OSPEEDR7     GPIO_OSPEEDR_OSPEEDR7
#define GPIO_OSPEEDER_OSPEEDR7_0   GPIO_OSPEEDR_OSPEEDR7_0
#define GPIO_OSPEEDER_OSPEEDR7_1   GPIO_OSPEEDR_OSPEEDR7_1
#define GPIO_OSPEEDER_OSPEEDR8     GPIO_OSPEEDR_OSPEEDR8
#define GPIO_OSPEEDER_OSPEEDR8_0   GPIO_OSPEEDR_OSPEEDR8_0
#define GPIO_OSPEEDER_OSPEEDR8_1   GPIO_OSPEEDR_OSPEEDR8_1
#define GPIO_OSPEEDER_OSPEEDR9     GPIO_OSPEEDR_OSPEEDR9
#define GPIO_OSPEEDER_OSPEEDR9_0   GPIO_OSPEEDR_OSPEEDR9_0
#define GPIO_OSPEEDER_OSPEEDR9_1   GPIO_OSPEEDR_OSPEEDR9_1
#define GPIO_OSPEEDER_OSPEEDR10    GPIO_OSPEEDR_OSPEEDR10
#define GPIO_OSPEEDER_OSPEEDR10_0  GPIO_OSPEEDR_OSPEEDR10_0
#define GPIO_OSPEEDER_OSPEEDR10_1  GPIO_OSPEEDR_OSPEEDR10_1
#define GPIO_OSPEEDER_OSPEEDR11    GPIO_OSPEEDR_OSPEEDR11
#define GPIO_OSPEEDER_OSPEEDR11_0  GPIO_OSPEEDR_OSPEEDR11_0
#define GPIO_OSPEEDER_OSPEEDR11_1  GPIO_OSPEEDR_OSPEEDR11_1
#define GPIO_OSPEEDER_OSPEEDR12    GPIO_OSPEEDR_OSPEEDR12
#define GPIO_OSPEEDER_OSPEEDR12_0  GPIO_OSPEEDR_OSPEEDR12_0
#define GPIO_OSPEEDER_OSPEEDR12_1  GPIO_OSPEEDR_OSPEEDR12_1
#define GPIO_OSPEEDER_OSPEEDR13    GPIO_OSPEEDR_OSPEEDR13
#define GPIO_OSPEEDER_OSPEEDR13_0  GPIO_OSPEEDR_OSPEEDR13_0
#define GPIO_OSPEEDER_OSPEEDR13_1  GPIO_OSPEEDR_OSPEEDR13_1
#define GPIO_OSPEEDER_OSPEEDR14    GPIO_OSPEEDR_OSPEEDR14
#define GPIO_OSPEEDER_OSPEEDR14_0  GPIO_OSPEEDR_OSPEEDR14_0
#define GPIO_OSPEEDER_OSPEEDR14_1  GPIO_OSPEEDR_OSPEEDR14_1
#define GPIO_OSPEEDER_OSPEEDR15    GPIO_OSPEEDR_OSPEEDR15
#define GPIO_OSPEEDER_OSPEEDR15_0  GPIO_OSPEEDR_OSPEEDR15_0
#define GPIO_OSPEEDER_OSPEEDR15_1  GPIO_OSPEEDR_OSPEEDR15_1
/*******************  Bit definition for GPIO_PUPDR register ******************/
#define GPIO_PUPDR_PUPDR0_Pos           (0)
#define GPIO_PUPDR_PUPDR0_Msk           (0x3U << GPIO_PUPDR_PUPDR0_Pos)        /*!< 0x00000003 */
#define GPIO_PUPDR_PUPDR0               GPIO_PUPDR_PUPDR0_Msk
#define GPIO_PUPDR_PUPDR0_0             (0x1U << GPIO_PUPDR_PUPDR0_Pos)        /*!< 0x00000001 */
#define GPIO_PUPDR_PUPDR0_1             (0x2U << GPIO_PUPDR_PUPDR0_Pos)        /*!< 0x00000002 */
#define GPIO_PUPDR_PUPDR1_Pos           (2U)
#define GPIO_PUPDR_PUPDR1_Msk           (0x3U << GPIO_PUPDR_PUPDR1_Pos)        /*!< 0x0000000C */
#define GPIO_PUPDR_PUPDR1               GPIO_PUPDR_PUPDR1_Msk
#define GPIO_PUPDR_PUPDR1_0             (0x1U << GPIO_PUPDR_PUPDR1_Pos)        /*!< 0x00000004 */
#define GPIO_PUPDR_PUPDR1_1             (0x2U << GPIO_PUPDR_PUPDR1_Pos)        /*!< 0x00000008 */
#define GPIO_PUPDR_PUPDR2_Pos           (4U)
#define GPIO_PUPDR_PUPDR2_Msk           (0x3U << GPIO_PUPDR_PUPDR2_Pos)        /*!< 0x00000030 */
#define GPIO_PUPDR_PUPDR2               GPIO_PUPDR_PUPDR2_Msk
#define GPIO_PUPDR_PUPDR2_0             (0x1U << GPIO_PUPDR_PUPDR2_Pos)        /*!< 0x00000010 */
#define GPIO_PUPDR_PUPDR2_1             (0x2U << GPIO_PUPDR_PUPDR2_Pos)        /*!< 0x00000020 */
#define GPIO_PUPDR_PUPDR3_Pos           (6U)
#define GPIO_PUPDR_PUPDR3_Msk           (0x3U << GPIO_PUPDR_PUPDR3_Pos)        /*!< 0x000000C0 */
#define GPIO_PUPDR_PUPDR3               GPIO_PUPDR_PUPDR3_Msk
#define GPIO_PUPDR_PUPDR3_0             (0x1U << GPIO_PUPDR_PUPDR3_Pos)        /*!< 0x00000040 */
#define GPIO_PUPDR_PUPDR3_1             (0x2U << GPIO_PUPDR_PUPDR3_Pos)        /*!< 0x00000080 */
#define GPIO_PUPDR_PUPDR4_Pos           (8U)
#define GPIO_PUPDR_PUPDR4_Msk           (0x3U << GPIO_PUPDR_PUPDR4_Pos)        /*!< 0x00000300 */
#define GPIO_PUPDR_PUPDR4               GPIO_PUPDR_PUPDR4_Msk
#define GPIO_PUPDR_PUPDR4_0             (0x1U << GPIO_PUPDR_PUPDR4_Pos)        /*!< 0x00000100 */
#define GPIO_PUPDR_PUPDR4_1             (0x2U << GPIO_PUPDR_PUPDR4_Pos)        /*!< 0x00000200 */
#define GPIO_PUPDR_PUPDR5_Pos           (10)
#define GPIO_PUPDR_PUPDR5_Msk           (0x3U << GPIO_PUPDR_PUPDR5_Pos)        /*!< 0x00000C00 */
#define GPIO_PUPDR_PUPDR5               GPIO_PUPDR_PUPDR5_Msk
#define GPIO_PUPDR_PUPDR5_0             (0x1U << GPIO_PUPDR_PUPDR5_Pos)        /*!< 0x00000400 */
#define GPIO_PUPDR_PUPDR5_1             (0x2U << GPIO_PUPDR_PUPDR5_Pos)        /*!< 0x00000800 */
#define GPIO_PUPDR_PUPDR6_Pos           (12U)
#define GPIO_PUPDR_PUPDR6_Msk           (0x3U << GPIO_PUPDR_PUPDR6_Pos)        /*!< 0x00003000 */
#define GPIO_PUPDR_PUPDR6               GPIO_PUPDR_PUPDR6_Msk
#define GPIO_PUPDR_PUPDR6_0             (0x1U << GPIO_PUPDR_PUPDR6_Pos)        /*!< 0x00001000 */
#define GPIO_PUPDR_PUPDR6_1             (0x2U << GPIO_PUPDR_PUPDR6_Pos)        /*!< 0x00002000 */
#define GPIO_PUPDR_PUPDR7_Pos           (14U)
#define GPIO_PUPDR_PUPDR7_Msk           (0x3U << GPIO_PUPDR_PUPDR7_Pos)        /*!< 0x0000C000 */
#define GPIO_PUPDR_PUPDR7               GPIO_PUPDR_PUPDR7_Msk
#define GPIO_PUPDR_PUPDR7_0             (0x1U << GPIO_PUPDR_PUPDR7_Pos)        /*!< 0x00004000 */
#define GPIO_PUPDR_PUPDR7_1             (0x2U << GPIO_PUPDR_PUPDR7_Pos)        /*!< 0x00008000 */
#define GPIO_PUPDR_PUPDR8_Pos           (16U)
#define GPIO_PUPDR_PUPDR8_Msk           (0x3U << GPIO_PUPDR_PUPDR8_Pos)        /*!< 0x00030000 */
#define GPIO_PUPDR_PUPDR8               GPIO_PUPDR_PUPDR8_Msk
#define GPIO_PUPDR_PUPDR8_0             (0x1U << GPIO_PUPDR_PUPDR8_Pos)        /*!< 0x00010000 */
#define GPIO_PUPDR_PUPDR8_1             (0x2U << GPIO_PUPDR_PUPDR8_Pos)        /*!< 0x00020000 */
#define GPIO_PUPDR_PUPDR9_Pos           (18U)
#define GPIO_PUPDR_PUPDR9_Msk           (0x3U << GPIO_PUPDR_PUPDR9_Pos)        /*!< 0x000C0000 */
#define GPIO_PUPDR_PUPDR9               GPIO_PUPDR_PUPDR9_Msk
#define GPIO_PUPDR_PUPDR9_0             (0x1U << GPIO_PUPDR_PUPDR9_Pos)        /*!< 0x00040000 */
#define GPIO_PUPDR_PUPDR9_1             (0x2U << GPIO_PUPDR_PUPDR9_Pos)        /*!< 0x00080000 */
#define GPIO_PUPDR_PUPDR10_Pos          (20)
#define GPIO_PUPDR_PUPDR10_Msk          (0x3U << GPIO_PUPDR_PUPDR10_Pos)       /*!< 0x00300000 */
#define GPIO_PUPDR_PUPDR10              GPIO_PUPDR_PUPDR10_Msk
#define GPIO_PUPDR_PUPDR10_0            (0x1U << GPIO_PUPDR_PUPDR10_Pos)       /*!< 0x00100000 */
#define GPIO_PUPDR_PUPDR10_1            (0x2U << GPIO_PUPDR_PUPDR10_Pos)       /*!< 0x00200000 */
#define GPIO_PUPDR_PUPDR11_Pos          (22U)
#define GPIO_PUPDR_PUPDR11_Msk          (0x3U << GPIO_PUPDR_PUPDR11_Pos)       /*!< 0x00C00000 */
#define GPIO_PUPDR_PUPDR11              GPIO_PUPDR_PUPDR11_Msk
#define GPIO_PUPDR_PUPDR11_0            (0x1U << GPIO_PUPDR_PUPDR11_Pos)       /*!< 0x00400000 */
#define GPIO_PUPDR_PUPDR11_1            (0x2U << GPIO_PUPDR_PUPDR11_Pos)       /*!< 0x00800000 */
#define GPIO_PUPDR_PUPDR12_Pos          (24U)
#define GPIO_PUPDR_PUPDR12_Msk          (0x3U << GPIO_PUPDR_PUPDR12_Pos)       /*!< 0x03000000 */
#define GPIO_PUPDR_PUPDR12              GPIO_PUPDR_PUPDR12_Msk
#define GPIO_PUPDR_PUPDR12_0            (0x1U << GPIO_PUPDR_PUPDR12_Pos)       /*!< 0x01000000 */
#define GPIO_PUPDR_PUPDR12_1            (0x2U << GPIO_PUPDR_PUPDR12_Pos)       /*!< 0x02000000 */
#define GPIO_PUPDR_PUPDR13_Pos          (26U)
#define GPIO_PUPDR_PUPDR13_Msk          (0x3U << GPIO_PUPDR_PUPDR13_Pos)       /*!< 0x0C000000 */
#define GPIO_PUPDR_PUPDR13              GPIO_PUPDR_PUPDR13_Msk
#define GPIO_PUPDR_PUPDR13_0            (0x1U << GPIO_PUPDR_PUPDR13_Pos)       /*!< 0x04000000 */
#define GPIO_PUPDR_PUPDR13_1            (0x2U << GPIO_PUPDR_PUPDR13_Pos)       /*!< 0x08000000 */
#define GPIO_PUPDR_PUPDR14_Pos          (28U)
#define GPIO_PUPDR_PUPDR14_Msk          (0x3U << GPIO_PUPDR_PUPDR14_Pos)       /*!< 0x30000000 */
#define GPIO_PUPDR_PUPDR14              GPIO_PUPDR_PUPDR14_Msk
#define GPIO_PUPDR_PUPDR14_0            (0x1U << GPIO_PUPDR_PUPDR14_Pos)       /*!< 0x10000000 */
#define GPIO_PUPDR_PUPDR14_1            (0x2U << GPIO_PUPDR_PUPDR14_Pos)       /*!< 0x20000000 */
#define GPIO_PUPDR_PUPDR15_Pos          (30)
#define GPIO_PUPDR_PUPDR15_Msk          (0x3U << GPIO_PUPDR_PUPDR15_Pos)       /*!< 0xC0000000 */
#define GPIO_PUPDR_PUPDR15              GPIO_PUPDR_PUPDR15_Msk
#define GPIO_PUPDR_PUPDR15_0            (0x1U << GPIO_PUPDR_PUPDR15_Pos)       /*!< 0x40000000 */
#define GPIO_PUPDR_PUPDR15_1            (0x2U << GPIO_PUPDR_PUPDR15_Pos)       /*!< 0x80000000 */
/*******************  Bit definition for GPIO_IDR register  *******************/
#define GPIO_IDR_0                      (0x00000001U)
#define GPIO_IDR_1                      (0x00000002U)
#define GPIO_IDR_2                      (0x00000004U)
#define GPIO_IDR_3                      (0x00000008U)
#define GPIO_IDR_4                      (0x00000010)
#define GPIO_IDR_5                      (0x00000020)
#define GPIO_IDR_6                      (0x00000040)
#define GPIO_IDR_7                      (0x00000080)
#define GPIO_IDR_8                      (0x00000100)
#define GPIO_IDR_9                      (0x00000200)
#define GPIO_IDR_10                     (0x00000400)
#define GPIO_IDR_11                     (0x00000800)
#define GPIO_IDR_12                     (0x00001000)
#define GPIO_IDR_13                     (0x00002000)
#define GPIO_IDR_14                     (0x00004000)
#define GPIO_IDR_15                     (0x00008000)
/******************  Bit definition for GPIO_ODR register  ********************/
#define GPIO_ODR_0                      (0x00000001U)
#define GPIO_ODR_1                      (0x00000002U)
#define GPIO_ODR_2                      (0x00000004U)
#define GPIO_ODR_3                      (0x00000008U)
#define GPIO_ODR_4                      (0x00000010)
#define GPIO_ODR_5                      (0x00000020)
#define GPIO_ODR_6                      (0x00000040)
#define GPIO_ODR_7                      (0x00000080)
#define GPIO_ODR_8                      (0x00000100)
#define GPIO_ODR_9                      (0x00000200)
#define GPIO_ODR_10                     (0x00000400)
#define GPIO_ODR_11                     (0x00000800)
#define GPIO_ODR_12                     (0x00001000)
#define GPIO_ODR_13                     (0x00002000)
#define GPIO_ODR_14                     (0x00004000)
#define GPIO_ODR_15                     (0x00008000)
/****************** Bit definition for GPIO_BSRR register  ********************/
#define GPIO_BSRR_BS_0                  (0x00000001U)
#define GPIO_BSRR_BS_1                  (0x00000002U)
#define GPIO_BSRR_BS_2                  (0x00000004U)
#define GPIO_BSRR_BS_3                  (0x00000008U)
#define GPIO_BSRR_BS_4                  (0x00000010)
#define GPIO_BSRR_BS_5                  (0x00000020)
#define GPIO_BSRR_BS_6                  (0x00000040)
#define GPIO_BSRR_BS_7                  (0x00000080)
#define GPIO_BSRR_BS_8                  (0x00000100)
#define GPIO_BSRR_BS_9                  (0x00000200)
#define GPIO_BSRR_BS_10                 (0x00000400)
#define GPIO_BSRR_BS_11                 (0x00000800)
#define GPIO_BSRR_BS_12                 (0x00001000)
#define GPIO_BSRR_BS_13                 (0x00002000)
#define GPIO_BSRR_BS_14                 (0x00004000)
#define GPIO_BSRR_BS_15                 (0x00008000)
#define GPIO_BSRR_BR_0                  (0x00010000)
#define GPIO_BSRR_BR_1                  (0x00020000)
#define GPIO_BSRR_BR_2                  (0x00040000)
#define GPIO_BSRR_BR_3                  (0x00080000)
#define GPIO_BSRR_BR_4                  (0x00100000)
#define GPIO_BSRR_BR_5                  (0x00200000)
#define GPIO_BSRR_BR_6                  (0x00400000)
#define GPIO_BSRR_BR_7                  (0x00800000)
#define GPIO_BSRR_BR_8                  (0x01000000)
#define GPIO_BSRR_BR_9                  (0x02000000)
#define GPIO_BSRR_BR_10                 (0x04000000)
#define GPIO_BSRR_BR_11                 (0x08000000)
#define GPIO_BSRR_BR_12                 (0x10000000)
#define GPIO_BSRR_BR_13                 (0x20000000)
#define GPIO_BSRR_BR_14                 (0x40000000)
#define GPIO_BSRR_BR_15                 (0x80000000)
/****************** Bit definition for GPIO_LCKR register  ********************/
#define GPIO_LCKR_LCK0_Pos              (0)
#define GPIO_LCKR_LCK0_Msk              (0x1U << GPIO_LCKR_LCK0_Pos)           /*!< 0x00000001 */
#define GPIO_LCKR_LCK0                  GPIO_LCKR_LCK0_Msk
#define GPIO_LCKR_LCK1_Pos              (1U)
#define GPIO_LCKR_LCK1_Msk              (0x1U << GPIO_LCKR_LCK1_Pos)           /*!< 0x00000002 */
#define GPIO_LCKR_LCK1                  GPIO_LCKR_LCK1_Msk
#define GPIO_LCKR_LCK2_Pos              (2U)
#define GPIO_LCKR_LCK2_Msk              (0x1U << GPIO_LCKR_LCK2_Pos)           /*!< 0x00000004 */
#define GPIO_LCKR_LCK2                  GPIO_LCKR_LCK2_Msk
#define GPIO_LCKR_LCK3_Pos              (3U)
#define GPIO_LCKR_LCK3_Msk              (0x1U << GPIO_LCKR_LCK3_Pos)           /*!< 0x00000008 */
#define GPIO_LCKR_LCK3                  GPIO_LCKR_LCK3_Msk
#define GPIO_LCKR_LCK4_Pos              (4U)
#define GPIO_LCKR_LCK4_Msk              (0x1U << GPIO_LCKR_LCK4_Pos)           /*!< 0x00000010 */
#define GPIO_LCKR_LCK4                  GPIO_LCKR_LCK4_Msk
#define GPIO_LCKR_LCK5_Pos              (5U)
#define GPIO_LCKR_LCK5_Msk              (0x1U << GPIO_LCKR_LCK5_Pos)           /*!< 0x00000020 */
#define GPIO_LCKR_LCK5                  GPIO_LCKR_LCK5_Msk
#define GPIO_LCKR_LCK6_Pos              (6U)
#define GPIO_LCKR_LCK6_Msk              (0x1U << GPIO_LCKR_LCK6_Pos)           /*!< 0x00000040 */
#define GPIO_LCKR_LCK6                  GPIO_LCKR_LCK6_Msk
#define GPIO_LCKR_LCK7_Pos              (7U)
#define GPIO_LCKR_LCK7_Msk              (0x1U << GPIO_LCKR_LCK7_Pos)           /*!< 0x00000080 */
#define GPIO_LCKR_LCK7                  GPIO_LCKR_LCK7_Msk
#define GPIO_LCKR_LCK8_Pos              (8U)
#define GPIO_LCKR_LCK8_Msk              (0x1U << GPIO_LCKR_LCK8_Pos)           /*!< 0x00000100 */
#define GPIO_LCKR_LCK8                  GPIO_LCKR_LCK8_Msk
#define GPIO_LCKR_LCK9_Pos              (9U)
#define GPIO_LCKR_LCK9_Msk              (0x1U << GPIO_LCKR_LCK9_Pos)           /*!< 0x00000200 */
#define GPIO_LCKR_LCK9                  GPIO_LCKR_LCK9_Msk
#define GPIO_LCKR_LCK10_Pos             (10)
#define GPIO_LCKR_LCK10_Msk             (0x1U << GPIO_LCKR_LCK10_Pos)          /*!< 0x00000400 */
#define GPIO_LCKR_LCK10                 GPIO_LCKR_LCK10_Msk
#define GPIO_LCKR_LCK11_Pos             (11U)
#define GPIO_LCKR_LCK11_Msk             (0x1U << GPIO_LCKR_LCK11_Pos)          /*!< 0x00000800 */
#define GPIO_LCKR_LCK11                 GPIO_LCKR_LCK11_Msk
#define GPIO_LCKR_LCK12_Pos             (12U)
#define GPIO_LCKR_LCK12_Msk             (0x1U << GPIO_LCKR_LCK12_Pos)          /*!< 0x00001000 */
#define GPIO_LCKR_LCK12                 GPIO_LCKR_LCK12_Msk
#define GPIO_LCKR_LCK13_Pos             (13U)
#define GPIO_LCKR_LCK13_Msk             (0x1U << GPIO_LCKR_LCK13_Pos)          /*!< 0x00002000 */
#define GPIO_LCKR_LCK13                 GPIO_LCKR_LCK13_Msk
#define GPIO_LCKR_LCK14_Pos             (14U)
#define GPIO_LCKR_LCK14_Msk             (0x1U << GPIO_LCKR_LCK14_Pos)          /*!< 0x00004000 */
#define GPIO_LCKR_LCK14                 GPIO_LCKR_LCK14_Msk
#define GPIO_LCKR_LCK15_Pos             (15U)
#define GPIO_LCKR_LCK15_Msk             (0x1U << GPIO_LCKR_LCK15_Pos)          /*!< 0x00008000 */
#define GPIO_LCKR_LCK15                 GPIO_LCKR_LCK15_Msk
#define GPIO_LCKR_LCKK_Pos              (16U)
#define GPIO_LCKR_LCKK_Msk              (0x1U << GPIO_LCKR_LCKK_Pos)           /*!< 0x00010000 */
#define GPIO_LCKR_LCKK                  GPIO_LCKR_LCKK_Msk
/****************** Bit definition for GPIO_AFRL register  ********************/
#define GPIO_AFRL_AFSEL0_Pos            (0)
#define GPIO_AFRL_AFSEL0_Msk            (0xFU << GPIO_AFRL_AFSEL0_Pos)         /*!< 0x0000000F */
#define GPIO_AFRL_AFSEL0                GPIO_AFRL_AFSEL0_Msk
#define GPIO_AFRL_AFSEL1_Pos            (4U)
#define GPIO_AFRL_AFSEL1_Msk            (0xFU << GPIO_AFRL_AFSEL1_Pos)         /*!< 0x000000F0 */
#define GPIO_AFRL_AFSEL1                GPIO_AFRL_AFSEL1_Msk
#define GPIO_AFRL_AFSEL2_Pos            (8U)
#define GPIO_AFRL_AFSEL2_Msk            (0xFU << GPIO_AFRL_AFSEL2_Pos)         /*!< 0x00000F00 */
#define GPIO_AFRL_AFSEL2                GPIO_AFRL_AFSEL2_Msk
#define GPIO_AFRL_AFSEL3_Pos            (12U)
#define GPIO_AFRL_AFSEL3_Msk            (0xFU << GPIO_AFRL_AFSEL3_Pos)         /*!< 0x0000F000 */
#define GPIO_AFRL_AFSEL3                GPIO_AFRL_AFSEL3_Msk
#define GPIO_AFRL_AFSEL4_Pos            (16U)
#define GPIO_AFRL_AFSEL4_Msk            (0xFU << GPIO_AFRL_AFSEL4_Pos)         /*!< 0x000F0000 */
#define GPIO_AFRL_AFSEL4                GPIO_AFRL_AFSEL4_Msk
#define GPIO_AFRL_AFSEL5_Pos            (20)
#define GPIO_AFRL_AFSEL5_Msk            (0xFU << GPIO_AFRL_AFSEL5_Pos)         /*!< 0x00F00000 */
#define GPIO_AFRL_AFSEL5                GPIO_AFRL_AFSEL5_Msk
#define GPIO_AFRL_AFSEL6_Pos            (24U)
#define GPIO_AFRL_AFSEL6_Msk            (0xFU << GPIO_AFRL_AFSEL6_Pos)         /*!< 0x0F000000 */
#define GPIO_AFRL_AFSEL6                GPIO_AFRL_AFSEL6_Msk
#define GPIO_AFRL_AFSEL7_Pos            (28U)
#define GPIO_AFRL_AFSEL7_Msk            (0xFU << GPIO_AFRL_AFSEL7_Pos)         /*!< 0xF0000000 */
#define GPIO_AFRL_AFSEL7                GPIO_AFRL_AFSEL7_Msk
#define GPIO_AFRL_AFRL0_Pos             GPIO_AFRL_AFSEL0_Pos
#define GPIO_AFRL_AFRL0_Msk             GPIO_AFRL_AFSEL0_Msk
#define GPIO_AFRL_AFRL0                 GPIO_AFRL_AFSEL0
#define GPIO_AFRL_AFRL1_Pos             GPIO_AFRL_AFSEL1_Pos
#define GPIO_AFRL_AFRL1_Msk             GPIO_AFRL_AFSEL1_Msk
#define GPIO_AFRL_AFRL1                 GPIO_AFRL_AFSEL1
#define GPIO_AFRL_AFRL2_Pos             GPIO_AFRL_AFSEL2_Pos
#define GPIO_AFRL_AFRL2_Msk             GPIO_AFRL_AFSEL2_Msk
#define GPIO_AFRL_AFRL2                 GPIO_AFRL_AFSEL2
#define GPIO_AFRL_AFRL3_Pos             GPIO_AFRL_AFSEL3_Pos
#define GPIO_AFRL_AFRL3_Msk             GPIO_AFRL_AFSEL3_Msk
#define GPIO_AFRL_AFRL3                 GPIO_AFRL_AFSEL3
#define GPIO_AFRL_AFRL4_Pos             GPIO_AFRL_AFSEL4_Pos
#define GPIO_AFRL_AFRL4_Msk             GPIO_AFRL_AFSEL4_Msk
#define GPIO_AFRL_AFRL4                 GPIO_AFRL_AFSEL4
#define GPIO_AFRL_AFRL5_Pos             GPIO_AFRL_AFSEL5_Pos
#define GPIO_AFRL_AFRL5_Msk             GPIO_AFRL_AFSEL5_Msk
#define GPIO_AFRL_AFRL5                 GPIO_AFRL_AFSEL5
#define GPIO_AFRL_AFRL6_Pos             GPIO_AFRL_AFSEL6_Pos
#define GPIO_AFRL_AFRL6_Msk             GPIO_AFRL_AFSEL6_Msk
#define GPIO_AFRL_AFRL6                 GPIO_AFRL_AFSEL6
#define GPIO_AFRL_AFRL7_Pos             GPIO_AFRL_AFSEL7_Pos
#define GPIO_AFRL_AFRL7_Msk             GPIO_AFRL_AFSEL7_Msk
#define GPIO_AFRL_AFRL7                 GPIO_AFRL_AFSEL7
/****************** Bit definition for GPIO_AFRH register  ********************/
#define GPIO_AFRH_AFSEL8_Pos            (0)
#define GPIO_AFRH_AFSEL8_Msk            (0xFU << GPIO_AFRH_AFSEL8_Pos)         /*!< 0x0000000F */
#define GPIO_AFRH_AFSEL8                GPIO_AFRH_AFSEL8_Msk
#define GPIO_AFRH_AFSEL9_Pos            (4U)
#define GPIO_AFRH_AFSEL9_Msk            (0xFU << GPIO_AFRH_AFSEL9_Pos)         /*!< 0x000000F0 */
#define GPIO_AFRH_AFSEL9                GPIO_AFRH_AFSEL9_Msk
#define GPIO_AFRH_AFSEL10_Pos           (8U)
#define GPIO_AFRH_AFSEL10_Msk           (0xFU << GPIO_AFRH_AFSEL10_Pos)        /*!< 0x00000F00 */
#define GPIO_AFRH_AFSEL10               GPIO_AFRH_AFSEL10_Msk
#define GPIO_AFRH_AFSEL11_Pos           (12U)
#define GPIO_AFRH_AFSEL11_Msk           (0xFU << GPIO_AFRH_AFSEL11_Pos)        /*!< 0x0000F000 */
#define GPIO_AFRH_AFSEL11               GPIO_AFRH_AFSEL11_Msk
#define GPIO_AFRH_AFSEL12_Pos           (16U)
#define GPIO_AFRH_AFSEL12_Msk           (0xFU << GPIO_AFRH_AFSEL12_Pos)        /*!< 0x000F0000 */
#define GPIO_AFRH_AFSEL12               GPIO_AFRH_AFSEL12_Msk
#define GPIO_AFRH_AFSEL13_Pos           (20)
#define GPIO_AFRH_AFSEL13_Msk           (0xFU << GPIO_AFRH_AFSEL13_Pos)        /*!< 0x00F00000 */
#define GPIO_AFRH_AFSEL13               GPIO_AFRH_AFSEL13_Msk
#define GPIO_AFRH_AFSEL14_Pos           (24U)
#define GPIO_AFRH_AFSEL14_Msk           (0xFU << GPIO_AFRH_AFSEL14_Pos)        /*!< 0x0F000000 */
#define GPIO_AFRH_AFSEL14               GPIO_AFRH_AFSEL14_Msk
#define GPIO_AFRH_AFSEL15_Pos           (28U)
#define GPIO_AFRH_AFSEL15_Msk           (0xFU << GPIO_AFRH_AFSEL15_Pos)        /*!< 0xF0000000 */
#define GPIO_AFRH_AFSEL15               GPIO_AFRH_AFSEL15_Msk
#define GPIO_AFRH_AFRH0_Pos             GPIO_AFRH_AFSEL8_Pos
#define GPIO_AFRH_AFRH0_Msk             GPIO_AFRH_AFSEL8_Msk
#define GPIO_AFRH_AFRH0                 GPIO_AFRH_AFSEL8
#define GPIO_AFRH_AFRH1_Pos             GPIO_AFRH_AFSEL9_Pos
#define GPIO_AFRH_AFRH1_Msk             GPIO_AFRH_AFSEL9_Msk
#define GPIO_AFRH_AFRH1                 GPIO_AFRH_AFSEL9
#define GPIO_AFRH_AFRH2_Pos             GPIO_AFRH_AFSEL10_Pos
#define GPIO_AFRH_AFRH2_Msk             GPIO_AFRH_AFSEL10_Msk
#define GPIO_AFRH_AFRH2                 GPIO_AFRH_AFSEL10
#define GPIO_AFRH_AFRH3_Pos             GPIO_AFRH_AFSEL11_Pos
#define GPIO_AFRH_AFRH3_Msk             GPIO_AFRH_AFSEL11_Msk
#define GPIO_AFRH_AFRH3                 GPIO_AFRH_AFSEL11
#define GPIO_AFRH_AFRH4_Pos             GPIO_AFRH_AFSEL12_Pos
#define GPIO_AFRH_AFRH4_Msk             GPIO_AFRH_AFSEL12_Msk
#define GPIO_AFRH_AFRH4                 GPIO_AFRH_AFSEL12
#define GPIO_AFRH_AFRH5_Pos             GPIO_AFRH_AFSEL13_Pos
#define GPIO_AFRH_AFRH5_Msk             GPIO_AFRH_AFSEL13_Msk
#define GPIO_AFRH_AFRH5                 GPIO_AFRH_AFSEL13
#define GPIO_AFRH_AFRH6_Pos             GPIO_AFRH_AFSEL14_Pos
#define GPIO_AFRH_AFRH6_Msk             GPIO_AFRH_AFSEL14_Msk
#define GPIO_AFRH_AFRH6                 GPIO_AFRH_AFSEL14
#define GPIO_AFRH_AFRH7_Pos             GPIO_AFRH_AFSEL15_Pos
#define GPIO_AFRH_AFRH7_Msk             GPIO_AFRH_AFSEL15_Msk
#define GPIO_AFRH_AFRH7                 GPIO_AFRH_AFSEL15
/****************** Bit definition for GPIO_BRR register  *********************/
#define GPIO_BRR_BR_0                   (0x00000001U)
#define GPIO_BRR_BR_1                   (0x00000002U)
#define GPIO_BRR_BR_2                   (0x00000004U)
#define GPIO_BRR_BR_3                   (0x00000008U)
#define GPIO_BRR_BR_4                   (0x00000010)
#define GPIO_BRR_BR_5                   (0x00000020)
#define GPIO_BRR_BR_6                   (0x00000040)
#define GPIO_BRR_BR_7                   (0x00000080)
#define GPIO_BRR_BR_8                   (0x00000100)
#define GPIO_BRR_BR_9                   (0x00000200)
#define GPIO_BRR_BR_10                  (0x00000400)
#define GPIO_BRR_BR_11                  (0x00000800)
#define GPIO_BRR_BR_12                  (0x00001000)
#define GPIO_BRR_BR_13                  (0x00002000)
#define GPIO_BRR_BR_14                  (0x00004000)
#define GPIO_BRR_BR_15                  (0x00008000)

//--------------------------------------------------------------------------------
#define FLASH AHBPERIPH_BASE+0x00002000

//--------------------------------------------------------------------------------
//--- FLASH_TypeDef
#define ACR       0x00
#define KEYR      0x04
#define OPTKEYR   0x08
#define SR        0x0C
#define CR_FLASH  0x10
#define AR        0x14
#define WRPR      0x20

/*******************  Bit definition for FLASH_ACR register  ******************/
#define FLASH_ACR_LATENCY_Pos             (0)
#define FLASH_ACR_LATENCY_Msk             (0x1U << FLASH_ACR_LATENCY_Pos)      /*!< 0x00000001 */
#define FLASH_ACR_LATENCY                 FLASH_ACR_LATENCY_Msk                /*!< LATENCY bit (Latency) */
#define FLASH_ACR_PRFTBE_Pos              (4U)
#define FLASH_ACR_PRFTBE_Msk              (0x1U << FLASH_ACR_PRFTBE_Pos)       /*!< 0x00000010 */
#define FLASH_ACR_PRFTBE                  FLASH_ACR_PRFTBE_Msk                 /*!< Prefetch Buffer Enable */
#define FLASH_ACR_PRFTBS_Pos              (5U)
#define FLASH_ACR_PRFTBS_Msk              (0x1U << FLASH_ACR_PRFTBS_Pos)       /*!< 0x00000020 */
#define FLASH_ACR_PRFTBS                  FLASH_ACR_PRFTBS_Msk                 /*!< Prefetch Buffer Status */
/******************  Bit definition for FLASH_KEYR register  ******************/
#define FLASH_KEYR_FKEYR_Pos              (0)
#define FLASH_KEYR_FKEYR_Msk              (0xFFFFFFFFU << FLASH_KEYR_FKEYR_Pos) /*!< 0xFFFFFFFF */
#define FLASH_KEYR_FKEYR                  FLASH_KEYR_FKEYR_Msk                 /*!< FPEC Key */
/*****************  Bit definition for FLASH_OPTKEYR register  ****************/
#define FLASH_OPTKEYR_OPTKEYR_Pos         (0)
#define FLASH_OPTKEYR_OPTKEYR_Msk         (0xFFFFFFFFU << FLASH_OPTKEYR_OPTKEYR_Pos) /*!< 0xFFFFFFFF */
#define FLASH_OPTKEYR_OPTKEYR             FLASH_OPTKEYR_OPTKEYR_Msk            /*!< Option Byte Key */
#define FLASH_KEY1_Pos                    (0)
#define FLASH_KEY1_Msk                    (0x45670123U << FLASH_KEY1_Pos)      /*!< 0x45670123 */
#define FLASH_KEY1                        FLASH_KEY1_Msk                       /*!< Flash program erase key1 */
#define FLASH_KEY2_Pos                    (0)
#define FLASH_KEY2_Msk                    (0xCDEF89ABU << FLASH_KEY2_Pos)      /*!< 0xCDEF89AB */
#define FLASH_KEY2                        FLASH_KEY2_Msk                       /*!< Flash program erase key2: used with FLASH_PEKEY1
*/
#define FLASH_OPTKEY1_Pos                 (0)
#define FLASH_OPTKEY1_Msk                 (0x45670123U << FLASH_OPTKEY1_Pos)   /*!< 0x45670123 */
#define FLASH_OPTKEY1                     FLASH_OPTKEY1_Msk                    /*!< Flash option key1 */
#define FLASH_OPTKEY2_Pos                 (0)
#define FLASH_OPTKEY2_Msk                 (0xCDEF89ABU << FLASH_OPTKEY2_Pos)   /*!< 0xCDEF89AB */
#define FLASH_OPTKEY2                     FLASH_OPTKEY2_Msk                    /*!< Flash option key2: used with FLASH_OPTKEY1 to */
/******************  Bit definition for FLASH_SR register  *******************/
#define FLASH_SR_BSY_Pos                  (0)
#define FLASH_SR_BSY_Msk                  (0x1U << FLASH_SR_BSY_Pos)           /*!< 0x00000001 */
#define FLASH_SR_BSY                      FLASH_SR_BSY_Msk                     /*!< Busy */
#define FLASH_SR_PGERR_Pos                (2U)
#define FLASH_SR_PGERR_Msk                (0x1U << FLASH_SR_PGERR_Pos)         /*!< 0x00000004 */
#define FLASH_SR_PGERR                    FLASH_SR_PGERR_Msk                   /*!< Programming Error */
#define FLASH_SR_WRPRTERR_Pos             (4U)
#define FLASH_SR_WRPRTERR_Msk             (0x1U << FLASH_SR_WRPRTERR_Pos)      /*!< 0x00000010 */
#define FLASH_SR_WRPRTERR                 FLASH_SR_WRPRTERR_Msk                /*!< Write Protection Error */
#define FLASH_SR_EOP_Pos                  (5U)
#define FLASH_SR_EOP_Msk                  (0x1U << FLASH_SR_EOP_Pos)           /*!< 0x00000020 */
#define FLASH_SR_EOP                      FLASH_SR_EOP_Msk                     /*!< End of operation */
#define  FLASH_SR_WRPERR                     FLASH_SR_WRPRTERR             /*!< Legacy of Write Protection Error */
/*******************  Bit definition for FLASH_CR register  *******************/
#define FLASH_CR_PG_Pos                   (0)
#define FLASH_CR_PG_Msk                   (0x1U << FLASH_CR_PG_Pos)            /*!< 0x00000001 */
#define FLASH_CR_PG                       FLASH_CR_PG_Msk                      /*!< Programming */
#define FLASH_CR_PER_Pos                  (1U)
#define FLASH_CR_PER_Msk                  (0x1U << FLASH_CR_PER_Pos)           /*!< 0x00000002 */
#define FLASH_CR_PER                      FLASH_CR_PER_Msk                     /*!< Page Erase */
#define FLASH_CR_MER_Pos                  (2U)
#define FLASH_CR_MER_Msk                  (0x1U << FLASH_CR_MER_Pos)           /*!< 0x00000004 */
#define FLASH_CR_MER                      FLASH_CR_MER_Msk                     /*!< Mass Erase */
#define FLASH_CR_OPTPG_Pos                (4U)
#define FLASH_CR_OPTPG_Msk                (0x1U << FLASH_CR_OPTPG_Pos)         /*!< 0x00000010 */
#define FLASH_CR_OPTPG                    FLASH_CR_OPTPG_Msk                   /*!< Option Byte Programming */
#define FLASH_CR_OPTER_Pos                (5U)
#define FLASH_CR_OPTER_Msk                (0x1U << FLASH_CR_OPTER_Pos)         /*!< 0x00000020 */
#define FLASH_CR_OPTER                    FLASH_CR_OPTER_Msk                   /*!< Option Byte Erase */
#define FLASH_CR_STRT_Pos                 (6U)
#define FLASH_CR_STRT_Msk                 (0x1U << FLASH_CR_STRT_Pos)          /*!< 0x00000040 */
#define FLASH_CR_STRT                     FLASH_CR_STRT_Msk                    /*!< Start */
#define FLASH_CR_LOCK_Pos                 (7U)
#define FLASH_CR_LOCK_Msk                 (0x1U << FLASH_CR_LOCK_Pos)          /*!< 0x00000080 */
#define FLASH_CR_LOCK                     FLASH_CR_LOCK_Msk                    /*!< Lock */
#define FLASH_CR_OPTWRE_Pos               (9U)
#define FLASH_CR_OPTWRE_Msk               (0x1U << FLASH_CR_OPTWRE_Pos)        /*!< 0x00000200 */
#define FLASH_CR_OPTWRE                   FLASH_CR_OPTWRE_Msk                  /*!< Option Bytes Write Enable */
#define FLASH_CR_ERRIE_Pos                (10)
#define FLASH_CR_ERRIE_Msk                (0x1U << FLASH_CR_ERRIE_Pos)         /*!< 0x00000400 */
#define FLASH_CR_ERRIE                    FLASH_CR_ERRIE_Msk                   /*!< Error Interrupt Enable */
#define FLASH_CR_EOPIE_Pos                (12U)
#define FLASH_CR_EOPIE_Msk                (0x1U << FLASH_CR_EOPIE_Pos)         /*!< 0x00001000 */
#define FLASH_CR_EOPIE                    FLASH_CR_EOPIE_Msk                   /*!< End of operation interrupt enable */
#define FLASH_CR_OBL_LAUNCH_Pos           (13U)
#define FLASH_CR_OBL_LAUNCH_Msk           (0x1U << FLASH_CR_OBL_LAUNCH_Pos)    /*!< 0x00002000 */
#define FLASH_CR_OBL_LAUNCH               FLASH_CR_OBL_LAUNCH_Msk              /*!< Option Bytes Loader Launch */
/*******************  Bit definition for FLASH_AR register  *******************/
#define FLASH_AR_FAR_Pos                  (0)
#define FLASH_AR_FAR_Msk                  (0xFFFFFFFFU << FLASH_AR_FAR_Pos)    /*!< 0xFFFFFFFF */
#define FLASH_AR_FAR                      FLASH_AR_FAR_Msk                     /*!< Flash Address */
/******************  Bit definition for FLASH_OBR register  *******************/
#define FLASH_OBR_OPTERR_Pos              (0)
#define FLASH_OBR_OPTERR_Msk              (0x1U << FLASH_OBR_OPTERR_Pos)       /*!< 0x00000001 */
#define FLASH_OBR_OPTERR                  FLASH_OBR_OPTERR_Msk                 /*!< Option Byte Error */
#define FLASH_OBR_RDPRT1_Pos              (1U)
#define FLASH_OBR_RDPRT1_Msk              (0x1U << FLASH_OBR_RDPRT1_Pos)       /*!< 0x00000002 */
#define FLASH_OBR_RDPRT1                  FLASH_OBR_RDPRT1_Msk                 /*!< Read protection Level 1 */
#define FLASH_OBR_RDPRT2_Pos              (2U)
#define FLASH_OBR_RDPRT2_Msk              (0x1U << FLASH_OBR_RDPRT2_Pos)       /*!< 0x00000004 */
#define FLASH_OBR_RDPRT2                  FLASH_OBR_RDPRT2_Msk                 /*!< Read protection Level 2 */
#define FLASH_OBR_USER_Pos                (8U)
#define FLASH_OBR_USER_Msk                (0x77U << FLASH_OBR_USER_Pos)        /*!< 0x00007700 */
#define FLASH_OBR_USER                    FLASH_OBR_USER_Msk                   /*!< User Option Bytes */
#define FLASH_OBR_IWDG_SW_Pos             (8U)
#define FLASH_OBR_IWDG_SW_Msk             (0x1U << FLASH_OBR_IWDG_SW_Pos)      /*!< 0x00000100 */
#define FLASH_OBR_IWDG_SW                 FLASH_OBR_IWDG_SW_Msk                /*!< IWDG SW */
#define FLASH_OBR_nRST_STOP_Pos           (9U)
#define FLASH_OBR_nRST_STOP_Msk           (0x1U << FLASH_OBR_nRST_STOP_Pos)    /*!< 0x00000200 */
#define FLASH_OBR_nRST_STOP               FLASH_OBR_nRST_STOP_Msk              /*!< nRST_STOP */
#define FLASH_OBR_nRST_STDBY_Pos          (10)
#define FLASH_OBR_nRST_STDBY_Msk          (0x1U << FLASH_OBR_nRST_STDBY_Pos)   /*!< 0x00000400 */
#define FLASH_OBR_nRST_STDBY              FLASH_OBR_nRST_STDBY_Msk             /*!< nRST_STDBY */
#define FLASH_OBR_nBOOT1_Pos              (12U)
#define FLASH_OBR_nBOOT1_Msk              (0x1U << FLASH_OBR_nBOOT1_Pos)       /*!< 0x00001000 */
#define FLASH_OBR_nBOOT1                  FLASH_OBR_nBOOT1_Msk                 /*!< nBOOT1 */
#define FLASH_OBR_VDDA_MONITOR_Pos        (13U)
#define FLASH_OBR_VDDA_MONITOR_Msk        (0x1U << FLASH_OBR_VDDA_MONITOR_Pos) /*!< 0x00002000 */
#define FLASH_OBR_VDDA_MONITOR            FLASH_OBR_VDDA_MONITOR_Msk           /*!< VDDA power supply supervisor */
#define FLASH_OBR_RAM_PARITY_CHECK_Pos    (14U)
#define FLASH_OBR_RAM_PARITY_CHECK_Msk    (0x1U << FLASH_OBR_RAM_PARITY_CHECK_Pos) /*!< 0x00004000 */
#define FLASH_OBR_RAM_PARITY_CHECK        FLASH_OBR_RAM_PARITY_CHECK_Msk       /*!< RAM parity check */
#define FLASH_OBR_DATA0_Pos               (16U)
#define FLASH_OBR_DATA0_Msk               (0xFFU << FLASH_OBR_DATA0_Pos)       /*!< 0x00FF0000 */
#define FLASH_OBR_DATA0                   FLASH_OBR_DATA0_Msk                  /*!< Data0 */
#define FLASH_OBR_DATA1_Pos               (24U)
#define FLASH_OBR_DATA1_Msk               (0xFFU << FLASH_OBR_DATA1_Pos)       /*!< 0xFF000000 */
#define FLASH_OBR_DATA1                   FLASH_OBR_DATA1_Msk                  /*!< Data1 */
#define FLASH_OBR_BOOT1                      FLASH_OBR_nBOOT1
#define FLASH_OBR_VDDA_ANALOG                FLASH_OBR_VDDA_MONITOR
/******************  Bit definition for FLASH_WRPR register  ******************/
#define FLASH_WRPR_WRP_Pos                (0)
#define FLASH_WRPR_WRP_Msk                (0xFFFFU << FLASH_WRPR_WRP_Pos)      /*!< 0x0000FFFF */
#define FLASH_WRPR_WRP                    FLASH_WRPR_WRP_Msk                   /*!< Write Protect */

//--------------------------------------------------------------------------------
#define RCC     AHBPERIPH_BASE+0x00001000

//--------------------------------------------------------------------------------
//--- RCC_Typedef
#define CR_RCC     0x00
#define CFGR       0x04
#define CIR        0x08
#define APB2RSTR   0x0c
#define APB1RSTR   0x10
#define AHBENR     0x14
#define APB2ENR    0x18
#define APB1ENR    0x1c

/********************  Bit definition for RCC_CR register  *******************/
#define RCC_CR_HSION_Pos                         (0)
#define RCC_CR_HSION_Msk                         (0x1U << RCC_CR_HSION_Pos)    /*!< 0x00000001 */
#define RCC_CR_HSION                             RCC_CR_HSION_Msk              /*!< Internal High Speed clock enable */
#define RCC_CR_HSIRDY_Pos                        (1U)
#define RCC_CR_HSIRDY_Msk                        (0x1U << RCC_CR_HSIRDY_Pos)   /*!< 0x00000002 */
#define RCC_CR_HSIRDY                            RCC_CR_HSIRDY_Msk             /*!< Internal High Speed clock ready flag */
#define RCC_CR_HSITRIM_Pos                       (3U)
#define RCC_CR_HSITRIM_Msk                       (0x1FU << RCC_CR_HSITRIM_Pos) /*!< 0x000000F8 */
#define RCC_CR_HSITRIM                           RCC_CR_HSITRIM_Msk            /*!< Internal High Speed clock trimming */
#define RCC_CR_HSITRIM_0                         (0x01U << RCC_CR_HSITRIM_Pos) /*!< 0x00000008 */
#define RCC_CR_HSITRIM_1                         (0x02U << RCC_CR_HSITRIM_Pos) /*!< 0x00000010 */
#define RCC_CR_HSITRIM_2                         (0x04U << RCC_CR_HSITRIM_Pos) /*!< 0x00000020 */
#define RCC_CR_HSITRIM_3                         (0x08U << RCC_CR_HSITRIM_Pos) /*!< 0x00000040 */
#define RCC_CR_HSITRIM_4                         (0x10 << RCC_CR_HSITRIM_Pos) /*!< 0x00000080 */
#define RCC_CR_HSICAL_Pos                        (8U)
#define RCC_CR_HSICAL_Msk                        (0xFFU << RCC_CR_HSICAL_Pos)  /*!< 0x0000FF00 */
#define RCC_CR_HSICAL                            RCC_CR_HSICAL_Msk             /*!< Internal High Speed clock Calibration */
#define RCC_CR_HSICAL_0                          (0x01U << RCC_CR_HSICAL_Pos)  /*!< 0x00000100 */
#define RCC_CR_HSICAL_1                          (0x02U << RCC_CR_HSICAL_Pos)  /*!< 0x00000200 */
#define RCC_CR_HSICAL_2                          (0x04U << RCC_CR_HSICAL_Pos)  /*!< 0x00000400 */
#define RCC_CR_HSICAL_3                          (0x08U << RCC_CR_HSICAL_Pos)  /*!< 0x00000800 */
#define RCC_CR_HSICAL_4                          (0x10 << RCC_CR_HSICAL_Pos)  /*!< 0x00001000 */
#define RCC_CR_HSICAL_5                          (0x20 << RCC_CR_HSICAL_Pos)  /*!< 0x00002000 */
#define RCC_CR_HSICAL_6                          (0x40 << RCC_CR_HSICAL_Pos)  /*!< 0x00004000 */
#define RCC_CR_HSICAL_7                          (0x80 << RCC_CR_HSICAL_Pos)  /*!< 0x00008000 */
#define RCC_CR_HSEON_Pos                         (16U)
#define RCC_CR_HSEON_Msk                         (0x1U << RCC_CR_HSEON_Pos)    /*!< 0x00010000 */
#define RCC_CR_HSEON                             RCC_CR_HSEON_Msk              /*!< External High Speed clock enable */
#define RCC_CR_HSERDY_Pos                        (17U)
#define RCC_CR_HSERDY_Msk                        (0x1U << RCC_CR_HSERDY_Pos)   /*!< 0x00020000 */
#define RCC_CR_HSERDY                            RCC_CR_HSERDY_Msk             /*!< External High Speed clock ready flag */
#define RCC_CR_HSEBYP_Pos                        (18U)
#define RCC_CR_HSEBYP_Msk                        (0x1U << RCC_CR_HSEBYP_Pos)   /*!< 0x00040000 */
#define RCC_CR_HSEBYP                            RCC_CR_HSEBYP_Msk             /*!< External High Speed clock Bypass */
#define RCC_CR_CSSON_Pos                         (19U)
#define RCC_CR_CSSON_Msk                         (0x1U << RCC_CR_CSSON_Pos)    /*!< 0x00080000 */
#define RCC_CR_CSSON                             RCC_CR_CSSON_Msk              /*!< Clock Security System enable */
#define RCC_CR_PLLON_Pos                         (24U)
#define RCC_CR_PLLON_Msk                         (0x1U << RCC_CR_PLLON_Pos)    /*!< 0x01000000 */
#define RCC_CR_PLLON                             RCC_CR_PLLON_Msk              /*!< PLL enable */
#define RCC_CR_PLLRDY_Pos                        (25U)
#define RCC_CR_PLLRDY_Msk                        (0x1U << RCC_CR_PLLRDY_Pos)   /*!< 0x02000000 */
#define RCC_CR_PLLRDY                            RCC_CR_PLLRDY_Msk             /*!< PLL clock ready flag */
/********************  Bit definition for RCC_CFGR register  *****************/
#define RCC_CFGR_SW_Pos                          (0)
#define RCC_CFGR_SW_Msk                          (0x3U << RCC_CFGR_SW_Pos)     /*!< 0x00000003 */
#define RCC_CFGR_SW                              RCC_CFGR_SW_Msk               /*!< SW[1:0] bits (System clock Switch) */
#define RCC_CFGR_SW_0                            (0x1U << RCC_CFGR_SW_Pos)     /*!< 0x00000001 */
#define RCC_CFGR_SW_1                            (0x2U << RCC_CFGR_SW_Pos)     /*!< 0x00000002 */
#define RCC_CFGR_SW_HSI                          (0x00000000)                 /*!< HSI selected as system clock */
#define RCC_CFGR_SW_HSE                          (0x00000001U)                 /*!< HSE selected as system clock */
#define RCC_CFGR_SW_PLL                          (0x00000002U)                 /*!< PLL selected as system clock */
#define RCC_CFGR_SWS_Pos                         (2U)
#define RCC_CFGR_SWS_Msk                         (0x3U << RCC_CFGR_SWS_Pos)    /*!< 0x0000000C */
#define RCC_CFGR_SWS                             RCC_CFGR_SWS_Msk              /*!< SWS[1:0] bits (System Clock Switch Status) */
#define RCC_CFGR_SWS_0                           (0x1U << RCC_CFGR_SWS_Pos)    /*!< 0x00000004 */
#define RCC_CFGR_SWS_1                           (0x2U << RCC_CFGR_SWS_Pos)    /*!< 0x00000008 */
#define RCC_CFGR_SWS_HSI                         (0x00000000)                 /*!< HSI oscillator used as system clock */
#define RCC_CFGR_SWS_HSE                         (0x00000004U)                 /*!< HSE oscillator used as system clock */
#define RCC_CFGR_SWS_PLL                         (0x00000008U)                 /*!< PLL used as system clock */
#define RCC_CFGR_HPRE_Pos                        (4U)
#define RCC_CFGR_HPRE_Msk                        (0xFU << RCC_CFGR_HPRE_Pos)   /*!< 0x000000F0 */
#define RCC_CFGR_HPRE                            RCC_CFGR_HPRE_Msk             /*!< HPRE[3:0] bits (AHB prescaler) */
#define RCC_CFGR_HPRE_0                          (0x1U << RCC_CFGR_HPRE_Pos)   /*!< 0x00000010 */
#define RCC_CFGR_HPRE_1                          (0x2U << RCC_CFGR_HPRE_Pos)   /*!< 0x00000020 */
#define RCC_CFGR_HPRE_2                          (0x4U << RCC_CFGR_HPRE_Pos)   /*!< 0x00000040 */
#define RCC_CFGR_HPRE_3                          (0x8U << RCC_CFGR_HPRE_Pos)   /*!< 0x00000080 */
#define RCC_CFGR_HPRE_DIV1                       (0x00000000)                 /*!< SYSCLK not divided */
#define RCC_CFGR_HPRE_DIV2                       (0x00000080)                 /*!< SYSCLK divided by 2 */
#define RCC_CFGR_HPRE_DIV4                       (0x00000090)                 /*!< SYSCLK divided by 4 */
#define RCC_CFGR_HPRE_DIV8                       (0x000000A0)                 /*!< SYSCLK divided by 8 */
#define RCC_CFGR_HPRE_DIV16                      (0x000000B0)                 /*!< SYSCLK divided by 16 */
#define RCC_CFGR_HPRE_DIV64                      (0x000000C0)                 /*!< SYSCLK divided by 64 */
#define RCC_CFGR_HPRE_DIV128                     (0x000000D0)                 /*!< SYSCLK divided by 128 */
#define RCC_CFGR_HPRE_DIV256                     (0x000000E0)                 /*!< SYSCLK divided by 256 */
#define RCC_CFGR_HPRE_DIV512                     (0x000000F0)                 /*!< SYSCLK divided by 512 */
#define RCC_CFGR_PPRE_Pos                        (8U)
#define RCC_CFGR_PPRE_Msk                        (0x7U << RCC_CFGR_PPRE_Pos)   /*!< 0x00000700 */
#define RCC_CFGR_PPRE                            RCC_CFGR_PPRE_Msk             /*!< PRE[2:0] bits (APB prescaler) */
#define RCC_CFGR_PPRE_0                          (0x1U << RCC_CFGR_PPRE_Pos)   /*!< 0x00000100 */
#define RCC_CFGR_PPRE_1                          (0x2U << RCC_CFGR_PPRE_Pos)   /*!< 0x00000200 */
#define RCC_CFGR_PPRE_2                          (0x4U << RCC_CFGR_PPRE_Pos)   /*!< 0x00000400 */
#define RCC_CFGR_PPRE_DIV1                       (0x00000000)                 /*!< HCLK not divided */
#define RCC_CFGR_PPRE_DIV2_Pos                   (10)
#define RCC_CFGR_PPRE_DIV2_Msk                   (0x1U << RCC_CFGR_PPRE_DIV2_Pos) /*!< 0x00000400 */
#define RCC_CFGR_PPRE_DIV2                       RCC_CFGR_PPRE_DIV2_Msk        /*!< HCLK divided by 2 */
#define RCC_CFGR_PPRE_DIV4_Pos                   (8U)
#define RCC_CFGR_PPRE_DIV4_Msk                   (0x5U << RCC_CFGR_PPRE_DIV4_Pos) /*!< 0x00000500 */
#define RCC_CFGR_PPRE_DIV4                       RCC_CFGR_PPRE_DIV4_Msk        /*!< HCLK divided by 4 */
#define RCC_CFGR_PPRE_DIV8_Pos                   (9U)
#define RCC_CFGR_PPRE_DIV8_Msk                   (0x3U << RCC_CFGR_PPRE_DIV8_Pos) /*!< 0x00000600 */
#define RCC_CFGR_PPRE_DIV8                       RCC_CFGR_PPRE_DIV8_Msk        /*!< HCLK divided by 8 */
#define RCC_CFGR_PPRE_DIV16_Pos                  (8U)
#define RCC_CFGR_PPRE_DIV16_Msk                  (0x7U << RCC_CFGR_PPRE_DIV16_Pos) /*!< 0x00000700 */
#define RCC_CFGR_PPRE_DIV16                      RCC_CFGR_PPRE_DIV16_Msk       /*!< HCLK divided by 16 */
#define RCC_CFGR_ADCPRE_Pos                      (14U)
#define RCC_CFGR_ADCPRE_Msk                      (0x1U << RCC_CFGR_ADCPRE_Pos) /*!< 0x00004000 */
#define RCC_CFGR_ADCPRE                          RCC_CFGR_ADCPRE_Msk           /*!< ADCPRE bit (ADC prescaler) */
#define RCC_CFGR_ADCPRE_DIV2                     (0x00000000)                 /*!< PCLK divided by 2 */
#define RCC_CFGR_ADCPRE_DIV4                     (0x00004000)                 /*!< PCLK divided by 4 */
#define RCC_CFGR_PLLSRC_Pos                      (16U)
#define RCC_CFGR_PLLSRC_Msk                      (0x1U << RCC_CFGR_PLLSRC_Pos) /*!< 0x00010000 */
#define RCC_CFGR_PLLSRC                          RCC_CFGR_PLLSRC_Msk           /*!< PLL entry clock source */
#define RCC_CFGR_PLLSRC_HSI_DIV2                 (0x00000000)                 /*!< HSI clock divided by 2 selected as PLL entry clock source */
#define RCC_CFGR_PLLSRC_HSE_PREDIV               (0x00010000)                 /*!< HSE/PREDIV clock selected as PLL entry clock source */
#define RCC_CFGR_PLLXTPRE_Pos                    (17U)
#define RCC_CFGR_PLLXTPRE_Msk                    (0x1U << RCC_CFGR_PLLXTPRE_Pos) /*!< 0x00020000 */
#define RCC_CFGR_PLLXTPRE                        RCC_CFGR_PLLXTPRE_Msk         /*!< HSE divider for PLL entry */
#define RCC_CFGR_PLLXTPRE_HSE_PREDIV_DIV1        (0x00000000)                 /*!< HSE/PREDIV clock not divided for PLL entry */
#define RCC_CFGR_PLLXTPRE_HSE_PREDIV_DIV2        (0x00020000)                 /*!< HSE/PREDIV clock divided by 2 for PLL entry */
#define RCC_CFGR_PLLMUL_Pos                      (18U)
#define RCC_CFGR_PLLMUL_Msk                      (0xFU << RCC_CFGR_PLLMUL_Pos) /*!< 0x003C0000 */
#define RCC_CFGR_PLLMUL                          RCC_CFGR_PLLMUL_Msk           /*!< PLLMUL[3:0] bits (PLL multiplication factor) */
#define RCC_CFGR_PLLMUL_0                        (0x1U << RCC_CFGR_PLLMUL_Pos) /*!< 0x00040000 */
#define RCC_CFGR_PLLMUL_1                        (0x2U << RCC_CFGR_PLLMUL_Pos) /*!< 0x00080000 */
#define RCC_CFGR_PLLMUL_2                        (0x4U << RCC_CFGR_PLLMUL_Pos) /*!< 0x00100000 */
#define RCC_CFGR_PLLMUL_3                        (0x8U << RCC_CFGR_PLLMUL_Pos) /*!< 0x00200000 */
#define RCC_CFGR_PLLMUL2                         (0x00000000)                 /*!< PLL input clock*2 */
#define RCC_CFGR_PLLMUL3                         (0x00040000)                 /*!< PLL input clock*3 */
#define RCC_CFGR_PLLMUL4                         (0x00080000)                 /*!< PLL input clock*4 */
#define RCC_CFGR_PLLMUL5                         (0x000C0000)                 /*!< PLL input clock*5 */
#define RCC_CFGR_PLLMUL6                         (0x00100000)                 /*!< PLL input clock*6 */
#define RCC_CFGR_PLLMUL7                         (0x00140000)                 /*!< PLL input clock*7 */
#define RCC_CFGR_PLLMUL8                         (0x00180000)                 /*!< PLL input clock*8 */
#define RCC_CFGR_PLLMUL9                         (0x001C0000)                 /*!< PLL input clock*9 */
#define RCC_CFGR_PLLMUL10                        (0x00200000)                 /*!< PLL input clock10 */
#define RCC_CFGR_PLLMUL11                        (0x00240000)                 /*!< PLL input clock*11 */
#define RCC_CFGR_PLLMUL12                        (0x00280000)                 /*!< PLL input clock*12 */
#define RCC_CFGR_PLLMUL13                        (0x002C0000)                 /*!< PLL input clock*13 */
#define RCC_CFGR_PLLMUL14                        (0x00300000)                 /*!< PLL input clock*14 */
#define RCC_CFGR_PLLMUL15                        (0x00340000)                 /*!< PLL input clock*15 */
#define RCC_CFGR_PLLMUL16                        (0x00380000)                 /*!< PLL input clock*16 */
#define RCC_CFGR_MCO_Pos                         (24U)
#define RCC_CFGR_MCO_Msk                         (0xFU << RCC_CFGR_MCO_Pos)    /*!< 0x0F000000 */
#define RCC_CFGR_MCO                             RCC_CFGR_MCO_Msk              /*!< MCO[3:0] bits (Microcontroller Clock Output) */
#define RCC_CFGR_MCO_0                           (0x1U << RCC_CFGR_MCO_Pos)    /*!< 0x01000000 */
#define RCC_CFGR_MCO_1                           (0x2U << RCC_CFGR_MCO_Pos)    /*!< 0x02000000 */
#define RCC_CFGR_MCO_2                           (0x4U << RCC_CFGR_MCO_Pos)    /*!< 0x04000000 */
#define RCC_CFGR_MCO_NOCLOCK                     (0x00000000)                 /*!< No clock */
#define RCC_CFGR_MCO_HSI14                       (0x01000000)                 /*!< HSI14 clock selected as MCO source */
#define RCC_CFGR_MCO_LSI                         (0x02000000)                 /*!< LSI clock selected as MCO source */
#define RCC_CFGR_MCO_LSE                         (0x03000000)                 /*!< LSE clock selected as MCO source */
#define RCC_CFGR_MCO_SYSCLK                      (0x04000000)                 /*!< System clock selected as MCO source */
#define RCC_CFGR_MCO_HSI                         (0x05000000)                 /*!< HSI clock selected as MCO source */
#define RCC_CFGR_MCO_HSE                         (0x06000000)                 /*!< HSE clock selected as MCO source  */
#define RCC_CFGR_MCO_PLL                         (0x07000000)                 /*!< PLL clock divided by 2 selected as MCO source */
#define RCC_CFGR_MCOSEL                      RCC_CFGR_MCO
#define RCC_CFGR_MCOSEL_0                    RCC_CFGR_MCO_0
#define RCC_CFGR_MCOSEL_1                    RCC_CFGR_MCO_1
#define RCC_CFGR_MCOSEL_2                    RCC_CFGR_MCO_2
#define RCC_CFGR_MCOSEL_NOCLOCK              RCC_CFGR_MCO_NOCLOCK
#define RCC_CFGR_MCOSEL_HSI14                RCC_CFGR_MCO_HSI14
#define RCC_CFGR_MCOSEL_LSI                  RCC_CFGR_MCO_LSI
#define RCC_CFGR_MCOSEL_LSE                  RCC_CFGR_MCO_LSE
#define RCC_CFGR_MCOSEL_SYSCLK               RCC_CFGR_MCO_SYSCLK
#define RCC_CFGR_MCOSEL_HSI                  RCC_CFGR_MCO_HSI
#define RCC_CFGR_MCOSEL_HSE                  RCC_CFGR_MCO_HSE
#define RCC_CFGR_MCOSEL_PLL_DIV2             RCC_CFGR_MCO_PLL
/*!<******************  Bit definition for RCC_CIR register  *****************/
#define RCC_CIR_LSIRDYF_Pos                      (0)
#define RCC_CIR_LSIRDYF_Msk                      (0x1U << RCC_CIR_LSIRDYF_Pos) /*!< 0x00000001 */
#define RCC_CIR_LSIRDYF                          RCC_CIR_LSIRDYF_Msk           /*!< LSI Ready Interrupt flag */
#define RCC_CIR_LSERDYF_Pos                      (1U)
#define RCC_CIR_LSERDYF_Msk                      (0x1U << RCC_CIR_LSERDYF_Pos) /*!< 0x00000002 */
#define RCC_CIR_LSERDYF                          RCC_CIR_LSERDYF_Msk           /*!< LSE Ready Interrupt flag */
#define RCC_CIR_HSIRDYF_Pos                      (2U)
#define RCC_CIR_HSIRDYF_Msk                      (0x1U << RCC_CIR_HSIRDYF_Pos) /*!< 0x00000004 */
#define RCC_CIR_HSIRDYF                          RCC_CIR_HSIRDYF_Msk           /*!< HSI Ready Interrupt flag */
#define RCC_CIR_HSERDYF_Pos                      (3U)
#define RCC_CIR_HSERDYF_Msk                      (0x1U << RCC_CIR_HSERDYF_Pos) /*!< 0x00000008 */
#define RCC_CIR_HSERDYF                          RCC_CIR_HSERDYF_Msk           /*!< HSE Ready Interrupt flag */
#define RCC_CIR_PLLRDYF_Pos                      (4U)
#define RCC_CIR_PLLRDYF_Msk                      (0x1U << RCC_CIR_PLLRDYF_Pos) /*!< 0x00000010 */
#define RCC_CIR_PLLRDYF                          RCC_CIR_PLLRDYF_Msk           /*!< PLL Ready Interrupt flag */
#define RCC_CIR_HSI14RDYF_Pos                    (5U)
#define RCC_CIR_HSI14RDYF_Msk                    (0x1U << RCC_CIR_HSI14RDYF_Pos) /*!< 0x00000020 */
#define RCC_CIR_HSI14RDYF                        RCC_CIR_HSI14RDYF_Msk         /*!< HSI14 Ready Interrupt flag */
#define RCC_CIR_CSSF_Pos                         (7U)
#define RCC_CIR_CSSF_Msk                         (0x1U << RCC_CIR_CSSF_Pos)    /*!< 0x00000080 */
#define RCC_CIR_CSSF                             RCC_CIR_CSSF_Msk              /*!< Clock Security System Interrupt flag */
#define RCC_CIR_LSIRDYIE_Pos                     (8U)
#define RCC_CIR_LSIRDYIE_Msk                     (0x1U << RCC_CIR_LSIRDYIE_Pos) /*!< 0x00000100 */
#define RCC_CIR_LSIRDYIE                         RCC_CIR_LSIRDYIE_Msk          /*!< LSI Ready Interrupt Enable */
#define RCC_CIR_LSERDYIE_Pos                     (9U)
#define RCC_CIR_LSERDYIE_Msk                     (0x1U << RCC_CIR_LSERDYIE_Pos) /*!< 0x00000200 */
#define RCC_CIR_LSERDYIE                         RCC_CIR_LSERDYIE_Msk          /*!< LSE Ready Interrupt Enable */
#define RCC_CIR_HSIRDYIE_Pos                     (10)
#define RCC_CIR_HSIRDYIE_Msk                     (0x1U << RCC_CIR_HSIRDYIE_Pos) /*!< 0x00000400 */
#define RCC_CIR_HSIRDYIE                         RCC_CIR_HSIRDYIE_Msk          /*!< HSI Ready Interrupt Enable */
#define RCC_CIR_HSERDYIE_Pos                     (11U)
#define RCC_CIR_HSERDYIE_Msk                     (0x1U << RCC_CIR_HSERDYIE_Pos) /*!< 0x00000800 */
#define RCC_CIR_HSERDYIE                         RCC_CIR_HSERDYIE_Msk          /*!< HSE Ready Interrupt Enable */
#define RCC_CIR_PLLRDYIE_Pos                     (12U)
#define RCC_CIR_PLLRDYIE_Msk                     (0x1U << RCC_CIR_PLLRDYIE_Pos) /*!< 0x00001000 */
#define RCC_CIR_PLLRDYIE                         RCC_CIR_PLLRDYIE_Msk          /*!< PLL Ready Interrupt Enable */
#define RCC_CIR_HSI14RDYIE_Pos                   (13U)
#define RCC_CIR_HSI14RDYIE_Msk                   (0x1U << RCC_CIR_HSI14RDYIE_Pos) /*!< 0x00002000 */
#define RCC_CIR_HSI14RDYIE                       RCC_CIR_HSI14RDYIE_Msk        /*!< HSI14 Ready Interrupt Enable */
#define RCC_CIR_LSIRDYC_Pos                      (16U)
#define RCC_CIR_LSIRDYC_Msk                      (0x1U << RCC_CIR_LSIRDYC_Pos) /*!< 0x00010000 */
#define RCC_CIR_LSIRDYC                          RCC_CIR_LSIRDYC_Msk           /*!< LSI Ready Interrupt Clear */
#define RCC_CIR_LSERDYC_Pos                      (17U)
#define RCC_CIR_LSERDYC_Msk                      (0x1U << RCC_CIR_LSERDYC_Pos) /*!< 0x00020000 */
#define RCC_CIR_LSERDYC                          RCC_CIR_LSERDYC_Msk           /*!< LSE Ready Interrupt Clear */
#define RCC_CIR_HSIRDYC_Pos                      (18U)
#define RCC_CIR_HSIRDYC_Msk                      (0x1U << RCC_CIR_HSIRDYC_Pos) /*!< 0x00040000 */
#define RCC_CIR_HSIRDYC                          RCC_CIR_HSIRDYC_Msk           /*!< HSI Ready Interrupt Clear */
#define RCC_CIR_HSERDYC_Pos                      (19U)
#define RCC_CIR_HSERDYC_Msk                      (0x1U << RCC_CIR_HSERDYC_Pos) /*!< 0x00080000 */
#define RCC_CIR_HSERDYC                          RCC_CIR_HSERDYC_Msk           /*!< HSE Ready Interrupt Clear */
#define RCC_CIR_PLLRDYC_Pos                      (20)
#define RCC_CIR_PLLRDYC_Msk                      (0x1U << RCC_CIR_PLLRDYC_Pos) /*!< 0x00100000 */
#define RCC_CIR_PLLRDYC                          RCC_CIR_PLLRDYC_Msk           /*!< PLL Ready Interrupt Clear */
#define RCC_CIR_HSI14RDYC_Pos                    (21U)
#define RCC_CIR_HSI14RDYC_Msk                    (0x1U << RCC_CIR_HSI14RDYC_Pos) /*!< 0x00200000 */
#define RCC_CIR_HSI14RDYC                        RCC_CIR_HSI14RDYC_Msk         /*!< HSI14 Ready Interrupt Clear */
#define RCC_CIR_CSSC_Pos                         (23U)
#define RCC_CIR_CSSC_Msk                         (0x1U << RCC_CIR_CSSC_Pos)    /*!< 0x00800000 */
#define RCC_CIR_CSSC                             RCC_CIR_CSSC_Msk              /*!< Clock Security System Interrupt Clear */
/*****************  Bit definition for RCC_APB2RSTR register  ****************/
#define RCC_APB2RSTR_SYSCFGRST_Pos               (0)
#define RCC_APB2RSTR_SYSCFGRST_Msk               (0x1U << RCC_APB2RSTR_SYSCFGRST_Pos) /*!< 0x00000001 */
#define RCC_APB2RSTR_SYSCFGRST                   RCC_APB2RSTR_SYSCFGRST_Msk    /*!< SYSCFG reset */
#define RCC_APB2RSTR_ADCRST_Pos                  (9U)
#define RCC_APB2RSTR_ADCRST_Msk                  (0x1U << RCC_APB2RSTR_ADCRST_Pos) /*!< 0x00000200 */
#define RCC_APB2RSTR_ADCRST                      RCC_APB2RSTR_ADCRST_Msk       /*!< ADC reset */
#define RCC_APB2RSTR_TIM1RST_Pos                 (11U)
#define RCC_APB2RSTR_TIM1RST_Msk                 (0x1U << RCC_APB2RSTR_TIM1RST_Pos) /*!< 0x00000800 */
#define RCC_APB2RSTR_TIM1RST                     RCC_APB2RSTR_TIM1RST_Msk      /*!< TIM1 reset */
#define RCC_APB2RSTR_SPI1RST_Pos                 (12U)
#define RCC_APB2RSTR_SPI1RST_Msk                 (0x1U << RCC_APB2RSTR_SPI1RST_Pos) /*!< 0x00001000 */
#define RCC_APB2RSTR_SPI1RST                     RCC_APB2RSTR_SPI1RST_Msk      /*!< SPI1 reset */
#define RCC_APB2RSTR_USART1RST_Pos               (14U)
#define RCC_APB2RSTR_USART1RST_Msk               (0x1U << RCC_APB2RSTR_USART1RST_Pos) /*!< 0x00004000 */
#define RCC_APB2RSTR_USART1RST                   RCC_APB2RSTR_USART1RST_Msk    /*!< USART1 reset */
#define RCC_APB2RSTR_TIM15RST_Pos                (16U)
#define RCC_APB2RSTR_TIM15RST_Msk                (0x1U << RCC_APB2RSTR_TIM15RST_Pos) /*!< 0x00010000 */
#define RCC_APB2RSTR_TIM15RST                    RCC_APB2RSTR_TIM15RST_Msk     /*!< TIM15 reset */
#define RCC_APB2RSTR_TIM16RST_Pos                (17U)
#define RCC_APB2RSTR_TIM16RST_Msk                (0x1U << RCC_APB2RSTR_TIM16RST_Pos) /*!< 0x00020000 */
#define RCC_APB2RSTR_TIM16RST                    RCC_APB2RSTR_TIM16RST_Msk     /*!< TIM16 reset */
#define RCC_APB2RSTR_TIM17RST_Pos                (18U)
#define RCC_APB2RSTR_TIM17RST_Msk                (0x1U << RCC_APB2RSTR_TIM17RST_Pos) /*!< 0x00040000 */
#define RCC_APB2RSTR_TIM17RST                    RCC_APB2RSTR_TIM17RST_Msk     /*!< TIM17 reset */
#define RCC_APB2RSTR_DBGMCURST_Pos               (22U)
#define RCC_APB2RSTR_DBGMCURST_Msk               (0x1U << RCC_APB2RSTR_DBGMCURST_Pos) /*!< 0x00400000 */
#define RCC_APB2RSTR_DBGMCURST                   RCC_APB2RSTR_DBGMCURST_Msk    /*!< DBGMCU reset */
#define  RCC_APB2RSTR_ADC1RST                RCC_APB2RSTR_ADCRST
/*****************  Bit definition for RCC_APB1RSTR register  ****************/
#define RCC_APB1RSTR_TIM2RST_Pos                 (0)
#define RCC_APB1RSTR_TIM2RST_Msk                 (0x1U << RCC_APB1RSTR_TIM2RST_Pos) /*!< 0x00000001 */
#define RCC_APB1RSTR_TIM2RST                     RCC_APB1RSTR_TIM2RST_Msk      /*!< Timer 2 reset */
#define RCC_APB1RSTR_TIM3RST_Pos                 (1U)
#define RCC_APB1RSTR_TIM3RST_Msk                 (0x1U << RCC_APB1RSTR_TIM3RST_Pos) /*!< 0x00000002 */
#define RCC_APB1RSTR_TIM3RST                     RCC_APB1RSTR_TIM3RST_Msk      /*!< Timer 3 reset */
#define RCC_APB1RSTR_TIM6RST_Pos                 (4U)
#define RCC_APB1RSTR_TIM6RST_Msk                 (0x1U << RCC_APB1RSTR_TIM6RST_Pos) /*!< 0x00000010 */
#define RCC_APB1RSTR_TIM6RST                     RCC_APB1RSTR_TIM6RST_Msk      /*!< Timer 6 reset */
#define RCC_APB1RSTR_TIM14RST_Pos                (8U)
#define RCC_APB1RSTR_TIM14RST_Msk                (0x1U << RCC_APB1RSTR_TIM14RST_Pos) /*!< 0x00000100 */
#define RCC_APB1RSTR_TIM14RST                    RCC_APB1RSTR_TIM14RST_Msk     /*!< Timer 14 reset */
#define RCC_APB1RSTR_WWDGRST_Pos                 (11U)
#define RCC_APB1RSTR_WWDGRST_Msk                 (0x1U << RCC_APB1RSTR_WWDGRST_Pos) /*!< 0x00000800 */
#define RCC_APB1RSTR_WWDGRST                     RCC_APB1RSTR_WWDGRST_Msk      /*!< Window Watchdog reset */
#define RCC_APB1RSTR_SPI2RST_Pos                 (14U)
#define RCC_APB1RSTR_SPI2RST_Msk                 (0x1U << RCC_APB1RSTR_SPI2RST_Pos) /*!< 0x00004000 */
#define RCC_APB1RSTR_SPI2RST                     RCC_APB1RSTR_SPI2RST_Msk      /*!< SPI2 reset */
#define RCC_APB1RSTR_USART2RST_Pos               (17U)
#define RCC_APB1RSTR_USART2RST_Msk               (0x1U << RCC_APB1RSTR_USART2RST_Pos) /*!< 0x00020000 */
#define RCC_APB1RSTR_USART2RST                   RCC_APB1RSTR_USART2RST_Msk    /*!< USART 2 reset */
#define RCC_APB1RSTR_I2C1RST_Pos                 (21U)
#define RCC_APB1RSTR_I2C1RST_Msk                 (0x1U << RCC_APB1RSTR_I2C1RST_Pos) /*!< 0x00200000 */
#define RCC_APB1RSTR_I2C1RST                     RCC_APB1RSTR_I2C1RST_Msk      /*!< I2C 1 reset */
#define RCC_APB1RSTR_I2C2RST_Pos                 (22U)
#define RCC_APB1RSTR_I2C2RST_Msk                 (0x1U << RCC_APB1RSTR_I2C2RST_Pos) /*!< 0x00400000 */
#define RCC_APB1RSTR_I2C2RST                     RCC_APB1RSTR_I2C2RST_Msk      /*!< I2C 2 reset */
#define RCC_APB1RSTR_PWRRST_Pos                  (28U)
#define RCC_APB1RSTR_PWRRST_Msk                  (0x1U << RCC_APB1RSTR_PWRRST_Pos) /*!< 0x10000000 */
#define RCC_APB1RSTR_PWRRST                      RCC_APB1RSTR_PWRRST_Msk       /*!< PWR reset */
#define RCC_APB1RSTR_DACRST_Pos                  (29U)
#define RCC_APB1RSTR_DACRST_Msk                  (0x1U << RCC_APB1RSTR_DACRST_Pos) /*!< 0x20000000 */
#define RCC_APB1RSTR_DACRST                      RCC_APB1RSTR_DACRST_Msk       /*!< DAC reset */
#define RCC_APB1RSTR_CECRST_Pos                  (30)
#define RCC_APB1RSTR_CECRST_Msk                  (0x1U << RCC_APB1RSTR_CECRST_Pos) /*!< 0x40000000 */
#define RCC_APB1RSTR_CECRST                      RCC_APB1RSTR_CECRST_Msk       /*!< CEC reset */
/******************  Bit definition for RCC_AHBENR register  *****************/
#define RCC_AHBENR_DMAEN_Pos                     (0)
#define RCC_AHBENR_DMAEN_Msk                     (0x1U << RCC_AHBENR_DMAEN_Pos) /*!< 0x00000001 */
#define RCC_AHBENR_DMAEN                         RCC_AHBENR_DMAEN_Msk          /*!< DMA1 clock enable */
#define RCC_AHBENR_SRAMEN_Pos                    (2U)
#define RCC_AHBENR_SRAMEN_Msk                    (0x1U << RCC_AHBENR_SRAMEN_Pos) /*!< 0x00000004 */
#define RCC_AHBENR_SRAMEN                        RCC_AHBENR_SRAMEN_Msk         /*!< SRAM interface clock enable */
#define RCC_AHBENR_FLITFEN_Pos                   (4U)
#define RCC_AHBENR_FLITFEN_Msk                   (0x1U << RCC_AHBENR_FLITFEN_Pos) /*!< 0x00000010 */
#define RCC_AHBENR_FLITFEN                       RCC_AHBENR_FLITFEN_Msk        /*!< FLITF clock enable */
#define RCC_AHBENR_CRCEN_Pos                     (6U)
#define RCC_AHBENR_CRCEN_Msk                     (0x1U << RCC_AHBENR_CRCEN_Pos) /*!< 0x00000040 */
#define RCC_AHBENR_CRCEN                         RCC_AHBENR_CRCEN_Msk          /*!< CRC clock enable */
#define RCC_AHBENR_GPIOAEN_Pos                   (17U)
#define RCC_AHBENR_GPIOAEN_Msk                   (0x1U << RCC_AHBENR_GPIOAEN_Pos) /*!< 0x00020000 */
#define RCC_AHBENR_GPIOAEN                       RCC_AHBENR_GPIOAEN_Msk        /*!< GPIOA clock enable */
#define RCC_AHBENR_GPIOBEN_Pos                   (18U)
#define RCC_AHBENR_GPIOBEN_Msk                   (0x1U << RCC_AHBENR_GPIOBEN_Pos) /*!< 0x00040000 */
#define RCC_AHBENR_GPIOBEN                       RCC_AHBENR_GPIOBEN_Msk        /*!< GPIOB clock enable */
#define RCC_AHBENR_GPIOCEN_Pos                   (19U)
#define RCC_AHBENR_GPIOCEN_Msk                   (0x1U << RCC_AHBENR_GPIOCEN_Pos) /*!< 0x00080000 */
#define RCC_AHBENR_GPIOCEN                       RCC_AHBENR_GPIOCEN_Msk        /*!< GPIOC clock enable */
#define RCC_AHBENR_GPIODEN_Pos                   (20)
#define RCC_AHBENR_GPIODEN_Msk                   (0x1U << RCC_AHBENR_GPIODEN_Pos) /*!< 0x00100000 */
#define RCC_AHBENR_GPIODEN                       RCC_AHBENR_GPIODEN_Msk        /*!< GPIOD clock enable */
#define RCC_AHBENR_GPIOFEN_Pos                   (22U)
#define RCC_AHBENR_GPIOFEN_Msk                   (0x1U << RCC_AHBENR_GPIOFEN_Pos) /*!< 0x00400000 */
#define RCC_AHBENR_GPIOFEN                       RCC_AHBENR_GPIOFEN_Msk        /*!< GPIOF clock enable */
#define RCC_AHBENR_TSCEN_Pos                     (24U)
#define RCC_AHBENR_TSCEN_Msk                     (0x1U << RCC_AHBENR_TSCEN_Pos) /*!< 0x01000000 */
#define RCC_AHBENR_TSCEN                         RCC_AHBENR_TSCEN_Msk          /*!< TS controller clock enable */
#define  RCC_AHBENR_DMA1EN                   RCC_AHBENR_DMAEN        /*!< DMA1 clock enable */
#define  RCC_AHBENR_TSEN                     RCC_AHBENR_TSCEN        /*!< TS clock enable */
/*****************  Bit definition for RCC_APB2ENR register  *****************/
#define RCC_APB2ENR_SYSCFGCOMPEN_Pos             (0)
#define RCC_APB2ENR_SYSCFGCOMPEN_Msk             (0x1U << RCC_APB2ENR_SYSCFGCOMPEN_Pos) /*!< 0x00000001 */
#define RCC_APB2ENR_SYSCFGCOMPEN                 RCC_APB2ENR_SYSCFGCOMPEN_Msk  /*!< SYSCFG and comparator clock enable */
#define RCC_APB2ENR_ADCEN_Pos                    (9U)
#define RCC_APB2ENR_ADCEN_Msk                    (0x1U << RCC_APB2ENR_ADCEN_Pos) /*!< 0x00000200 */
#define RCC_APB2ENR_ADCEN                        RCC_APB2ENR_ADCEN_Msk         /*!< ADC1 clock enable */
#define RCC_APB2ENR_TIM1EN_Pos                   (11U)
#define RCC_APB2ENR_TIM1EN_Msk                   (0x1U << RCC_APB2ENR_TIM1EN_Pos) /*!< 0x00000800 */
#define RCC_APB2ENR_TIM1EN                       RCC_APB2ENR_TIM1EN_Msk        /*!< TIM1 clock enable */
#define RCC_APB2ENR_SPI1EN_Pos                   (12U)
#define RCC_APB2ENR_SPI1EN_Msk                   (0x1U << RCC_APB2ENR_SPI1EN_Pos) /*!< 0x00001000 */
#define RCC_APB2ENR_SPI1EN                       RCC_APB2ENR_SPI1EN_Msk        /*!< SPI1 clock enable */
#define RCC_APB2ENR_USART1EN_Pos                 (14U)
#define RCC_APB2ENR_USART1EN_Msk                 (0x1U << RCC_APB2ENR_USART1EN_Pos) /*!< 0x00004000 */
#define RCC_APB2ENR_USART1EN                     RCC_APB2ENR_USART1EN_Msk      /*!< USART1 clock enable */
#define RCC_APB2ENR_TIM15EN_Pos                  (16U)
#define RCC_APB2ENR_TIM15EN_Msk                  (0x1U << RCC_APB2ENR_TIM15EN_Pos) /*!< 0x00010000 */
#define RCC_APB2ENR_TIM15EN                      RCC_APB2ENR_TIM15EN_Msk       /*!< TIM15 clock enable */
#define RCC_APB2ENR_TIM16EN_Pos                  (17U)
#define RCC_APB2ENR_TIM16EN_Msk                  (0x1U << RCC_APB2ENR_TIM16EN_Pos) /*!< 0x00020000 */
#define RCC_APB2ENR_TIM16EN                      RCC_APB2ENR_TIM16EN_Msk       /*!< TIM16 clock enable */
#define RCC_APB2ENR_TIM17EN_Pos                  (18U)
#define RCC_APB2ENR_TIM17EN_Msk                  (0x1U << RCC_APB2ENR_TIM17EN_Pos) /*!< 0x00040000 */
#define RCC_APB2ENR_TIM17EN                      RCC_APB2ENR_TIM17EN_Msk       /*!< TIM17 clock enable */
#define RCC_APB2ENR_DBGMCUEN_Pos                 (22U)
#define RCC_APB2ENR_DBGMCUEN_Msk                 (0x1U << RCC_APB2ENR_DBGMCUEN_Pos) /*!< 0x00400000 */
#define RCC_APB2ENR_DBGMCUEN                     RCC_APB2ENR_DBGMCUEN_Msk      /*!< DBGMCU clock enable */
#define  RCC_APB2ENR_SYSCFGEN                RCC_APB2ENR_SYSCFGCOMPEN        /*!< SYSCFG clock enable */
#define  RCC_APB2ENR_ADC1EN                  RCC_APB2ENR_ADCEN               /*!< ADC1 clock enable */
/*****************  Bit definition for RCC_APB1ENR register  *****************/
#define RCC_APB1ENR_TIM2EN_Pos                   (0)
#define RCC_APB1ENR_TIM2EN_Msk                   (0x1U << RCC_APB1ENR_TIM2EN_Pos) /*!< 0x00000001 */
#define RCC_APB1ENR_TIM2EN                       RCC_APB1ENR_TIM2EN_Msk        /*!< Timer 2 clock enable */
#define RCC_APB1ENR_TIM3EN_Pos                   (1U)
#define RCC_APB1ENR_TIM3EN_Msk                   (0x1U << RCC_APB1ENR_TIM3EN_Pos) /*!< 0x00000002 */
#define RCC_APB1ENR_TIM3EN                       RCC_APB1ENR_TIM3EN_Msk        /*!< Timer 3 clock enable */
#define RCC_APB1ENR_TIM6EN_Pos                   (4U)
#define RCC_APB1ENR_TIM6EN_Msk                   (0x1U << RCC_APB1ENR_TIM6EN_Pos) /*!< 0x00000010 */
#define RCC_APB1ENR_TIM6EN                       RCC_APB1ENR_TIM6EN_Msk        /*!< Timer 6 clock enable */
#define RCC_APB1ENR_TIM14EN_Pos                  (8U)
#define RCC_APB1ENR_TIM14EN_Msk                  (0x1U << RCC_APB1ENR_TIM14EN_Pos) /*!< 0x00000100 */
#define RCC_APB1ENR_TIM14EN                      RCC_APB1ENR_TIM14EN_Msk       /*!< Timer 14 clock enable */
#define RCC_APB1ENR_WWDGEN_Pos                   (11U)
#define RCC_APB1ENR_WWDGEN_Msk                   (0x1U << RCC_APB1ENR_WWDGEN_Pos) /*!< 0x00000800 */
#define RCC_APB1ENR_WWDGEN                       RCC_APB1ENR_WWDGEN_Msk        /*!< Window Watchdog clock enable */
#define RCC_APB1ENR_SPI2EN_Pos                   (14U)
#define RCC_APB1ENR_SPI2EN_Msk                   (0x1U << RCC_APB1ENR_SPI2EN_Pos) /*!< 0x00004000 */
#define RCC_APB1ENR_SPI2EN                       RCC_APB1ENR_SPI2EN_Msk        /*!< SPI2 clock enable */
#define RCC_APB1ENR_USART2EN_Pos                 (17U)
#define RCC_APB1ENR_USART2EN_Msk                 (0x1U << RCC_APB1ENR_USART2EN_Pos) /*!< 0x00020000 */
#define RCC_APB1ENR_USART2EN                     RCC_APB1ENR_USART2EN_Msk      /*!< USART2 clock enable */
#define RCC_APB1ENR_I2C1EN_Pos                   (21U)
#define RCC_APB1ENR_I2C1EN_Msk                   (0x1U << RCC_APB1ENR_I2C1EN_Pos) /*!< 0x00200000 */
#define RCC_APB1ENR_I2C1EN                       RCC_APB1ENR_I2C1EN_Msk        /*!< I2C1 clock enable */
#define RCC_APB1ENR_I2C2EN_Pos                   (22U)
#define RCC_APB1ENR_I2C2EN_Msk                   (0x1U << RCC_APB1ENR_I2C2EN_Pos) /*!< 0x00400000 */
#define RCC_APB1ENR_I2C2EN                       RCC_APB1ENR_I2C2EN_Msk        /*!< I2C2 clock enable */
#define RCC_APB1ENR_PWREN_Pos                    (28U)
#define RCC_APB1ENR_PWREN_Msk                    (0x1U << RCC_APB1ENR_PWREN_Pos) /*!< 0x10000000 */
#define RCC_APB1ENR_PWREN                        RCC_APB1ENR_PWREN_Msk         /*!< PWR clock enable */
#define RCC_APB1ENR_DACEN_Pos                    (29U)
#define RCC_APB1ENR_DACEN_Msk                    (0x1U << RCC_APB1ENR_DACEN_Pos) /*!< 0x20000000 */
#define RCC_APB1ENR_DACEN                        RCC_APB1ENR_DACEN_Msk         /*!< DAC clock enable */
#define RCC_APB1ENR_CECEN_Pos                    (30)
#define RCC_APB1ENR_CECEN_Msk                    (0x1U << RCC_APB1ENR_CECEN_Pos) /*!< 0x40000000 */
#define RCC_APB1ENR_CECEN                        RCC_APB1ENR_CECEN_Msk         /*!< CEC clock enable */
/*******************  Bit definition for RCC_BDCR register  ******************/
#define RCC_BDCR_LSEON_Pos                       (0)
#define RCC_BDCR_LSEON_Msk                       (0x1U << RCC_BDCR_LSEON_Pos)  /*!< 0x00000001 */
#define RCC_BDCR_LSEON                           RCC_BDCR_LSEON_Msk            /*!< External Low Speed oscillator enable */
#define RCC_BDCR_LSERDY_Pos                      (1U)
#define RCC_BDCR_LSERDY_Msk                      (0x1U << RCC_BDCR_LSERDY_Pos) /*!< 0x00000002 */
#define RCC_BDCR_LSERDY                          RCC_BDCR_LSERDY_Msk           /*!< External Low Speed oscillator Ready */
#define RCC_BDCR_LSEBYP_Pos                      (2U)
#define RCC_BDCR_LSEBYP_Msk                      (0x1U << RCC_BDCR_LSEBYP_Pos) /*!< 0x00000004 */
#define RCC_BDCR_LSEBYP                          RCC_BDCR_LSEBYP_Msk           /*!< External Low Speed oscillator Bypass */
#define RCC_BDCR_LSEDRV_Pos                      (3U)
#define RCC_BDCR_LSEDRV_Msk                      (0x3U << RCC_BDCR_LSEDRV_Pos) /*!< 0x00000018 */
#define RCC_BDCR_LSEDRV                          RCC_BDCR_LSEDRV_Msk           /*!< LSEDRV[1:0] bits (LSE Osc. drive capability) */
#define RCC_BDCR_LSEDRV_0                        (0x1U << RCC_BDCR_LSEDRV_Pos) /*!< 0x00000008 */
#define RCC_BDCR_LSEDRV_1                        (0x2U << RCC_BDCR_LSEDRV_Pos) /*!< 0x00000010 */
#define RCC_BDCR_RTCSEL_Pos                      (8U)
#define RCC_BDCR_RTCSEL_Msk                      (0x3U << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000300 */
#define RCC_BDCR_RTCSEL                          RCC_BDCR_RTCSEL_Msk           /*!< RTCSEL[1:0] bits (RTC clock source selection) */
#define RCC_BDCR_RTCSEL_0                        (0x1U << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000100 */
#define RCC_BDCR_RTCSEL_1                        (0x2U << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000200 */
#define RCC_BDCR_RTCSEL_NOCLOCK                  (0x00000000)                 /*!< No clock */
#define RCC_BDCR_RTCSEL_LSE                      (0x00000100)                 /*!< LSE oscillator clock used as RTC clock */
#define RCC_BDCR_RTCSEL_LSI                      (0x00000200)                 /*!< LSI oscillator clock used as RTC clock */
#define RCC_BDCR_RTCSEL_HSE                      (0x00000300)                 /*!< HSE oscillator clock divided by 128 used as RTC clock */
#define RCC_BDCR_RTCEN_Pos                       (15U)
#define RCC_BDCR_RTCEN_Msk                       (0x1U << RCC_BDCR_RTCEN_Pos)  /*!< 0x00008000 */
#define RCC_BDCR_RTCEN                           RCC_BDCR_RTCEN_Msk            /*!< RTC clock enable */
#define RCC_BDCR_BDRST_Pos                       (16U)
#define RCC_BDCR_BDRST_Msk                       (0x1U << RCC_BDCR_BDRST_Pos)  /*!< 0x00010000 */
#define RCC_BDCR_BDRST                           RCC_BDCR_BDRST_Msk            /*!< Backup domain software reset  */
/*******************  Bit definition for RCC_CSR register  *******************/
#define RCC_CSR_LSION_Pos                        (0)
#define RCC_CSR_LSION_Msk                        (0x1U << RCC_CSR_LSION_Pos)   /*!< 0x00000001 */
#define RCC_CSR_LSION                            RCC_CSR_LSION_Msk             /*!< Internal Low Speed oscillator enable */
#define RCC_CSR_LSIRDY_Pos                       (1U)
#define RCC_CSR_LSIRDY_Msk                       (0x1U << RCC_CSR_LSIRDY_Pos)  /*!< 0x00000002 */
#define RCC_CSR_LSIRDY                           RCC_CSR_LSIRDY_Msk            /*!< Internal Low Speed oscillator Ready */
#define RCC_CSR_V18PWRRSTF_Pos                   (23U)
#define RCC_CSR_V18PWRRSTF_Msk                   (0x1U << RCC_CSR_V18PWRRSTF_Pos) /*!< 0x00800000 */
#define RCC_CSR_V18PWRRSTF                       RCC_CSR_V18PWRRSTF_Msk        /*!< V1.8 power domain reset flag */
#define RCC_CSR_RMVF_Pos                         (24U)
#define RCC_CSR_RMVF_Msk                         (0x1U << RCC_CSR_RMVF_Pos)    /*!< 0x01000000 */
#define RCC_CSR_RMVF                             RCC_CSR_RMVF_Msk              /*!< Remove reset flag */
#define RCC_CSR_OBLRSTF_Pos                      (25U)
#define RCC_CSR_OBLRSTF_Msk                      (0x1U << RCC_CSR_OBLRSTF_Pos) /*!< 0x02000000 */
#define RCC_CSR_OBLRSTF                          RCC_CSR_OBLRSTF_Msk           /*!< OBL reset flag */
#define RCC_CSR_PINRSTF_Pos                      (26U)
#define RCC_CSR_PINRSTF_Msk                      (0x1U << RCC_CSR_PINRSTF_Pos) /*!< 0x04000000 */
#define RCC_CSR_PINRSTF                          RCC_CSR_PINRSTF_Msk           /*!< PIN reset flag */
#define RCC_CSR_PORRSTF_Pos                      (27U)
#define RCC_CSR_PORRSTF_Msk                      (0x1U << RCC_CSR_PORRSTF_Pos) /*!< 0x08000000 */
#define RCC_CSR_PORRSTF                          RCC_CSR_PORRSTF_Msk           /*!< POR/PDR reset flag */
#define RCC_CSR_SFTRSTF_Pos                      (28U)
#define RCC_CSR_SFTRSTF_Msk                      (0x1U << RCC_CSR_SFTRSTF_Pos) /*!< 0x10000000 */
#define RCC_CSR_SFTRSTF                          RCC_CSR_SFTRSTF_Msk           /*!< Software Reset flag */
#define RCC_CSR_IWDGRSTF_Pos                     (29U)
#define RCC_CSR_IWDGRSTF_Msk                     (0x1U << RCC_CSR_IWDGRSTF_Pos) /*!< 0x20000000 */
#define RCC_CSR_IWDGRSTF                         RCC_CSR_IWDGRSTF_Msk          /*!< Independent Watchdog reset flag */
#define RCC_CSR_WWDGRSTF_Pos                     (30)
#define RCC_CSR_WWDGRSTF_Msk                     (0x1U << RCC_CSR_WWDGRSTF_Pos) /*!< 0x40000000 */
#define RCC_CSR_WWDGRSTF                         RCC_CSR_WWDGRSTF_Msk          /*!< Window watchdog reset flag */
#define RCC_CSR_LPWRRSTF_Pos                     (31U)
#define RCC_CSR_LPWRRSTF_Msk                     (0x1U << RCC_CSR_LPWRRSTF_Pos) /*!< 0x80000000 */
#define RCC_CSR_LPWRRSTF                         RCC_CSR_LPWRRSTF_Msk          /*!< Low-Power reset flag */
#define  RCC_CSR_OBL                         RCC_CSR_OBLRSTF        /*!< OBL reset flag */
/*******************  Bit definition for RCC_AHBRSTR register  ***************/
#define RCC_AHBRSTR_GPIOARST_Pos                 (17U)
#define RCC_AHBRSTR_GPIOARST_Msk                 (0x1U << RCC_AHBRSTR_GPIOARST_Pos) /*!< 0x00020000 */
#define RCC_AHBRSTR_GPIOARST                     RCC_AHBRSTR_GPIOARST_Msk      /*!< GPIOA reset */
#define RCC_AHBRSTR_GPIOBRST_Pos                 (18U)
#define RCC_AHBRSTR_GPIOBRST_Msk                 (0x1U << RCC_AHBRSTR_GPIOBRST_Pos) /*!< 0x00040000 */
#define RCC_AHBRSTR_GPIOBRST                     RCC_AHBRSTR_GPIOBRST_Msk      /*!< GPIOB reset */
#define RCC_AHBRSTR_GPIOCRST_Pos                 (19U)
#define RCC_AHBRSTR_GPIOCRST_Msk                 (0x1U << RCC_AHBRSTR_GPIOCRST_Pos) /*!< 0x00080000 */
#define RCC_AHBRSTR_GPIOCRST                     RCC_AHBRSTR_GPIOCRST_Msk      /*!< GPIOC reset */
#define RCC_AHBRSTR_GPIODRST_Pos                 (20)
#define RCC_AHBRSTR_GPIODRST_Msk                 (0x1U << RCC_AHBRSTR_GPIODRST_Pos) /*!< 0x00100000 */
#define RCC_AHBRSTR_GPIODRST                     RCC_AHBRSTR_GPIODRST_Msk      /*!< GPIOD reset */
#define RCC_AHBRSTR_GPIOFRST_Pos                 (22U)
#define RCC_AHBRSTR_GPIOFRST_Msk                 (0x1U << RCC_AHBRSTR_GPIOFRST_Pos) /*!< 0x00400000 */
#define RCC_AHBRSTR_GPIOFRST                     RCC_AHBRSTR_GPIOFRST_Msk      /*!< GPIOF reset */
#define RCC_AHBRSTR_TSCRST_Pos                   (24U)
#define RCC_AHBRSTR_TSCRST_Msk                   (0x1U << RCC_AHBRSTR_TSCRST_Pos) /*!< 0x01000000 */
#define RCC_AHBRSTR_TSCRST                       RCC_AHBRSTR_TSCRST_Msk        /*!< TS reset */
#define  RCC_AHBRSTR_TSRST                   RCC_AHBRSTR_TSCRST         /*!< TS reset */
/*******************  Bit definition for RCC_CFGR2 register  *****************/
#define RCC_CFGR2_PREDIV_Pos                     (0)
#define RCC_CFGR2_PREDIV_Msk                     (0xFU << RCC_CFGR2_PREDIV_Pos) /*!< 0x0000000F */
#define RCC_CFGR2_PREDIV                         RCC_CFGR2_PREDIV_Msk          /*!< PREDIV[3:0] bits */
#define RCC_CFGR2_PREDIV_0                       (0x1U << RCC_CFGR2_PREDIV_Pos) /*!< 0x00000001 */
#define RCC_CFGR2_PREDIV_1                       (0x2U << RCC_CFGR2_PREDIV_Pos) /*!< 0x00000002 */
#define RCC_CFGR2_PREDIV_2                       (0x4U << RCC_CFGR2_PREDIV_Pos) /*!< 0x00000004 */
#define RCC_CFGR2_PREDIV_3                       (0x8U << RCC_CFGR2_PREDIV_Pos) /*!< 0x00000008 */
#define RCC_CFGR2_PREDIV_DIV1                    (0x00000000)                 /*!< PREDIV input clock not divided */
#define RCC_CFGR2_PREDIV_DIV2                    (0x00000001U)                 /*!< PREDIV input clock divided by 2 */
#define RCC_CFGR2_PREDIV_DIV3                    (0x00000002U)                 /*!< PREDIV input clock divided by 3 */
#define RCC_CFGR2_PREDIV_DIV4                    (0x00000003U)                 /*!< PREDIV input clock divided by 4 */
#define RCC_CFGR2_PREDIV_DIV5                    (0x00000004U)                 /*!< PREDIV input clock divided by 5 */
#define RCC_CFGR2_PREDIV_DIV6                    (0x00000005U)                 /*!< PREDIV input clock divided by 6 */
#define RCC_CFGR2_PREDIV_DIV7                    (0x00000006U)                 /*!< PREDIV input clock divided by 7 */
#define RCC_CFGR2_PREDIV_DIV8                    (0x00000007U)                 /*!< PREDIV input clock divided by 8 */
#define RCC_CFGR2_PREDIV_DIV9                    (0x00000008U)                 /*!< PREDIV input clock divided by 9 */
#define RCC_CFGR2_PREDIV_DIV10                   (0x00000009U)                 /*!< PREDIV input clock divided by 10 */
#define RCC_CFGR2_PREDIV_DIV11                   (0x0000000AU)                 /*!< PREDIV input clock divided by 11 */
#define RCC_CFGR2_PREDIV_DIV12                   (0x0000000BU)                 /*!< PREDIV input clock divided by 12 */
#define RCC_CFGR2_PREDIV_DIV13                   (0x0000000CU)                 /*!< PREDIV input clock divided by 13 */
#define RCC_CFGR2_PREDIV_DIV14                   (0x0000000DU)                 /*!< PREDIV input clock divided by 14 */
#define RCC_CFGR2_PREDIV_DIV15                   (0x0000000EU)                 /*!< PREDIV input clock divided by 15 */
#define RCC_CFGR2_PREDIV_DIV16                   (0x0000000FU)                 /*!< PREDIV input clock divided by 16 */
/*******************  Bit definition for RCC_CFGR3 register  *****************/
#define RCC_CFGR3_USART1SW_Pos                   (0)
#define RCC_CFGR3_USART1SW_Msk                   (0x3U << RCC_CFGR3_USART1SW_Pos) /*!< 0x00000003 */
#define RCC_CFGR3_USART1SW                       RCC_CFGR3_USART1SW_Msk        /*!< USART1SW[1:0] bits */
#define RCC_CFGR3_USART1SW_0                     (0x1U << RCC_CFGR3_USART1SW_Pos) /*!< 0x00000001 */
#define RCC_CFGR3_USART1SW_1                     (0x2U << RCC_CFGR3_USART1SW_Pos) /*!< 0x00000002 */
#define RCC_CFGR3_USART1SW_PCLK                  (0x00000000)                 /*!< PCLK clock used as USART1 clock source */
#define RCC_CFGR3_USART1SW_SYSCLK                (0x00000001U)                 /*!< System clock selected as USART1 clock source */
#define RCC_CFGR3_USART1SW_LSE                   (0x00000002U)                 /*!< LSE oscillator clock used as USART1 clock source */
#define RCC_CFGR3_USART1SW_HSI                   (0x00000003U)                 /*!< HSI oscillator clock used as USART1 clock source */
#define RCC_CFGR3_I2C1SW_Pos                     (4U)
#define RCC_CFGR3_I2C1SW_Msk                     (0x1U << RCC_CFGR3_I2C1SW_Pos) /*!< 0x00000010 */
#define RCC_CFGR3_I2C1SW                         RCC_CFGR3_I2C1SW_Msk          /*!< I2C1SW bits */
#define RCC_CFGR3_I2C1SW_HSI                     (0x00000000)                 /*!< HSI oscillator clock used as I2C1 clock source */
#define RCC_CFGR3_I2C1SW_SYSCLK_Pos              (4U)
#define RCC_CFGR3_I2C1SW_SYSCLK_Msk              (0x1U << RCC_CFGR3_I2C1SW_SYSCLK_Pos) /*!< 0x00000010 */
#define RCC_CFGR3_I2C1SW_SYSCLK                  RCC_CFGR3_I2C1SW_SYSCLK_Msk   /*!< System clock selected as I2C1 clock source */
#define RCC_CFGR3_CECSW_Pos                      (6U)
#define RCC_CFGR3_CECSW_Msk                      (0x1U << RCC_CFGR3_CECSW_Pos) /*!< 0x00000040 */
#define RCC_CFGR3_CECSW                          RCC_CFGR3_CECSW_Msk           /*!< CECSW bits */
#define RCC_CFGR3_CECSW_HSI_DIV244               (0x00000000)                 /*!< HSI clock divided by 244 selected as HDMI CEC entry clock source */
#define RCC_CFGR3_CECSW_LSE_Pos                  (6U)
#define RCC_CFGR3_CECSW_LSE_Msk                  (0x1U << RCC_CFGR3_CECSW_LSE_Pos) /*!< 0x00000040 */
#define RCC_CFGR3_CECSW_LSE                      RCC_CFGR3_CECSW_LSE_Msk       /*!< LSE clock selected as HDMI CEC entry clock source */
/*******************  Bit definition for RCC_CR2 register  *******************/
#define RCC_CR2_HSI14ON_Pos                      (0)
#define RCC_CR2_HSI14ON_Msk                      (0x1U << RCC_CR2_HSI14ON_Pos) /*!< 0x00000001 */
#define RCC_CR2_HSI14ON                          RCC_CR2_HSI14ON_Msk           /*!< Internal High Speed 14MHz clock enable */
#define RCC_CR2_HSI14RDY_Pos                     (1U)
#define RCC_CR2_HSI14RDY_Msk                     (0x1U << RCC_CR2_HSI14RDY_Pos) /*!< 0x00000002 */
#define RCC_CR2_HSI14RDY                         RCC_CR2_HSI14RDY_Msk          /*!< Internal High Speed 14MHz clock ready flag */
#define RCC_CR2_HSI14DIS_Pos                     (2U)
#define RCC_CR2_HSI14DIS_Msk                     (0x1U << RCC_CR2_HSI14DIS_Pos) /*!< 0x00000004 */
#define RCC_CR2_HSI14DIS                         RCC_CR2_HSI14DIS_Msk          /*!< Internal High Speed 14MHz clock disable */
#define RCC_CR2_HSI14TRIM_Pos                    (3U)
#define RCC_CR2_HSI14TRIM_Msk                    (0x1FU << RCC_CR2_HSI14TRIM_Pos) /*!< 0x000000F8 */
#define RCC_CR2_HSI14TRIM                        RCC_CR2_HSI14TRIM_Msk         /*!< Internal High Speed 14MHz clock trimming */
#define RCC_CR2_HSI14CAL_Pos                     (8U)
#define RCC_CR2_HSI14CAL_Msk                     (0xFFU << RCC_CR2_HSI14CAL_Pos) /*!< 0x0000FF00 */
#define RCC_CR2_HSI14CAL                         RCC_CR2_HSI14CAL_Msk          /*!< Internal High Speed 14MHz clock Calibration */
#define RCC_CRS_IRQn                             RCC_IRQn
#define RCC_CRS_IRQHandler                       RCC_IRQHandler

//--------------------------------------------------------------------------------
#define SCS_BASE 0xE000E000
#define SCB      SCS_BASE+0x0D00

//--------------------------------------------------------------------------------
#define SysTick  SCS_BASE+0x0010

//--------------------------------------------------------------------------------
//--- SysTick_TypeDef

#define CTRL       0x00
#define LOAD       0x04
#define VAL        0x08
#define CALIB      0x0c

#define SysTick_CTRL_COUNTFLAG_Pos         16U                                            /*!< SysTick CTRL: COUNTFLAG Position */
#define SysTick_CTRL_COUNTFLAG_Msk         (1UL << SysTick_CTRL_COUNTFLAG_Pos)            /*!< SysTick CTRL: COUNTFLAG Mask */
#define SysTick_CTRL_CLKSOURCE_Pos          2U                                            /*!< SysTick CTRL: CLKSOURCE Position */
#define SysTick_CTRL_CLKSOURCE_Msk         (1UL << SysTick_CTRL_CLKSOURCE_Pos)            /*!< SysTick CTRL: CLKSOURCE Mask */
#define SysTick_CTRL_TICKINT_Pos            1U                                            /*!< SysTick CTRL: TICKINT Position */
#define SysTick_CTRL_TICKINT_Msk           (1UL << SysTick_CTRL_TICKINT_Pos)              /*!< SysTick CTRL: TICKINT Mask */
#define SysTick_CTRL_ENABLE_Pos             0                                             /*!< SysTick CTRL: ENABLE Position */
#define SysTick_CTRL_ENABLE_Msk            (1UL /*<< SysTick_CTRL_ENABLE_Pos*/)           /*!< SysTick CTRL: ENABLE Mask */

//--------------------------------------------------------------------------------
#define NVIC     SCS_BASE+0x0100

//--------------------------------------------------------------------------------
//--- NVIC_Type

#define ISER       0x000
#define ICER       0x080
#define ISPR       0x100
#define ICPR       0x180
#define IP         0x300

#define SysTick_IRQn -1

//--- EOF ---

