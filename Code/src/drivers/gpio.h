/**
 * GPIO configuration and use functions
 */

#ifndef GPIO_H
#define GPIO_H

#include "stm8s103f3.h"

#define IO_BITMASK 0x0FFF

/**
 * This enum is used in conjunction with IO_BITMASK to find the port and pin numbers of GPIOs
 *
 * The gpio_tssop enum is masked (&) with IO_BITMASK to find the corresponding port's ODR address
 * minus a constant (0x5000). The port is then that constant plus the found mask, and the
 * pin number is the gpio_tssop enum minus (the found mask plus the constant).
 * 
 * This enum corresponds to the TSSOP20 package
 */
typedef enum
{
    GPIO_1 = 0x900F,
    GPIO_2 = 0xA00F,
    GPIO_3 = 0xB00F,
    // Pin 4 is NRST
    GPIO_5 = 0x6000,
    GPIO_6 = 0x7000,
    // Pin 7 is Vss
    // Pin 8 is Vcap
    // Pin 9 is Vdd
    GPIO_10 = 0x8000,
    GPIO_11 = 0xA005,
    GPIO_12 = 0x9005,
    GPIO_13 = 0x800A,
    GPIO_14 = 0x900A,
    GPIO_15 = 0xA00A,
    GPIO_16 = 0xB00A,
    GPIO_17 = 0xC00A,
    GPIO_18 = 0x600F,
    GPIO_19 = 0x700F,
    GPIO_20 = 0x800F
} gpio_tssop;

typedef enum
{
    INPUT,
    OUTPUT
} pin_dir;

void gpio_set_dir(pin_dir direction, gpio_tssop pin);

void gpio_write();

#endif