#include <stdint.h>


#define GPIO_SFR_(addr)		(*(volatile uint8_t*)(0x5000 + (addr)))

#define PB_ODR			GPIO_SFR_(0x05)
#define PB_IDR                  GPIO_SFR_(0x06)
#define PB_DDR                  GPIO_SFR_(0x07)
#define PB_CR1                  GPIO_SFR_(0x08)
#define PB_CR2                  GPIO_SFR_(0x09)

#define PIN_G			11
#define PIN_E			12


#define PC_ODR                  GPIO_SFR_(0x0A)
#define PC_IDR                  GPIO_SFR_(0x0B)
#define PC_DDR                  GPIO_SFR_(0x0C)
#define PC_CR1                  GPIO_SFR_(0x0D)
#define PC_CR2                  GPIO_SFR_(0x0E)

#define PIN_F			13
#define PIN_D			14


#define PD_ODR                  GPIO_SFR_(0x0F)
#define PD_IDR                  GPIO_SFR_(0x10)
#define PD_DDR                  GPIO_SFR_(0x11)
#define PD_CR1                  GPIO_SFR_(0x12)
#define PD_CR2                  GPIO_SFR_(0x13)

#define PIN_A			18
#define PIN_C			19
#define PIN_B			20
