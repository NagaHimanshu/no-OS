/***************************************************************************//**
 *   @file   ad5165.h
 *   @brief  Header file for the ad5165 digital potentiometer drivers
********************************************************************************
Copyright 2025(c) Analog Devices, Inc.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of Analog Devices, Inc. nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES, INC. “AS IS” AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
EVENT SHALL ANALOG DEVICES, INC. BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/
#ifndef AD5165_H_
#define AD5165_H_

#include "../common/dpot.h"
#include "no_os_spi.h"
#include "no_os_i2c.h"
#include "no_os_gpio.h"
#include "no_os_util.h"

/**
 * @struct ad5165_dpot_init_param.
 * @brief ad5165 digital potentiometer init parameters.
 */
struct ad5165_dpot_init_param {
	/* Interface type */
	enum dpot_intf_type eIntfType;
	/* SPI init parameters */
	struct no_os_spi_init_param *spi_init;
};
/**
 * @struct ad5165_dpot_dev.
 * @brief ad5165 digital potentiometer device descriptor parameters.
 */
struct ad5165_dpot_dev {
	enum dpot_intf_type intf_type;
	/* SPI descriptor */
	struct no_os_spi_desc *spi_desc;
};

/* ad5165 digital potentiometer ops */
int ad5165_dpot_init(struct dpot_init_param *init_params,
		     struct dpot_dev **desc);
int ad5165_dpot_remove(struct dpot_dev *desc);

int ad5165_dpot_chn_read(struct dpot_dev *desc,
			 enum dpot_chn_type chn, uint8_t *data);
int ad5165_dpot_chn_write(struct dpot_dev *desc,
			  enum dpot_chn_type chn, uint8_t data);

int ad5165_dpot_send_cmd(struct dpot_dev *desc,
			 struct dpot_command *cmd);
int ad5165_dpot_shutdown(struct dpot_dev *desc,	enum dpot_chn_type chn,
			 bool shutdown_enable);

#endif	// ad525x_H_
