/****************************************************************************
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    Orion Memory Map - View from PCIe
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
****************************************************************************/

#ifndef _ORION_DEFS_H_
#define _ORION_DEFS_H_

/*
 * These defines have not been autogenerated
 * Only values different from Odin will be included here
 */

#define DEVICE_ID_ORION                          0x1020

/* Odin system register banks */
#define SRS_REG_BANK_ODN_CLK_BLK                 0x02000

/*
 * Orion CLK regs - the srs_clk_blk module defs are not auto generated
 */
#define SRS_PDP_P_CLK_OUT_DIVIDER_REG1           0x620
#define SRS_PDP_PCLK_ODIV1_LO_TIME_MASK          0x0000003FU
#define SRS_PDP_PCLK_ODIV1_LO_TIME_SHIFT         0
#define SRS_PDP_PCLK_ODIV1_HI_TIME_MASK          0x00000FC0U
#define SRS_PDP_PCLK_ODIV1_HI_TIME_SHIFT         6

#define SRS_PDP_P_CLK_OUT_DIVIDER_REG2           0x624
#define SRS_PDP_PCLK_ODIV2_NOCOUNT_MASK          0x00000040U
#define SRS_PDP_PCLK_ODIV2_NOCOUNT_SHIFT         6
#define SRS_PDP_PCLK_ODIV2_EDGE_MASK             0x00000080U
#define SRS_PDP_PCLK_ODIV2_EDGE_SHIFT            7
#define SRS_PDP_PCLK_ODIV2_FRAC_MASK             0x00007C00U
#define SRS_PDP_PCLK_ODIV2_FRAC_SHIFT            10

#define SRS_PDP_P_CLK_OUT_DIVIDER_REG3           0x61C

#define SRS_PDP_M_CLK_OUT_DIVIDER_REG1           0x628
#define SRS_PDP_MCLK_ODIV1_LO_TIME_MASK          0x0000003FU
#define SRS_PDP_MCLK_ODIV1_LO_TIME_SHIFT         0
#define SRS_PDP_MCLK_ODIV1_HI_TIME_MASK          0x00000FC0U
#define SRS_PDP_MCLK_ODIV1_HI_TIME_SHIFT         6

#define SRS_PDP_M_CLK_OUT_DIVIDER_REG2           0x62C
#define SRS_PDP_MCLK_ODIV2_NOCOUNT_MASK          0x00000040U
#define SRS_PDP_MCLK_ODIV2_NOCOUNT_SHIFT         6
#define SRS_PDP_MCLK_ODIV2_EDGE_MASK             0x00000080U
#define SRS_PDP_MCLK_ODIV2_EDGE_SHIFT            7

#define SRS_PDP_P_CLK_MULTIPLIER_REG1            0x650
#define SRS_PDP_PCLK_MUL1_LO_TIME_MASK           0x0000003FU
#define SRS_PDP_PCLK_MUL1_LO_TIME_SHIFT          0
#define SRS_PDP_PCLK_MUL1_HI_TIME_MASK           0x00000FC0U
#define SRS_PDP_PCLK_MUL1_HI_TIME_SHIFT          6

#define SRS_PDP_P_CLK_MULTIPLIER_REG2            0x654
#define SRS_PDP_PCLK_MUL2_NOCOUNT_MASK           0x00000040U
#define SRS_PDP_PCLK_MUL2_NOCOUNT_SHIFT          6
#define SRS_PDP_PCLK_MUL2_EDGE_MASK              0x00000080U
#define SRS_PDP_PCLK_MUL2_EDGE_SHIFT             7
#define SRS_PDP_PCLK_MUL2_FRAC_MASK              0x00007C00U
#define SRS_PDP_PCLK_MUL2_FRAC_SHIFT             10

#define SRS_PDP_P_CLK_MULTIPLIER_REG3            0x64C

#define SRS_PDP_P_CLK_IN_DIVIDER_REG             0x658
#define SRS_PDP_PCLK_IDIV_LO_TIME_MASK           0x0000003FU
#define SRS_PDP_PCLK_IDIV_LO_TIME_SHIFT          0
#define SRS_PDP_PCLK_IDIV_HI_TIME_MASK           0x00000FC0U
#define SRS_PDP_PCLK_IDIV_HI_TIME_SHIFT          6
#define SRS_PDP_PCLK_IDIV_NOCOUNT_MASK           0x00001000U
#define SRS_PDP_PCLK_IDIV_NOCOUNT_SHIFT          12
#define SRS_PDP_PCLK_IDIV_EDGE_MASK              0x00002000U
#define SRS_PDP_PCLK_IDIV_EDGE_SHIFT             13

/*
 * DUT core clock input divider, DUT reference clock input divider
 */
#define SRS_DUT_CORE_CLK_OUT_DIVIDER1                0x0020
#define SRS_DUT_CORE_CLK_OUT_DIVIDER1_HI_TIME_MASK   0x00000FC0U
#define SRS_DUT_CORE_CLK_OUT_DIVIDER1_HI_TIME_SHIFT  6
#define SRS_DUT_CORE_CLK_OUT_DIVIDER1_LO_TIME_MASK   0x0000003FU
#define SRS_DUT_CORE_CLK_OUT_DIVIDER1_LO_TIME_SHIFT  0

#define SRS_DUT_CORE_CLK_OUT_DIVIDER2                0x0024
#define SRS_DUT_CORE_CLK_OUT_DIVIDER2_EDGE_MASK      0x00000080U
#define SRS_DUT_CORE_CLK_OUT_DIVIDER2_EDGE_SHIFT     7
#define SRS_DUT_CORE_CLK_OUT_DIVIDER2_NOCOUNT_MASK   0x00000040U
#define SRS_DUT_CORE_CLK_OUT_DIVIDER2_NOCOUNT_SHIFT  6

#define SRS_DUT_REF_CLK_OUT_DIVIDER1                 0x0028
#define SRS_DUT_REF_CLK_OUT_DIVIDER1_HI_TIME_MASK    0x00000FC0U
#define SRS_DUT_REF_CLK_OUT_DIVIDER1_HI_TIME_SHIFT   6
#define SRS_DUT_REF_CLK_OUT_DIVIDER1_LO_TIME_MASK    0x0000003FU
#define SRS_DUT_REF_CLK_OUT_DIVIDER1_LO_TIME_SHIFT   0

#define SRS_DUT_REF_CLK_OUT_DIVIDER2                 0x002C
#define SRS_DUT_REF_CLK_OUT_DIVIDER2_EDGE_MASK       0x00000080U
#define SRS_DUT_REF_CLK_OUT_DIVIDER2_EDGE_SHIFT      7
#define SRS_DUT_REF_CLK_OUT_DIVIDER2_NOCOUNT_MASK    0x00000040U
#define SRS_DUT_REF_CLK_OUT_DIVIDER2_NOCOUNT_SHIFT   6

/*
 * DUT interface reference clock input divider
 */

#define SRS_DUT_MEM_CLK_OUT_DIVIDER1                0x0228
#define SRS_DUT_MEM_CLK_OUT_DIVIDER1_HI_TIME_MASK   0x00000FC0U
#define SRS_DUT_MEM_CLK_OUT_DIVIDER1_HI_TIME_SHIFT  6
#define SRS_DUT_MEM_CLK_OUT_DIVIDER1_LO_TIME_MASK   0x0000003FU
#define SRS_DUT_MEM_CLK_OUT_DIVIDER1_LO_TIME_SHIFT  0

#define SRS_DUT_MEM_CLK_OUT_DIVIDER2                0x022C
#define SRS_DUT_MEM_CLK_OUT_DIVIDER2_EDGE_MASK      0x00000080U
#define SRS_DUT_MEM_CLK_OUT_DIVIDER2_EDGE_SHIFT     7
#define SRS_DUT_MEM_CLK_OUT_DIVIDER2_NOCOUNT_MASK   0x00000040U
#define SRS_DUT_MEM_CLK_OUT_DIVIDER2_NOCOUNT_SHIFT  6

/*
 * Min max values from Xilinx Virtex Ultrascale data sheet DS893,
 * for speed grade 1. All in Hz.
 */
#define SRS_INPUT_CLOCK_SPEED                       100000000U
#define SRS_INPUT_CLOCK_SPEED_MIN                   10000000U
#define SRS_INPUT_CLOCK_SPEED_MAX                   800000000U
#define SRS_OUTPUT_CLOCK_SPEED_MIN                  4690000U
#define SRS_OUTPUT_CLOCK_SPEED_MAX                  630000000U
#define SRS_VCO_MIN                                 600000000U
#define SRS_VCO_MAX                                 1200000000U
#define SRS_PFD_MIN                                 10000000U
#define SRS_PFD_MAX                                 450000000U

/*
 * Orion interrupt flags
 */
#define SRS_INTERRUPT_ENABLE_PDP1          (1 << SRS_INTERRUPT_ENABLE_PDP_SHIFT)
#define SRS_INTERRUPT_ENABLE_DUT           (1 << SRS_INTERRUPT_ENABLE_DUT_SHIFT)
#define SRS_INTERRUPT_STATUS_PDP1          (1 << SRS_INTERRUPT_STATUS_PDP_SHIFT)
#define SRS_INTERRUPT_STATUS_DUT           (1 << SRS_INTERRUPT_STATUS_DUT_SHIFT)
#define SRS_INTERRUPT_CLEAR_PDP1           (1 << SRS_INTERRUPT_CLR_PDP_SHIFT)
#define SRS_INTERRUPT_CLEAR_DUT            (1 << SRS_INTERRUPT_CLR_DUT_SHIFT)

#endif /* _ORION_DEFS_H_ */

/*****************************************************************************
 End of file (orion_defs.h)
*****************************************************************************/