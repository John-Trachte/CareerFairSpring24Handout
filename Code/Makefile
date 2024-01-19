CC = sdcc

MAIN = src/main.c
CFLAGS = -lstm8 -mstm8 --out-fmt-ihx --std-sdcc11
INCLUDES = -I./include
BINLOC = bins/

# stm8flash options

MCU = stm8s103f3
FLASH_PROTOCOL = stlinkv2
# Port is dev/ttyUSB0 by default


# Targets

.PHONY: flash clean

default:
	$(CC) $(CFLAGS) $(MAIN) $(INCLUDES) -o $(BINLOC)

flash:
	$(CC) $(CFLAGS) $(MAIN) $(INCLUDES)
	stm8flash -c $(FLASH_PROTOCOL) -p $(MCU) -w main.ihx 
        
clean:
	rm -rvf $(BINLOC)*