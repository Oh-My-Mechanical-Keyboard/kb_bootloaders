/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
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
 */

#include "board_api.h"
#include "tusb.h"

//--------------------------------------------------------------------+
// MACRO TYPEDEF CONSTANT ENUM DECLARATION
//--------------------------------------------------------------------+
void board_init(void)
{
}

void board_dfu_init(void)
{
  // Init USB for DFU
}

void board_reset(void)
{
  // NVIC_SystemReset();
}

void board_dfu_complete(void)
{
  // Mostly reset
  // NVIC_SystemReset();
}

bool board_app_valid(void)
{
  return false;
}

void board_app_jump(void)
{
  // Jump to application code
}

uint8_t board_usb_get_serial(uint8_t serial_id[16])
{
  (void) serial_id;
  return 0;
}

//--------------------------------------------------------------------+
// LED pattern
//--------------------------------------------------------------------+

void board_led_write(uint32_t state)
{
  (void) state;
}

void board_rgb_write(uint8_t const rgb[])
{
  (void) rgb;
}

//--------------------------------------------------------------------+
// Timer
//--------------------------------------------------------------------+

void board_timer_start(uint32_t ms)
{
  (void) ms;
  // SysTick_Config( (SystemCoreClock/1000) * ms );
}

void board_timer_stop(void)
{
  // SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
}

void SysTick_Handler (void)
{
  board_timer_handler();
}


int board_uart_write(void const * buf, int len)
{
  (void) buf; (void) len;
  return 0;
}

#ifndef TINYUF2_SELF_UPDATE

// Forward USB interrupt events to TinyUSB IRQ Handler
void OTG_FS_IRQHandler(void)
{
  tud_int_handler(0);
}

#endif
