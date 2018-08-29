//----------------------------------------------------------------------
// File: macros.inc
//----------------------------------------------------------------------

.macro delay_cycles cycles
    .if (\cycles/4) < 256 
        movs r0,#(\cycles/4)        // 1 cycles (account for this instruction)
    .else
        ldr r0,=(\cycles/4)         // 2 cycles (account for this instruction)
    .endif
1:
    subs r0,r0,#1                   // 1 cycle
    bne 1b                          // 3 cycles
.endm

.macro _delay_ms msec
    .if \msec < 256
        movs r0,#\msec
    .else
        ldr r0,=\msec
    .endif
    ldr r1,=millis                  // global millisecond tick_cnt
    ldr r2,[r1]                     // start tick_cnt
1:
    ldr r3,[r1]                     // current tick_cnt
    subs r3,r2                      // diff
    cmp r3,r0                       // diff < msec
    bcc 1b                          // keep looping
2:
    // done
.endm

.macro clear_bit, reg_addr, value
    ldr r1,=\reg_addr
    .if (\value) < 256
        movs r2,#\value
    .else
        ldr r2,=\value
    .endif
    ldr r0,[r1,#0]
    bics r0,r0,r2
    str r0,[r1,#0]
.endm

.macro modify_reg reg_addr, mask, value
    ldr r1,=\reg_addr
    ldr r0,[r1,#0]
    .if (\mask) < 256
        movs r2,#\mask
    .else
        ldr r2,=\mask
    .endif
    bics r0,r0,r2
    .if (\value) < 256
        movs r2,#\value
    .else
        ldr r2,=\value
    .endif
    orrs r0,r0,r2
    str r0,[r1,#0]
.endm

.macro set_bit reg_addr, value
    ldr r1,=\reg_addr
    .if (\value) < 256
        movs r2,#\value
    .else
        ldr r2,=\value
    .endif
    ldr r0,[r1,#0]
    orrs r0,r0,r2
    str r0,[r1,#0]
.endm

.macro toggle_bit, reg_addr, value
    ldr r1,=\reg_addr
    .if (\value) < 256
        movs r2,#\value
    .else
        ldr r2,=\value
    .endif
    ldr r0,[r1,#0]
    eors r0,r0,r2
    str r0,[r1,#0]
.endm

.macro write_reg reg_addr, value
    ldr r1,=\reg_addr
    .if (\value) < 256
        movs r2,#\value
    .else
        ldr r2,=\value
    .endif
    str r2,[r1,#0]
.endm

.macro write_32 addr, value
    write_reg \addr, \value
.endm

.macro wait_flag_set reg,flag
    ldr r0,=\reg
    .if (\flag) < 256
        movs r1,\flag
    .else
        ldr r1,=\flag
    .endif
1:
    ldr r2,[r0,#0]
    tst r2,r1
    bne 1b
.endm

.macro wait_flag_set_offset reg, offset, flag
    ldr r0,=\reg
    .if (\flag) < 256
        movs r1,\flag
    .else
        ldr r1,=\flag
    .endif
1:
    ldr r2,[r0,\offset]
    tst r2,r1
    bne 1b
.endm

//------------------------------------------------------------
// vim: set ts=4 sw=4 expandtab:
//------------------------------------------------------------
