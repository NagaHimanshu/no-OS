/***************************************************************************//**
 *   @file   iio_adf4030.h
 *   @brief  Implementation of IIO ADF4030 Driver.
 *   @author Sirac Kucukarabacioglu (sirac.kucukarabacioglu@analog.com)
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
#ifndef IIO_ADF4030_H
#define IIO_ADF4030_H

#include "iio.h"

struct adf4030_iio_dev {
	struct adf4030_dev *adf4030_dev;
	struct iio_device *iio_dev;
};

struct adf4030_iio_dev_init_param {
	struct adf4030_init_param *adf4030_dev_init;
};

enum adf4030_iio_ch_attr_id {
	ADF4030_IIO_CH_ATTR_DIRECTION,
	ADF4030_IIO_CH_ATTR_DELAY,
	ADF4030_IIO_CH_ATTR_ODIVB_EN,
	ADF4030_IIO_CH_ATTR_TERMINATION,
	ADF4030_IIO_CH_ATTR_PRBS,
	ADF4030_IIO_CH_ATTR_INVERT,
	ADF4030_IIO_CH_ATTR_VOLTAGE,
};

enum adf4030_iio_dev_attr_id {
	ADF4030_IIO_DEV_ATTR_DEFAULT_REGS,
	ADF4030_IIO_DEV_ATTR_CHIP_ADDR,
	ADF4030_IIO_DEV_ATTR_REF_FREQ,
	ADF4030_IIO_DEV_ATTR_VCO_FREQ,
	ADF4030_IIO_DEV_ATTR_BSYNCA_FREQ,
	ADF4030_IIO_DEV_ATTR_BSYNCB_FREQ,
	ADF4030_IIO_DEV_ATTR_TDC_SOURCE_CH,
	ADF4030_IIO_DEV_ATTR_TDC_MEASUREMENT,
	ADF4030_IIO_DEV_ATTR_ALIGNMENT_ITER,
	ADF4030_IIO_DEV_ATTR_ALIGNMENT_THRESHOLD,
	ADF4030_IIO_DEV_ATTR_SINGLE_CH_ALINGMENT,
	ADF4030_IIO_DEV_ATTR_SERIAL_CH_ALINGMENT,
	ADF4030_IIO_DEV_ATTR_BACKGROUND_SERIAL_ALINGMENT,
	ADF4030_IIO_DEV_ATTR_TEMP,
};

int adf4030_iio_init(struct adf4030_iio_dev **iio_dev,
		     struct adf4030_iio_dev_init_param *init_param);

int adf4030_iio_remove(struct adf4030_iio_dev *desc);

#endif /* IIO_ADF4030_H */
