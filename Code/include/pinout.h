#include <stdint.h>


#define GPIO_SFR_(addr)		(*(volatile uint8_t*)(0x5000 + (addr)))


#define PC_ODR                  GPIO_SFR_(0x0A)
#define PC_IDR                  GPIO_SFR_(0x0B)
#define PC_DDR                  GPIO_SFR_(0x0C)
#define PC_CR1                  GPIO_SFR_(0x0D)
#define PC_CR2                  GPIO_SFR_(0x0E)

#define PIN_B			7


#define PD_ODR                  GPIO_SFR_(0x0F)
#define PD_IDR                  GPIO_SFR_(0x10)
#define PD_DDR                  GPIO_SFR_(0x11)
#define PD_CR1                  GPIO_SFR_(0x12)
#define PD_CR2                  GPIO_SFR_(0x13)

#define PIN_A			1
#define PIN_F			2
#define PIN_D			3
#define PIN_E			4
#define PIN_G			5
#define PIN_C			6
