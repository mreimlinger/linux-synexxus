/*
 * Driver for sunxi SD/MMC host controllers
 * (C) Copyright 2007-2011 Reuuimlla Technology Co., Ltd.
 * (C) Copyright 2007-2011 Aaron Maoye <leafy.myeh@xxxxxxxxxxxxxxxxx>
 * (C) Copyright 2013-2014 O2S GmbH <www.o2s.ch>
 * (C) Copyright 2013-2014 David Lanzend�r <david.lanzendoerfer@xxxxxx>
 * (C) Copyright 2013-2014 Hans de Goede <hdegoede@xxxxxxxxxx>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __SUNXI_MMC_H__
#define __SUNXI_MMC_H__

/* register offset definitions */
#define SDXC_REG_GCTRL	(0x00) /* SMC Global Control Register */
#define SDXC_REG_CLKCR	(0x04) /* SMC Clock Control Register */
#define SDXC_REG_TMOUT	(0x08) /* SMC Time Out Register */
#define SDXC_REG_WIDTH	(0x0C) /* SMC Bus Width Register */
#define SDXC_REG_BLKSZ	(0x10) /* SMC Block Size Register */
#define SDXC_REG_BCNTR	(0x14) /* SMC Byte Count Register */
#define SDXC_REG_CMDR	(0x18) /* SMC Command Register */
#define SDXC_REG_CARG	(0x1C) /* SMC Argument Register */
#define SDXC_REG_RESP0	(0x20) /* SMC Response Register 0 */
#define SDXC_REG_RESP1	(0x24) /* SMC Response Register 1 */
#define SDXC_REG_RESP2	(0x28) /* SMC Response Register 2 */
#define SDXC_REG_RESP3	(0x2C) /* SMC Response Register 3 */
#define SDXC_REG_IMASK	(0x30) /* SMC Interrupt Mask Register */
#define SDXC_REG_MISTA	(0x34) /* SMC Masked Interrupt Status Register */
#define SDXC_REG_RINTR	(0x38) /* SMC Raw Interrupt Status Register */
#define SDXC_REG_STAS	(0x3C) /* SMC Status Register */
#define SDXC_REG_FTRGL	(0x40) /* SMC FIFO Threshold Watermark Registe */
#define SDXC_REG_FUNS	(0x44) /* SMC Function Select Register */
#define SDXC_REG_CBCR	(0x48) /* SMC CIU Byte Count Register */
#define SDXC_REG_BBCR	(0x4C) /* SMC BIU Byte Count Register */
#define SDXC_REG_DBGC	(0x50) /* SMC Debug Enable Register */
#define SDXC_REG_HWRST	(0x78) /* SMC Card Hardware Reset for Register */
#define SDXC_REG_DMAC	(0x80) /* SMC IDMAC Control Register */
#define SDXC_REG_DLBA	(0x84) /* SMC IDMAC Descriptor List Base Addre */
#define SDXC_REG_IDST	(0x88) /* SMC IDMAC Status Register */
#define SDXC_REG_IDIE	(0x8C) /* SMC IDMAC Interrupt Enable Register */
#define SDXC_REG_CHDA	(0x90)
#define SDXC_REG_CBDA	(0x94)

#define mci_readl(host, reg) \
	readl((host)->reg_base + SDXC_##reg)
#define mci_writel(host, reg, value) \
	writel((value), (host)->reg_base + SDXC_##reg)

/* global control register bits */
#define SDXC_SOFT_RESET		BIT(0)
#define SDXC_FIFO_RESET		BIT(1)
#define SDXC_DMA_RESET		BIT(2)
#define SDXC_HARDWARE_RESET		(SDXC_SOFT_RESET|SDXC_FIFO_RESET|SDXC_DMA_RESET)
#define SDXC_INTERRUPT_ENABLE_BIT		BIT(4)
#define SDXC_DMA_ENABLE_BIT		BIT(5)
#define SDXC_DEBOUNCE_ENABLE_BIT	BIT(8)
#define SDXC_POSEDGE_LATCH_DATA	BIT(9)
#define SDXC_DDR_MODE		BIT(10)
#define SDXC_MEMORY_ACCESS_DONE	BIT(29)
#define SDXC_ACCESS_DONE_DIRECT	BIT(30)
#define SDXC_ACCESS_BY_AHB	BIT(31)
#define SDXC_ACCESS_BY_DMA	(0U << 31)
/* clock control bits */
#define SDXC_CARD_CLOCK_ON		BIT(16)
#define SDXC_LOW_POWER_ON		BIT(17)
/* bus width */
#define SDXC_WIDTH1		(0)
#define SDXC_WIDTH4		(1)
#define SDXC_WIDTH8		(2)
/* smc command bits */
#define SDXC_RESP_EXPIRE		BIT(6)
#define SDXC_LONG_RESPONSE		BIT(7)
#define SDXC_CHECK_RESPONSE_CRC	BIT(8)
#define SDXC_DATA_EXPIRE		BIT(9)
#define SDXC_WRITE		BIT(10)
#define SDXC_SEQUENCE_MODE		BIT(11)
#define SDXC_SEND_AUTO_STOP	BIT(12)
#define SDXC_WAIT_PRE_OVER	BIT(13)
#define SDXC_STOP_ABORT_CMD	BIT(14)
#define SDXC_SEND_INIT_SEQUENCE	BIT(15)
#define SDXC_UPCLK_ONLY		BIT(21)
#define SDXC_READ_CEATA_DEV		BIT(22)
#define SDXC_CCS_EXPIRE		BIT(23)
#define SDXC_ENABLE_BIT_BOOT		BIT(24)
#define SDXC_ALT_BOOT_OPTIONS		BIT(25)
#define SDXC_BOOT_ACK_EXPIRE		BIT(26)
#define SDXC_BOOT_ABORT		BIT(27)
#define SDXC_VOLTAGE_SWITCH	        BIT(28)
#define SDXC_USE_HOLD_REGISTER	        BIT(29)
#define SDXC_START	        BIT(31)
/* interrupt bits */
#define SDXC_RESP_ERROR		BIT(1)
#define SDXC_COMMAND_DONE		BIT(2)
#define SDXC_DATA_OVER		BIT(3)
#define SDXC_TX_DATA_REQUEST		BIT(4)
#define SDXC_RX_DATA_REQUEST		BIT(5)
#define SDXC_RESP_CRC_ERROR		BIT(6)
#define SDXC_DATA_CRC_ERROR		BIT(7)
#define SDXC_RESP_TIMEOUT	BIT(8)
#define SDXC_DATA_TIMEOUT	BIT(9)
#define SDXC_VOLTAGE_CHANGE_DONE		BIT(10)
#define SDXC_FIFO_RUN_ERROR		BIT(11)
#define SDXC_HARD_WARE_LOCKED	BIT(12)
#define SDXC_START_BIT_ERROR	BIT(13)
#define SDXC_AUTO_COMMAND_DONE	BIT(14)
#define SDXC_END_BIT_ERROR		BIT(15)
#define SDXC_SDIO_INTERRUPT		BIT(16)
#define SDXC_CARD_INSERT		BIT(30)
#define SDXC_CARD_REMOVE		BIT(31)
#define SDXC_INTERRUPT_ERROR_BIT		(SDXC_RESP_ERROR | SDXC_RESP_CRC_ERROR | \
				 SDXC_DATA_CRC_ERROR | SDXC_RESP_TIMEOUT | \
				 SDXC_DATA_TIMEOUT | SDXC_FIFO_RUN_ERROR | \
				 SDXC_HARD_WARE_LOCKED | SDXC_START_BIT_ERROR | \
				 SDXC_END_BIT_ERROR) /* 0xbbc2 */
#define SDXC_INTERRUPT_DONE_BIT		(SDXC_AUTO_COMMAND_DONE | SDXC_DATA_OVER | \
				 SDXC_COMMAND_DONE | SDXC_VOLTAGE_CHANGE_DONE)
/* status */
#define SDXC_RXWL_FLAG		BIT(0)
#define SDXC_TXWL_FLAG		BIT(1)
#define SDXC_FIFO_EMPTY		BIT(2)
#define SDXC_FIFO_FULL		BIT(3)
#define SDXC_CARD_PRESENT	BIT(8)
#define SDXC_CARD_DATA_BUSY	BIT(9)
#define SDXC_DATA_FSM_BUSY	BIT(10)
#define SDXC_DMA_REQUEST		BIT(31)
#define SDXC_FIFO_SIZE		(16)
/* Function select */
#define SDXC_CEATA_ON		(0xceaaU << 16)
#define SDXC_SEND_IRQ_RESPONSE		BIT(0)
#define SDXC_SDIO_READ_WAIT		BIT(1)
#define SDXC_ABORT_READ_DATA		BIT(2)
#define SDXC_SEND_CCSD		BIT(8)
#define SDXC_SEND_AUTO_STOPCCSD	BIT(9)
#define SDXC_CEATA_DEV_INTERRUPT_ENABLE_BIT	BIT(10)
/* IDMA controller bus mod bit field */
#define SDXC_IDMAC_SOFT_RESET	BIT(0)
#define SDXC_IDMAC_FIX_BURST	BIT(1)
#define SDXC_IDMAC_IDMA_ON	BIT(7)
#define SDXC_IDMAC_REFETCH_DES	BIT(31)
/* IDMA status bit field */
#define SDXC_IDMAC_TRANSMIT_INTERRUPT	BIT(0)
#define SDXC_IDMAC_RECEIVE_INTERRUPT	BIT(1)
#define SDXC_IDMAC_FATAL_BUS_ERROR	BIT(2)
#define SDXC_IDMAC_DESTINATION_INVALID	BIT(4)
#define SDXC_IDMAC_CARD_ERROR_SUM	BIT(5)
#define SDXC_IDMAC_NORMAL_INTERRUPT_SUM	BIT(8)
#define SDXC_IDMAC_ABNORMAL_INTERRUPT_SUM BIT(9)
#define SDXC_IDMAC_HOST_ABORT_INTERRUPT_TX	BIT(10)
#define SDXC_IDMAC_HOST_ABORT_INTERRUPT_RX	BIT(10)
#define SDXC_IDMAC_IDLE		(0U << 13)
#define SDXC_IDMAC_SUSPEND	(1U << 13)
#define SDXC_IDMAC_DESC_READ	(2U << 13)
#define SDXC_IDMAC_DESC_CHECK	(3U << 13)
#define SDXC_IDMAC_READ_REQUEST_WAIT	(4U << 13)
#define SDXC_IDMAC_WRITE_REQUEST_WAIT	(5U << 13)
#define SDXC_IDMAC_READ		(6U << 13)
#define SDXC_IDMAC_WRITE		(7U << 13)
#define SDXC_IDMAC_DESC_CLOSE	(8U << 13)

/*
* If the idma-des-size-bits of property is ie 13, bufsize bits are:
*  Bits  0-12: buf1 size
*  Bits 13-25: buf2 size
*  Bits 26-31: not used
* Since we only ever set buf1 size, we can simply store it directly.
*/
#define SDXC_IDMAC_DES0_DIC	BIT(1)  /* disable interrupt on completion */
#define SDXC_IDMAC_DES0_LD	BIT(2)  /* last descriptor */
#define SDXC_IDMAC_DES0_FD	BIT(3)  /* first descriptor */
#define SDXC_IDMAC_DES0_CH	BIT(4)  /* chain mode */
#define SDXC_IDMAC_DES0_ER	BIT(5)  /* end of ring */
#define SDXC_IDMAC_DES0_CES	BIT(30) /* card error summary */
#define SDXC_IDMAC_DES0_OWN	BIT(31) /* 1-idma owns it, 0-host owns it */

struct sunxi_idma_des {
	u32	config;
	u32	buf_size;
	u32	buf_addr_ptr1;
	u32	buf_addr_ptr2;
};

struct sunxi_mmc_host {
	struct mmc_host *mmc;
	struct regulator *vmmc;

	/* IO mapping base */
	void __iomem *reg_base;

	spinlock_t lock;
	struct tasklet_struct tasklet;

	/* clock management */
	struct clk *clk_ahb;
	struct clk *clk_mod;

	/* ios information */
	u32		clk_mod_rate;
	u32		bus_width;
	u32		idma_des_size_bits;
	u32		ddr;
	u32		voltage_switching;

	/* irq */
	int		irq;
	u32		int_sum;
	u32		sdio_imask;

	/* flags */
	u32		power_on:1;
	u32		io_flag:1;
	u32		wait_dma:1;

	dma_addr_t	sg_dma;
	void		*sg_cpu;

	struct mmc_request *mrq;
	u32		ferror;
};

#define MMC_CLK_400K            0
#define MMC_CLK_25M             1
#define MMC_CLK_50M             2
#define MMC_CLK_50MDDR          3
#define MMC_CLK_50MDDR_8BIT     4
#define MMC_CLK_100M            5
#define MMC_CLK_200M            6
#define MMC_CLK_MOD_NUM         7

struct sunxi_mmc_clk_dly {
	u32 mode;
	u32 oclk_dly;
	u32 sclk_dly;
};

#endif
