/* 
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * This file is part of the TinyUSB stack.
 */


#ifndef BOARD_H_
#define BOARD_H_

// Size of on-board external flash
#define BOARD_FLASH_SIZE     (16*1024*1024)

//--------------------------------------------------------------------+
// LED
//--------------------------------------------------------------------+

#define LED_PINMUX            IOMUXC_GPIO_11_GPIOMUX_IO11
#define LED_PORT              GPIO1
#define LED_PIN               11
#define LED_STATE_ON          1

#if 0
// PWM Test on Arduino header D8
#define LED_PWM_PINMUX        IOMUXC_GPIO_SD_02_FLEXPWM1_PWM0_A
#define LED_PWM_BASE          PWM1
#define LED_PWM_MODULE        kPWM_Module_0
#define LED_PWM_CHANNEL       kPWM_PwmA
#endif

//--------------------------------------------------------------------+
// Neopixel
//--------------------------------------------------------------------+

// Number of neopixels
#if 1
#define NEOPIXEL_NUMBER       0

#else
// Neopixel Test on Arduino header A0
#define NEOPIXEL_NUMBER       1
#define NEOPIXEL_PINMUX       IOMUXC_GPIO_AD_07_GPIOMUX_IO21
#define NEOPIXEL_PORT         GPIO1
#define NEOPIXEL_PIN          21
#endif

//--------------------------------------------------------------------+
// Button
//--------------------------------------------------------------------+

// SW8 button
#define BUTTON_PINMUX         IOMUXC_GPIO_SD_05_GPIO2_IO05
#define BUTTON_PORT           GPIO2
#define BUTTON_PIN            5
#define BUTTON_STATE_ACTIVE   0

//--------------------------------------------------------------------+
// USB UF2
//--------------------------------------------------------------------+

#define USB_VID           0x239A
#define USB_PID           0x0077
#define USB_MANUFACTURER  "NXP"
#define USB_PRODUCT       "RT1010 EVK"

#define UF2_PRODUCT_NAME  USB_MANUFACTURER " " USB_PRODUCT
#define UF2_BOARD_ID      "MIMXRT1010-EVK-revA"
#define UF2_VOLUME_LABEL  "RT1010BOOT"
#define UF2_INDEX_URL     "https://www.nxp.com/part/MIMXRT1010-EVK#/"

//--------------------------------------------------------------------+
// UART
//--------------------------------------------------------------------+

#define UART_DEV              LPUART1
#define UART_RX_PINMUX        IOMUXC_GPIO_09_LPUART1_RXD
#define UART_TX_PINMUX        IOMUXC_GPIO_10_LPUART1_TXD

//--------------------------------------------------------------------+
// EPS32 Co-Processors
//--------------------------------------------------------------------+
#define ESP_GPIO0_PINMUX  IOMUXC_GPIO_AD_05_GPIOMUX_IO19
#define ESP_GPIO0_PORT    GPIO1
#define ESP_GPIO0_PIN     19

#define ESP_RESET_PINMUX  IOMUXC_GPIO_AD_07_GPIOMUX_IO21
#define ESP_RESET_PORT    GPIO1
#define ESP_RESET_PIN     21

#endif /* BOARD_H_ */
