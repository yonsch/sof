/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2023 AMD.All rights reserved.
 *
 * Author:	Basavaraj Hiregoudar <basavaraj.hiregoudar@amd.com>
 *		    SaiSurya, Ch <saisurya.chakkaveeravenkatanaga@amd.com>
 */

#ifndef _ACP_6_3_OFFSET_HEADER
#define _ACP_6_3_OFFSET_HEADER

#define PU_REGISTER_BASE        (0x9FD00000 - 0x01240000)
#define PU_SCRATCH_REG_BASE	    (0x9FF00000 - 0x01250000)

/* Registers from ACP_DMA block */
#define ACP_DMA_CNTL_0			0x1240000
#define ACP_DMA_DSCR_STRT_IDX_0		0x1240020
#define ACP_DMA_DSCR_CNT_0		0x1240040
#define ACP_DMA_PRIO_0			0x1240060
#define ACP_DMA_DESC_BASE_ADDR		0x12400E0
#define ACP_DMA_DESC_MAX_NUM_DSCR	0x12400E4
#define ACP_DMA_CH_STS			0x12400E8

/* Registers from ACP_MISC block */
#define ACP_CLKMUX_SEL			0x124102C
#define ACP_I2S_196MHZ_CLK_SEL  0x124105C
#define ACP_DSP0_INTR_CNTL		0x1241800
#define ACP_DSP0_INTR_STAT		0x1241804
#define ACP_DSP_SW_INTR_CNTL		0x1241808
#define ACP_DSP_SW_INTR_STAT		0x124180C
#define ACP_SW_INTR_TRIG		0x1241810
#define DSP_INTERRUPT_ROUTING_CTRL_0	0x1241814
#define DSP_INTERRUPT_ROUTING_CTRL_1	0x1241818
#define ACP_AXI2DAGB_SEM_0		0x1241874
#define ACP_DSP0_INTR_CNTL1		0x1241920
#define ACP_DSP0_INTR_STAT1		0x1241924
#define ACP_SRBM_CLIENT_BASE_ADDR	0x12419EC
#define ACP_SRBM_CLIENT_RDDATA		0x12419F0
#define ACP_SRBM_CYCLE_STS		0x12419F4
#define ACP_SRBM_CLIENT_CONFIG		0x12419F8

/* Registers from ACP_P1_MISC block */
#define ACP_EXTERNAL_INTR_ENB		0x1241A00

/* Registers from ACP_AUDIO_BUFFERS block */
#define ACP_AUDIO_RX_RINGBUFADDR                      0x1242000
#define ACP_AUDIO_RX_RINGBUFSIZE                      0x1242004
#define ACP_AUDIO_RX_LINKPOSITIONCNTR                 0x1242008
#define ACP_AUDIO_RX_FIFOADDR                         0x124200C
#define ACP_AUDIO_RX_FIFOSIZE                         0x1242010
#define ACP_AUDIO_RX_DMA_SIZE                         0x1242014
#define ACP_AUDIO_RX_LINEARPOSITIONCNTR_HIGH          0x1242018
#define ACP_AUDIO_RX_LINEARPOSITIONCNTR_LOW           0x124201C
#define ACP_AUDIO_RX_INTR_WATERMARK_SIZE              0x1242020
#define ACP_AUDIO_TX_RINGBUFADDR                      0x1242024
#define ACP_AUDIO_TX_RINGBUFSIZE                      0x1242028
#define ACP_AUDIO_TX_LINKPOSITIONCNTR                 0x124202C
#define ACP_AUDIO_TX_FIFOADDR                         0x1242030
#define ACP_AUDIO_TX_FIFOSIZE                         0x1242034
#define ACP_AUDIO_TX_DMA_SIZE                         0x1242038
#define ACP_AUDIO_TX_LINEARPOSITIONCNTR_HIGH          0x124203C
#define ACP_AUDIO_TX_LINEARPOSITIONCNTR_LOW           0x1242040
#define ACP_AUDIO_TX_INTR_WATERMARK_SIZE              0x1242044

#define ACP_BT_RX_RINGBUFADDR                         0x1242048
#define ACP_BT_RX_RINGBUFSIZE                         0x124204C
#define ACP_BT_RX_FIFOADDR                            0x1242054
#define ACP_BT_RX_FIFOSIZE                            0x1242058
#define ACP_BT_RX_DMA_SIZE                            0x124205C
#define ACP_BT_RX_LINEARPOSITIONCNTR_HIGH             0x1242060
#define ACP_BT_RX_LINEARPOSITIONCNTR_LOW              0x1242064
#define ACP_BT_RX_INTR_WATERMARK_SIZE                 0x1242068
#define ACP_BT_TX_RINGBUFADDR                         0x124206C
#define ACP_BT_TX_RINGBUFSIZE                         0x1242070
#define ACP_BT_TX_FIFOADDR                            0x1242078
#define ACP_BT_TX_FIFOSIZE                            0x124207C
#define ACP_BT_TX_DMA_SIZE                            0x1242080
#define ACP_BT_TX_LINEARPOSITIONCNTR_HIGH             0x1242084
#define ACP_BT_TX_LINEARPOSITIONCNTR_LOW              0x1242088
#define ACP_BT_TX_INTR_WATERMARK_SIZE                 0x124208C

#define ACP_HS_RX_RINGBUFADDR                         0x1242090
#define ACP_HS_RX_RINGBUFSIZE                         0x1242094
#define ACP_HS_RX_FIFOADDR                            0x124209C
#define ACP_HS_RX_FIFOSIZE                            0x12420A0
#define ACP_HS_RX_DMA_SIZE                            0x12420A4
#define ACP_HS_RX_LINEARPOSITIONCNTR_HIGH             0x12420A8
#define ACP_HS_RX_LINEARPOSITIONCNTR_LOW              0x12420AC
#define ACP_HS_RX_INTR_WATERMARK_SIZE                 0x12420B0
#define ACP_HS_TX_RINGBUFADDR                         0x12420B4
#define ACP_HS_TX_RINGBUFSIZE                         0x12420B8
#define ACP_HS_TX_FIFOADDR                            0x12420C0
#define ACP_HS_TX_FIFOSIZE                            0x12420C4
#define ACP_HS_TX_DMA_SIZE                            0x12420C8
#define ACP_HS_TX_LINEARPOSITIONCNTR_HIGH             0x12420CC
#define ACP_HS_TX_LINEARPOSITIONCNTR_LOW              0x12420D0
#define ACP_HS_TX_INTR_WATERMARK_SIZE                 0x12420D4

/* Registers from ACP_I2S_TDM block */
#define ACP_I2STDM_IER			0x1242400
#define ACP_I2STDM_IRER			0x1242404
#define ACP_I2STDM_RXFRMT		0x1242408
#define ACP_I2STDM_ITER			0x124240C
#define ACP_I2STDM_TXFRMT		0x1242410
#define ACP_I2STDM0_MSTRCLKGEN		0x1242414
#define ACP_I2STDM2_MSTRCLKGEN		0x124241C

/* Registers from ACP_BT_TDM block */
#define ACP_BTTDM_IER			0x1242800
#define ACP_BTTDM_IRER			0x1242804
#define ACP_BTTDM_ITER			0x124280C
#define ACP_HSTDM_IER			0x1242814
#define ACP_HSTDM_IRER			0x1242818
#define ACP_HSTDM_RXFRMT		0x124281C
#define ACP_HSTDM_ITER			0x1242820
#define ACP_HSTDM_TXFRMT		0x1242824

/* Registers from ACP_WOV block */
#define ACP_WOV_PDM_ENABLE			0x1242C04
#define ACP_WOV_PDM_DMA_ENABLE			0x1242C08
#define ACP_WOV_RX_RINGBUFADDR			0x1242C0C
#define ACP_WOV_RX_RINGBUFSIZE			0x1242C10
#define ACP_WOV_RX_INTR_WATERMARK_SIZE		0x1242C20
#define ACP_WOV_PDM_FIFO_FLUSH			0x1242C24
#define ACP_WOV_PDM_NO_OF_CHANNELS		0x1242C28
#define ACP_WOV_PDM_DECIMATION_FACTOR		0x1242C2C
#define ACP_WOV_MISC_CTRL			0x1242C5C
#define ACP_WOV_CLK_CTRL			0x1242C60

#define ACP_SW_EN                                     0x1243000
#define ACP_SW_EN_STATUS                              0x1243004
#define ACP_SW_AUDIO_TX_EN                            0x1243010
#define ACP_SW_AUDIO_TX_EN_STATUS                     0x1243014
#define ACP_SW_BT_TX_EN                               0x1243050
#define ACP_SW_BT_TX_EN_STATUS                        0x1243054
#define ACP_SW_HS_TX_EN                          0x124306C
#define ACP_SW_HS_TX_EN_STATUS                   0x1243070
#define ACP_SW_AUDIO_RX_EN                            0x1243088
#define ACP_SW_AUDIO_RX_EN_STATUS                     0x124308C
#define ACP_SW_BT_RX_EN                               0x1243128
#define ACP_SW_BT_RX_EN_STATUS                        0x124312C
#define ACP_SW_HS_RX_EN                          0x1243144
#define ACP_SW_HS_RX_EN_STATUS                   0x1243148
/* Registers from ACP_P1_AUDIO_BUFFERS block */
#define ACP_P1_I2S_RX_RINGBUFADDR		0x1243A00
#define ACP_P1_I2S_RX_RINGBUFSIZE		0x1243A04
#define ACP_P1_I2S_RX_FIFOADDR			0x1243A0C
#define ACP_P1_I2S_RX_FIFOSIZE			0x1243A10
#define ACP_P1_I2S_RX_DMA_SIZE			0x1243A14
#define ACP_P1_I2S_RX_LINEARPOSITIONCNTR_HIGH	0x1243A18
#define ACP_P1_I2S_RX_LINEARPOSITIONCNTR_LOW	0x1243A1C
#define ACP_P1_I2S_RX_INTR_WATERMARK_SIZE	0x1243A20
#define ACP_P1_I2S_TX_RINGBUFADDR		0x1243A24
#define ACP_P1_I2S_TX_RINGBUFSIZE		0x1243A28
#define ACP_P1_I2S_TX_FIFOADDR			0x1243A30
#define ACP_P1_I2S_TX_FIFOSIZE			0x1243A34
#define ACP_P1_I2S_TX_DMA_SIZE			0x1243A38
#define ACP_P1_I2S_TX_LINEARPOSITIONCNTR_HIGH	0x1243A3C
#define ACP_P1_I2S_TX_LINEARPOSITIONCNTR_LOW	0x1243A40
#define ACP_P1_I2S_TX_INTR_WATERMARK_SIZE	0x1243A44
#define ACP_P1_BT_RX_RINGBUFADDR		0x1243A48
#define ACP_P1_BT_RX_RINGBUFSIZE		0x1243A4C
#define ACP_P1_BT_RX_FIFOADDR			0x1243A54
#define ACP_P1_BT_RX_FIFOSIZE			0x1243A58
#define ACP_P1_BT_RX_DMA_SIZE			0x1243A5C
#define ACP_P1_BT_RX_LINEARPOSITIONCNTR_HIGH	0x1243A60
#define ACP_P1_BT_RX_LINEARPOSITIONCNTR_LOW	0x1243A64
#define ACP_P1_BT_RX_INTR_WATERMARK_SIZE	0x1243A68
#define ACP_P1_BT_TX_RINGBUFADDR		0x1243A6C
#define ACP_P1_BT_TX_RINGBUFSIZE		0x1243A70
#define ACP_P1_BT_TX_FIFOADDR			0x1243A78
#define ACP_P1_BT_TX_FIFOSIZE			0x1243A7C
#define ACP_P1_BT_TX_DMA_SIZE			0x1243A80
#define ACP_P1_BT_TX_LINEARPOSITIONCNTR_HIGH	0x1243A84
#define ACP_P1_BT_TX_LINEARPOSITIONCNTR_LOW	0x1243A88
#define ACP_P1_BT_TX_INTR_WATERMARK_SIZE	0x1243A8C
#define ACP_P1_HS_RX_RINGBUFADDR		0x1243A90
#define ACP_P1_HS_RX_RINGBUFSIZE		0x1243A94
#define ACP_P1_HS_RX_FIFOADDR			0x1243A9C
#define ACP_P1_HS_RX_FIFOSIZE			0x1243AA0
#define ACP_P1_HS_RX_DMA_SIZE			0x1243AA4
#define ACP_P1_HS_RX_LINEARPOSITIONCNTR_HIGH	0x1243AA8
#define ACP_P1_HS_RX_LINEARPOSITIONCNTR_LOW	0x1243AAC
#define ACP_P1_HS_RX_INTR_WATERMARK_SIZE	0x1243AB0
#define ACP_P1_HS_TX_RINGBUFADDR		0x1243AB4
#define ACP_P1_HS_TX_RINGBUFSIZE		0x1243AB8
#define ACP_P1_HS_TX_FIFOADDR			0x1243AC0
#define ACP_P1_HS_TX_FIFOSIZE			0x1243AC4
#define ACP_P1_HS_TX_DMA_SIZE			0x1243AC8
#define ACP_P1_HS_TX_LINEARPOSITIONCNTR_HIGH	0x1243ACC
#define ACP_P1_HS_TX_LINEARPOSITIONCNTR_LOW	0x1243AD0
#define ACP_P1_HS_TX_INTR_WATERMARK_SIZE	0x1243AD4

#define ACP_P1_SW_EN				0x1243C00
#define ACP_P1_SW_BT_TX_EN			0x1243C50
#define ACP_P1_SW_BT_TX_EN_STATUS	0x1243C54
#define ACP_P1_SW_BT_RX_EN			0x1243D28
#define ACP_P1_SW_BT_RX_EN_STATUS	0x1243D2C
#define MP1_SMN_C2PMSG_69	0x58A14
#define MP1_SMN_C2PMSG_85	0x58A54
#define MP1_SMN_C2PMSG_93	0x58A74

#define CLK5_ROOTREFCLKMUX_1                          0x6c0c8
#define CLK5_CLK_PLL_REFCLK_RATE_STARTUP              0x6C0D0
#define CLK5_CLK_PLL_REQ                              0x6C0DC
#define CLK5_CLK1_DFS_CNTL                            0x6C1B0
#define CLK5_CLK1_CURRENT_CNT                         0x6C348
#define CLK5_CLK0_DFS_CNTL                            0x6C1A4
#define CLK5_CLK0_CURRENT_CNT                         0x6C344
#define CLK5_CLK0_BYPASS_CNTL                         0x6C200
#define CLK5_CLK1_BYPASS_CNTL                         0x6C224
#define CLK5_CLK0_DFS_STATUS                          0x6C1AC
#define CLK5_CLK1_DFS_STATUS                          0x6C1B8
#define CLK5_SPLL_FIELD_2                             0x6C114
#define CLK5_CLK_PLL_PWR_REQ                          0x6C2C0
#define CLK5_CLK_DFSBYPASS_CONTROL                    0x6C2C8
#define CLK5_CLK_FSM_STATUS                           0x6C2D4
#define CLK5_SPLL_FUSE_1                              0x6C0F8
#define CLK5_SPLL_FUSE_2                              0x6C0FC
#define CLK5_SPLL_FIELD_7                             0x6C128
#define CLK5_SPLL_FIELD_9                             0x6C130
#define CLK5_SPLL_FIELD_6nm                           0x6C138
#define CLK5_SPLL_FIELD_4                             0x6C11C
#define CLK5_SPLL_FIELD_5nm_BUS_CTRL                  0x6c140
#define CLK5_SPLL_FIELD_5nm_BUS_WDATA                 0x6c144
#define CLK5_SPLL_FIELD_5nm_BUS_STATUS                0x6c148
#define CLK5_CLK_PLL_RESET_STOP_TIMER                 0x6C180

#endif
