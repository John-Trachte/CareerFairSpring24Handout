/**
 * Register map for STM8S103F3 MCU
 */

#ifndef STM8S103F3_H
#define STM8S103F3_H

#include <stdint.h>

#define SFR_(addr) (*(volatile uint8_t *)(0x5000 + (addr)))

// IO Control Registers

#define PA_ODR SFR_(0x00)
#define PA_IDR SFR_(0x01)
#define PA_DDR SFR_(0x02)
#define PA_CR1 SFR_(0x03)
#define PA_CR2 SFR_(0x04)

#define PB_ODR SFR_(0x05)
#define PB_IDR SFR_(0x06)
#define PB_DDR SFR_(0x07)
#define PB_CR1 SFR_(0x08)
#define PB_CR2 SFR_(0x09)

#define PC_ODR SFR_(0x0A)
#define PC_IDR SFR_(0x0B)
#define PC_DDR SFR_(0x0C)
#define PC_CR1 SFR_(0x0D)
#define PC_CR2 SFR_(0x0E)

#define PD_ODR SFR_(0x0F)
#define PD_IDR SFR_(0x10)
#define PD_DDR SFR_(0x11)
#define PD_CR1 SFR_(0x12)
#define PD_CR2 SFR_(0x13)

#endif
