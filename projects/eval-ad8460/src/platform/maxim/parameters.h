/********************************************************************************
 *   @brief  Definitions specific to Maxim platform used by ad8460 project.
 *   @author John Erasmus Mari Geronimo (johnerasmusmari.geronimo@analog.com)
 ********************************************************************************
 * Copyright 2025(c) Analog Devices, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES, INC. “AS IS” AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL ANALOG DEVICES, INC. BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************/
#ifndef __PARAMETERS_H__
#define __PARAMETERS_H__

#include "maxim_gpio.h"
#include "maxim_spi.h"
#include "maxim_uart.h"
#include "maxim_uart_stdio.h"

#ifdef IIO_SUPPORT
#define INTC_DEVICE_ID	0
#endif

#if (TARGET_NUM == 32690)
#define	UART_IRQ_ID	UART0_IRQn
#define UART_DEVICE_ID	0
#elif (TARGET_NUM == 32665)
#define UART_IRQ_ID	UART1_IRQn
#define UART_DEVICE_ID	1
#endif

#define UART_BAUDRATE	115200
#define UART_OPS	&max_uart_ops
#define UART_EXTRA      &max_uart_extra

#if (TARGET_NUM == 32650)
#define SPI_DEVICE_ID	1
#define SPI_CS		0
#elif (TARGET_NUM == 32660) || (TARGET_NUM == 32655)
#define SPI_DEVICE_ID	0
#define SPI_CS		0
#elif (TARGET_NUM == 32665)
#define SPI_DEVICE_ID	1
#define SPI_CS		0
#elif (TARGET_NUM == 78000)
#define SPI_DEVICE_ID	1
#define SPI_CS		1
#endif

#define SPI_MAX_SPEED	1000000
#define SPI_OPS		&max_spi_ops
#define SPI_EXTRA	&max_spi_extra

#define GPIO_RSTN_PORT_NUM	0
#define GPIO_RSTN_PIN_NUM	27
#define GPIO_OPS	&max_gpio_ops
#define GPIO_EXTRA 	&max_gpio_extra

extern struct max_uart_init_param max_uart_extra;
extern struct max_spi_init_param max_spi_extra;
extern struct max_gpio_init_param max_gpio_extra;

#endif /* __PARAMETERS_H__ */
