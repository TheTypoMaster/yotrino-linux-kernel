/*
 * Copyright (C) 2014, Entropic Communications. All Rights Reserved
 * Author: Srinivas Rao L <srinivas.rao@entropic.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __MACH_GPIO_H
#define __MACH_GPIO_H

#include <mach/soc.h>
#include <asm-generic/gpio.h>

/**
 * GPIO-0: Left GPIO configuration
 **/
#define GPIO0_IRQ       IRQ_GPIO_L
#define GPIO0_MAX_NR    74
#define GPIO0_BASE      (ARM_A9_HOST_MMIO_BASE + 0x0D5000)
#define GPIO0_IRQ_BASE  IRQ_MAX_NBR
#define GPIO0_START_PIN 0

/**
 * GPIO-1: Right GPIO configuration
 **/
#define GPIO1_IRQ IRQ_GPIO_R
#define GPIO1_MAX_NR    58
#define GPIO1_BASE      (ARM_A9_HOST_MMIO_BASE + 0x069000)
#define GPIO1_IRQ_BASE  (GPIO0_IRQ_BASE + GPIO0_MAX_NR)
#define GPIO1_START_PIN GPIO0_MAX_NR

#define PIO_INVALID 0xFFFF
#define PIOXXX PIO_INVALID
#define PIO_MAX  199

/**
 * GPIO <--> PIO mapping in Apollo SoC
 **/
#define PIO008      (GPIO0_START_PIN + 0)
#define PIO009      (GPIO0_START_PIN + 1)
#define PIO010      (GPIO0_START_PIN + 2)
#define PIO011      (GPIO0_START_PIN + 3)
#define PIO012      (GPIO0_START_PIN + 4)
#define PIO013      (GPIO0_START_PIN + 5)
#define PIO014      (GPIO0_START_PIN + 6)
#define PIO015      (GPIO0_START_PIN + 7)
#define PIO016      (GPIO0_START_PIN + 8)
#define PIO024      (GPIO0_START_PIN + 9)
#define PIO027      (GPIO0_START_PIN + 10)
#define PIO068      (GPIO0_START_PIN + 11)
#define PIO069      (GPIO0_START_PIN + 12)
#define PIO071      (GPIO0_START_PIN + 13)
#define PIO072      (GPIO0_START_PIN + 14)
#define PIO073      (GPIO0_START_PIN + 15)
#define PIO074      (GPIO0_START_PIN + 16)
#define PIO075      (GPIO0_START_PIN + 17)
#define PIO082      (GPIO0_START_PIN + 18)
#define PIO083      (GPIO0_START_PIN + 19)
#define PIO084      (GPIO0_START_PIN + 20)
#define PIO085      (GPIO0_START_PIN + 21)
#define PIO086      (GPIO0_START_PIN + 22)
#define PIO087      (GPIO0_START_PIN + 23)
#define PIO088      (GPIO0_START_PIN + 24)
#define PIO089      (GPIO0_START_PIN + 25)
#define PIO090      (GPIO0_START_PIN + 26)
#define PIO091      (GPIO0_START_PIN + 27)
#define PIO092      (GPIO0_START_PIN + 28)
#define PIO093      (GPIO0_START_PIN + 29)
#define PIO103      (GPIO0_START_PIN + 30)
#define PIO118      (GPIO0_START_PIN + 31)
#define PIO119      (GPIO0_START_PIN + 32)
#define PIO120      (GPIO0_START_PIN + 33)
#define PIO121      (GPIO0_START_PIN + 34)
#define PIO122      (GPIO0_START_PIN + 35)
#define PIO128      (GPIO0_START_PIN + 36)
#define PIO129      (GPIO0_START_PIN + 37)
#define PIO130      (GPIO0_START_PIN + 38)
#define PIO141      (GPIO0_START_PIN + 39)
#define PIO142      (GPIO0_START_PIN + 40)
#define PIO143      (GPIO0_START_PIN + 41)
#define PIO144      (GPIO0_START_PIN + 42)
#define PIO145      (GPIO0_START_PIN + 43)
#define PIO146      (GPIO0_START_PIN + 44)
#define PIO147      (GPIO0_START_PIN + 45)
#define PIO148      (GPIO0_START_PIN + 46)
#define PIO149      (GPIO0_START_PIN + 47)
#define PIO150      (GPIO0_START_PIN + 48)
#define PIO161      (GPIO0_START_PIN + 49)
#define PIO162      (GPIO0_START_PIN + 50)
#define PIO164      (GPIO0_START_PIN + 51)
#define PIO165      (GPIO0_START_PIN + 52)
#define PIO169      (GPIO0_START_PIN + 53)
#define PIO172      (GPIO0_START_PIN + 54)
#define PIO173      (GPIO0_START_PIN + 55)
#define PIO174      (GPIO0_START_PIN + 56)
#define PIO175      (GPIO0_START_PIN + 57)
#define PIO176      (GPIO0_START_PIN + 58)
#define PIO177      (GPIO0_START_PIN + 59)
#define PIO178      (GPIO0_START_PIN + 60)
#define PIO179      (GPIO0_START_PIN + 61)
#define PIO180      (GPIO0_START_PIN + 62)
#define PIO181      (GPIO0_START_PIN + 63)
#define PIO182      (GPIO0_START_PIN + 64)
#define PIO183      (GPIO0_START_PIN + 65)
#define PIO184      (GPIO0_START_PIN + 66)
#define PIO185      (GPIO0_START_PIN + 67)
#define PIO186      (GPIO0_START_PIN + 68)
#define PIO187      (GPIO0_START_PIN + 69)
#define PIO188      (GPIO0_START_PIN + 70)
#define PIO189      (GPIO0_START_PIN + 71)
#define PIO190      (GPIO0_START_PIN + 72)
#define PIO191      (GPIO0_START_PIN + 73)

/**
 * PIOs in GPIO right
 **/
#define PIO001      (GPIO1_START_PIN + 0)
#define PIO002      (GPIO1_START_PIN + 1)
#define PIO003      (GPIO1_START_PIN + 2)
#define PIO004      (GPIO1_START_PIN + 3)
#define PIO005      (GPIO1_START_PIN + 4)
#define PIO006      (GPIO1_START_PIN + 5)
#define PIO007      (GPIO1_START_PIN + 6)
#define PIO019      (GPIO1_START_PIN + 7)
#define PIO020      (GPIO1_START_PIN + 8)
#define PIO021      (GPIO1_START_PIN + 9)
#define PIO022      (GPIO1_START_PIN + 10)
#define PIO025      (GPIO1_START_PIN + 11)
#define PIO031      (GPIO1_START_PIN + 12)
#define PIO032      (GPIO1_START_PIN + 13)
#define PIO033      (GPIO1_START_PIN + 14)
#define PIO034      (GPIO1_START_PIN + 15)
#define PIO035      (GPIO1_START_PIN + 16)
#define PIO036      (GPIO1_START_PIN + 17)
#define PIO037      (GPIO1_START_PIN + 18)
#define PIO039      (GPIO1_START_PIN + 19)
#define PIO044      (GPIO1_START_PIN + 20)
#define PIO045      (GPIO1_START_PIN + 21)
#define PIO048      (GPIO1_START_PIN + 22)
#define PIO049      (GPIO1_START_PIN + 23)
#define PIO051      (GPIO1_START_PIN + 24)
#define PIO052      (GPIO1_START_PIN + 25)
#define PIO063      (GPIO1_START_PIN + 26)
#define PIO064      (GPIO1_START_PIN + 27)
#define PIO065      (GPIO1_START_PIN + 28)
#define PIO070      (GPIO1_START_PIN + 29)
#define PIO077      (GPIO1_START_PIN + 30)
#define PIO109      (GPIO1_START_PIN + 31)
#define PIO110      (GPIO1_START_PIN + 32)
#define PIO111      (GPIO1_START_PIN + 33)
#define PIO112      (GPIO1_START_PIN + 34)
#define PIO113      (GPIO1_START_PIN + 35)
#define PIO114      (GPIO1_START_PIN + 36)
#define PIO115      (GPIO1_START_PIN + 37)
#define PIO116      (GPIO1_START_PIN + 38)
#define PIO117      (GPIO1_START_PIN + 39)
#define PIO151      (GPIO1_START_PIN + 40)
#define PIO152      (GPIO1_START_PIN + 41)
#define PIO153      (GPIO1_START_PIN + 42)
#define PIO154      (GPIO1_START_PIN + 43)
#define PIO155      (GPIO1_START_PIN + 44)
#define PIO156      (GPIO1_START_PIN + 45)
#define PIO157      (GPIO1_START_PIN + 46)
#define PIO158      (GPIO1_START_PIN + 47)
#define PIO159      (GPIO1_START_PIN + 48)
#define PIO170      (GPIO1_START_PIN + 49)
#define PIO171      (GPIO1_START_PIN + 50)
#define PIO193      (GPIO1_START_PIN + 51)
#define PIO194      (GPIO1_START_PIN + 52)
#define PIO195      (GPIO1_START_PIN + 53)
#define PIO196      (GPIO1_START_PIN + 54)
#define PIO197      (GPIO1_START_PIN + 55)
#define PIO198      (GPIO1_START_PIN + 56)
#define PIO199      (GPIO1_START_PIN + 57)

/*
 * Platform data structure
 */
struct stb_gpio_platform_data {
	int first_pin;
	int nr_gpio;
	int irq_base;
};

#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
#define gpio_to_irq 	__gpio_to_irq

/* use gpio_get_pin_num to convert the pin index to
 * below PIO defines
 */
extern const int gpio_get_pin_num[];

#endif /* __MACH_GPIO_H */