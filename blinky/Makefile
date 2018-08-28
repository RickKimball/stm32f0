#----------------------------------------------------------------------
# Makefile - build bare metal gnu asm stm32f0 blinky
#----------------------------------------------------------------------

TARGET   := blinky.elf
SRC      := blinky.S
OBJ      := $(patsubst %.S, %.o, $(SRC))
INC      := stm32f0.inc macros.inc
BIN      := $(patsubst %.elf, %.bin,$(TARGET))
HEX      := $(patsubst %.elf, %.hex,$(TARGET))
LSS      := $(patsubst %.elf, %.lss,$(TARGET))
MAP      := $(patsubst %.elf,%.map,$(TARGET))
LDSCRIPT := stm32f0.ld

AS=arm-none-eabi-gcc -c
CC=arm-none-eabi-gcc
LD=arm-none-eabi-gcc 
SIZE=arm-none-eabi-size 
OBJCOPY=arm-none-eabi-objcopy
OBJDUMP=arm-none-eabi-objdump

F_CPU ?= 24000000
DEFS=-DF_CPU=$(F_CPU)
ASFLAGS=-g -Os $(DEFS)
CFLAGS=-g -Os $(DEFS)
LDFLAGS=-g -T $(LDSCRIPT) -Wl,-Map=$(MAP) -nostartfiles -specs=nano.specs
LDLIBS=
TARGET_MACH=-mcpu=cortex-m0 -mthumb
TARGET_ARCH=-mcpu=cortex-m0 -mthumb
CPPFLAGS=-I.

SWDLOADER = openocd
SWD_ARGS = -f interface/stlink.cfg
SWD_ARGS += -f target/stm32f0x.cfg
SWD_ARGS += -c "program $(TARGET) verify reset exit"

BOOTLOADER = stm32flash
BL_ARGS = -w $(BIN) -g 0x0 /dev/ttyACM0

%.elf: %.o
	$(CC) -o $@ $< $(TARGET_ARCH) $(LDFLAGS) $(LDLIBS)
	$(OBJDUMP) -CS -x $@ > $(LSS)
	$(OBJCOPY) -O binary $@ $(BIN)
	$(OBJCOPY) -O ihex $@ $(HEX)

%.o: %.S $(INC) $(LDSCRIPT) Makefile
	$(CC) -c -o $@ $< $(ASFLAGS) $(TARGET_ARCH) $(CPPFLAGS)

.PHONY: all
all: $(TARGET)
	@$(SIZE) $(TARGET)

.PRECIOUS: $(TARGET)
$(TARGET): $(OBJ)

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJ) $(BIN) $(HEX) $(LSS) $(MAP)

.PHONY: install
install:
	$(SWDLOADER) $(SWD_ARGS)

.PHONY: install_serial
install_serial:
	$(BOOTLOADER) $(BL_ARGS)

# vim: set noexpandtab:

