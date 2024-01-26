CC 			= sdcc

MAIN		=  src/main/main.c
CFLAGS		= -lstm8 -mstm8 --out-fmt-ihx --std-sdcc11
BINLOC		=  bins/

GPIO_TEST	=  test/gpiot.c 

COMMON		= -Isrc/common
APP			= -Isrc/application
DRIVERS		= -Isrc/drivers


# stm8flash options

MCU 		   = stm8s103f3
FLASH_PROTOCOL = stlinkv2
# Port is dev/ttyUSB0 by default


# Targets

.PHONY: flash gpiot clean

default:
	$(CC) $(CFLAGS) $(MAIN) -o $(BINLOC) $(COMMON) $(APP) $(DRIVERS)

flash:
	$(CC) $(CFLAGS) $(MAIN) -o $(BINLOC) $(COMMON) $(APP) $(DRIVERS)
	@stm8flash -c $(FLASH_PROTOCOL) -p $(MCU) -w main.ihx 

gpiot:
	$(CC) $(CFLAGS) $(GPIO_TEST) -o $(BINLOC) $(COMMON) $(APP) $(DRIVERS)
	@stm8flash -c $(FLASH_PROTOCOL) -p $(MCU) -w gpiot.ihx 
        
clean:
	@rm -rvf $(BINLOC)*