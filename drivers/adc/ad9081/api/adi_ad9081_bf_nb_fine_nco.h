/*!
 * @brief     SPI Register Definition Header File, automatically generated file at 1/20/2020 6:24:26 AM.
 *
 * @copyright copyright(c) 2018 - Analog Devices Inc.All Rights Reserved.
 *            This software is proprietary to Analog Devices, Inc. and its
 *            licensor. By using this software you agree to the terms of the
 *            associated analog devices software license agreement.
 */

/*!
 * @addtogroup AD9081_BF
 * @{
 */
#ifndef __ADI_AD9081_BF_NB_FINE_NCO_H__
#define __ADI_AD9081_BF_NB_FINE_NCO_H__

/*============= I N C L U D E S ============*/
#include "adi_ad9081_config.h"

/*============= D E F I N E S ==============*/
#define REG_FINE_DDC_SYNC_CTRL_ADDR 0x00000A80
#define BF_FINE_DDC_SYNC_EN_INFO 0x00000100
#define BF_FINE_DDC_SYNC_EN(val) (val & 0x00000001)
#define BF_FINE_DDC_SYNC_EN_GET(val) (val & 0x00000001)
#define BF_FINE_DDC_SYNC_NEXT_INFO 0x00000101
#define BF_FINE_DDC_SYNC_NEXT(val) ((val & 0x00000001) << 0x00000001)
#define BF_FINE_DDC_SYNC_NEXT_GET(val) ((val >> 0x00000001) & 0x00000001)
#define BF_FINE_DDC_SOFT_RESET_INFO 0x00000104
#define BF_FINE_DDC_SOFT_RESET(val) ((val & 0x00000001) << 0x00000004)
#define BF_FINE_DDC_SOFT_RESET_GET(val) ((val >> 0x00000004) & 0x00000001)
#define BF_FINE_DDC_TRIG_NCO_RESET_EN_INFO 0x00000107
#define BF_FINE_DDC_TRIG_NCO_RESET_EN(val) ((val & 0x00000001) << 0x00000007)
#define BF_FINE_DDC_TRIG_NCO_RESET_EN_GET(val) \
	((val >> 0x00000007) & 0x00000001)

#define REG_FINE_DDC_SYNC_STATUS_ADDR 0x00000A81
#define BF_FINE_DDC_SYNC_EN_CLEAR_INFO 0x00000100
#define BF_FINE_DDC_SYNC_EN_CLEAR(val) (val & 0x00000001)
#define BF_FINE_DDC_SYNC_EN_CLEAR_GET(val) (val & 0x00000001)

#define REG_FINE_DDC_TRIG_CTRL_ADDR 0x00000A82
#define BF_FINE_DDC_TRIG_HOP_EN_INFO 0x00000100
#define BF_FINE_DDC_TRIG_HOP_EN(val) (val & 0x00000001)
#define BF_FINE_DDC_TRIG_HOP_EN_GET(val) (val & 0x00000001)

#define REG_FINE_DDC_NCO_CTRL_ADDR 0x00000A83
#define BF_FINE_DDC0_NCO_REGMAP_CHAN_SEL_INFO 0x00000400
#define BF_FINE_DDC0_NCO_REGMAP_CHAN_SEL(val) (val & 0x0000000F)
#define BF_FINE_DDC0_NCO_REGMAP_CHAN_SEL_GET(val) (val & 0x0000000F)
#define BF_FINE_DDC0_NCO_CHAN_SEL_MODE_INFO 0x00000404
#define BF_FINE_DDC0_NCO_CHAN_SEL_MODE(val) ((val & 0x0000000F) << 0x00000004)
#define BF_FINE_DDC0_NCO_CHAN_SEL_MODE_GET(val) \
	((val >> 0x00000004) & 0x0000000F)

#define REG_FINE_DDC_PROFILE_CTRL_ADDR 0x00000A84
#define BF_FINE_DDC0_PROFILE_UPDATE_INDEX_INFO 0x00000400
#define BF_FINE_DDC0_PROFILE_UPDATE_INDEX(val) (val & 0x0000000F)
#define BF_FINE_DDC0_PROFILE_UPDATE_INDEX_GET(val) (val & 0x0000000F)
#define BF_FINE_DDC0_GPIO_CHIP_TRANSFER_MODE_INFO 0x00000106
#define BF_FINE_DDC0_GPIO_CHIP_TRANSFER_MODE(val) \
	((val & 0x00000001) << 0x00000006)
#define BF_FINE_DDC0_GPIO_CHIP_TRANSFER_MODE_GET(val) \
	((val >> 0x00000006) & 0x00000001)
#define BF_FINE_DDC0_PROFILE_UPDATE_MODE_INFO 0x00000107
#define BF_FINE_DDC0_PROFILE_UPDATE_MODE(val) ((val & 0x00000001) << 0x00000007)
#define BF_FINE_DDC0_PROFILE_UPDATE_MODE_GET(val) \
	((val >> 0x00000007) & 0x00000001)

#define REG_FINE_DDC_PHASE_INC0_ADDR 0x00000A85
#define BF_FINE_DDC0_PHASE_INC0_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC0(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC0_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC1_ADDR 0x00000A86
#define BF_FINE_DDC0_PHASE_INC1_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC1(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC1_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC2_ADDR 0x00000A87
#define BF_FINE_DDC0_PHASE_INC2_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC2(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC2_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC3_ADDR 0x00000A88
#define BF_FINE_DDC0_PHASE_INC3_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC3(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC3_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC4_ADDR 0x00000A89
#define BF_FINE_DDC0_PHASE_INC4_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC4(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC4_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC5_ADDR 0x00000A8A
#define BF_FINE_DDC0_PHASE_INC5_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC5(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC5_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_OFFSET0_ADDR 0x00000A8B
#define BF_FINE_DDC0_PHASE_OFFSET0_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_OFFSET0(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_OFFSET0_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_OFFSET1_ADDR 0x00000A8C
#define BF_FINE_DDC0_PHASE_OFFSET1_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_OFFSET1(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_OFFSET1_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_OFFSET2_ADDR 0x00000A8D
#define BF_FINE_DDC0_PHASE_OFFSET2_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_OFFSET2(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_OFFSET2_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_OFFSET3_ADDR 0x00000A8E
#define BF_FINE_DDC0_PHASE_OFFSET3_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_OFFSET3(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_OFFSET3_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_OFFSET4_ADDR 0x00000A8F
#define BF_FINE_DDC0_PHASE_OFFSET4_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_OFFSET4(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_OFFSET4_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_OFFSET5_ADDR 0x00000A90
#define BF_FINE_DDC0_PHASE_OFFSET5_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_OFFSET5(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_OFFSET5_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_A0_ADDR 0x00000A91
#define BF_FINE_DDC0_PHASE_INC_FRAC_A0_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_A0(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_A0_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_A1_ADDR 0x00000A92
#define BF_FINE_DDC0_PHASE_INC_FRAC_A1_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_A1(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_A1_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_A2_ADDR 0x00000A93
#define BF_FINE_DDC0_PHASE_INC_FRAC_A2_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_A2(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_A2_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_A3_ADDR 0x00000A94
#define BF_FINE_DDC0_PHASE_INC_FRAC_A3_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_A3(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_A3_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_A4_ADDR 0x00000A95
#define BF_FINE_DDC0_PHASE_INC_FRAC_A4_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_A4(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_A4_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_A5_ADDR 0x00000A96
#define BF_FINE_DDC0_PHASE_INC_FRAC_A5_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_A5(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_A5_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_B0_ADDR 0x00000A97
#define BF_FINE_DDC0_PHASE_INC_FRAC_B0_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_B0(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_B0_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_B1_ADDR 0x00000A98
#define BF_FINE_DDC0_PHASE_INC_FRAC_B1_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_B1(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_B1_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_B2_ADDR 0x00000A99
#define BF_FINE_DDC0_PHASE_INC_FRAC_B2_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_B2(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_B2_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_B3_ADDR 0x00000A9A
#define BF_FINE_DDC0_PHASE_INC_FRAC_B3_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_B3(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_B3_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_B4_ADDR 0x00000A9B
#define BF_FINE_DDC0_PHASE_INC_FRAC_B4_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_B4(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_B4_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PHASE_INC_FRAC_B5_ADDR 0x00000A9C
#define BF_FINE_DDC0_PHASE_INC_FRAC_B5_INFO 0x00000800
#define BF_FINE_DDC0_PHASE_INC_FRAC_B5(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PHASE_INC_FRAC_B5_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_TRANSFER_STATUS_ADDR 0x00000A9D
#define BF_FINE_DDC0_CHIP_TRANSFER_STATUS_INFO 0x00000100
#define BF_FINE_DDC0_CHIP_TRANSFER_STATUS(val) (val & 0x00000001)
#define BF_FINE_DDC0_CHIP_TRANSFER_STATUS_GET(val) (val & 0x00000001)

#define REG_FINE_DDC_DITHER_ADDR 0x00000A9E
#define BF_FINE_DDC0_AMP_DITHER_EN_INFO 0x00000100
#define BF_FINE_DDC0_AMP_DITHER_EN(val) (val & 0x00000001)
#define BF_FINE_DDC0_AMP_DITHER_EN_GET(val) (val & 0x00000001)
#define BF_FINE_DDC0_PHASE_DITHER_EN_INFO 0x00000101
#define BF_FINE_DDC0_PHASE_DITHER_EN(val) ((val & 0x00000001) << 0x00000001)
#define BF_FINE_DDC0_PHASE_DITHER_EN_GET(val) ((val >> 0x00000001) & 0x00000001)

#define REG_FINE_DDC_TRANSFER_CTRL_ADDR 0x00000A9F
#define BF_FINE_DDC0_CHIP_TRANSFER_INFO 0x00000100
#define BF_FINE_DDC0_CHIP_TRANSFER(val) (val & 0x00000001)
#define BF_FINE_DDC0_CHIP_TRANSFER_GET(val) (val & 0x00000001)

#define REG_FINE_DDC_PSW_0_ADDR 0x00000AA0
#define BF_FINE_DDC0_PSW0_INFO 0x00000800
#define BF_FINE_DDC0_PSW0(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PSW0_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PSW_1_ADDR 0x00000AA1
#define BF_FINE_DDC0_PSW1_INFO 0x00000800
#define BF_FINE_DDC0_PSW1(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PSW1_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PSW_2_ADDR 0x00000AA2
#define BF_FINE_DDC0_PSW2_INFO 0x00000800
#define BF_FINE_DDC0_PSW2(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PSW2_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PSW_3_ADDR 0x00000AA3
#define BF_FINE_DDC0_PSW3_INFO 0x00000800
#define BF_FINE_DDC0_PSW3(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PSW3_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PSW_4_ADDR 0x00000AA4
#define BF_FINE_DDC0_PSW4_INFO 0x00000800
#define BF_FINE_DDC0_PSW4(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PSW4_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_PSW_5_ADDR 0x00000AA5
#define BF_FINE_DDC0_PSW5_INFO 0x00000800
#define BF_FINE_DDC0_PSW5(val) (val & 0x000000FF)
#define BF_FINE_DDC0_PSW5_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_INC0_ADDR 0x00000AA6
#define BF_FINE_DDC0_ACTIVE_PHASE_INC0_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_INC0(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_INC0_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_INC1_ADDR 0x00000AA7
#define BF_FINE_DDC0_ACTIVE_PHASE_INC1_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_INC1(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_INC1_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_INC2_ADDR 0x00000AA8
#define BF_FINE_DDC0_ACTIVE_PHASE_INC2_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_INC2(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_INC2_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_INC3_ADDR 0x00000AA9
#define BF_FINE_DDC0_ACTIVE_PHASE_INC3_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_INC3(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_INC3_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_INC4_ADDR 0x00000AAA
#define BF_FINE_DDC0_ACTIVE_PHASE_INC4_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_INC4(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_INC4_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_INC5_ADDR 0x00000AAB
#define BF_FINE_DDC0_ACTIVE_PHASE_INC5_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_INC5(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_INC5_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_OFFSET0_ADDR 0x00000AAC
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET0_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET0(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET0_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_OFFSET1_ADDR 0x00000AAD
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET1_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET1(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET1_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_OFFSET2_ADDR 0x00000AAE
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET2_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET2(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET2_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_OFFSET3_ADDR 0x00000AAF
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET3_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET3(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET3_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_OFFSET4_ADDR 0x00000AB0
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET4_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET4(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET4_GET(val) (val & 0x000000FF)

#define REG_FINE_DDC_ACTIVE_PHASE_OFFSET5_ADDR 0x00000AB1
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET5_INFO 0x00000800
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET5(val) (val & 0x000000FF)
#define BF_FINE_DDC0_ACTIVE_PHASE_OFFSET5_GET(val) (val & 0x000000FF)

#define REG_FINE_TIMESTAMP_COUNTER_REG0_ADDR 0x00000AB2
#define BF_FINE_TIMESTAMP_INFO 0x00003000

#define REG_FINE_TIMESTAMP_COUNTER_REG1_ADDR 0x00000AB3

#define REG_FINE_TIMESTAMP_COUNTER_REG2_ADDR 0x00000AB4

#define REG_FINE_TIMESTAMP_COUNTER_REG3_ADDR 0x00000AB5

#define REG_FINE_TIMESTAMP_COUNTER_REG4_ADDR 0x00000AB6

#define REG_FINE_TIMESTAMP_COUNTER_REG5_ADDR 0x00000AB7

#define REG_FINE_TIMESTAMP_READ_CTRL_ADDR 0x00000AB8
#define BF_FINE_TIMESTAMP_READ_ENABLE_INFO 0x00000100
#define BF_FINE_TIMESTAMP_READ_ENABLE(val) (val & 0x00000001)
#define BF_FINE_TIMESTAMP_READ_ENABLE_GET(val) (val & 0x00000001)

#endif /* __ADI_AD9081_BF_NB_FINE_NCO_H__ */
/*! @} */