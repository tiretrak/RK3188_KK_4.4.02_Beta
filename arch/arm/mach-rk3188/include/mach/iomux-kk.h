#ifndef __MACH_RK3188_IOMUX_H
#define __MACH_RK3188_IOMUX_H

#include <mach/gpio.h>
#include <mach/grf.h>
#include <mach/io.h>
#include <plat/iomux.h>

#define GRF_IOMUX_BASE	(RK30_GRF_BASE + 0x0060)

enum{
	/* GPIO0_A */
	/* GPIO0_B */
	/* GPIO0_C */
	GPIO0_C0 = 0x0c00, NAND_D8, 
	GPIO0_C1 = 0x0c10, NAND_D9, 
	GPIO0_C2 = 0x0c20, NAND_D10, 
	GPIO0_C3 = 0x0c30, NAND_D11, 
	GPIO0_C4 = 0x0c40, NAND_D12, 
	GPIO0_C5 = 0x0c50, NAND_D13, 
	GPIO0_C6 = 0x0c60, NAND_D14, 
	GPIO0_C7 = 0x0c70, NAND_D15, 

	/* GPIO0_D */
	GPIO0_D0 = 0x0d00, NAND_DQS, EMMC_CLKOUT, 
	GPIO0_D1 = 0x0d10, NAND_CS1, 
	GPIO0_D2 = 0x0d20, NAND_CS2, EMMC_CMD, 
	GPIO0_D3 = 0x0d30, NAND_CS3, EMMC_RSTNOUT, 
	GPIO0_D4 = 0x0d40, SPI1_RXD, 
	GPIO0_D5 = 0x0d50, SPI1_TXD, 
	GPIO0_D6 = 0x0d60, SPI1_CLK, 
	GPIO0_D7 = 0x0d70, SPI1_CS0, 

	/* GPIO1_A */
	GPIO1_A0 = 0x1a00, UART0_SIN, 
	GPIO1_A1 = 0x1a10, UART0_SOUT, 
	GPIO1_A2 = 0x1a20, UART0_CTSN, 
	GPIO1_A3 = 0x1a30, UART0_RTSN, 
	GPIO1_A4 = 0x1a40, UART1_SIN, SPI0_RXD, 
	GPIO1_A5 = 0x1a50, UART1_SOUT, SPI0_TXD, 
	GPIO1_A6 = 0x1a60, UART1_CTSN, SPI0_CLK, 
	GPIO1_A7 = 0x1a70, UART1_RTSN, SPI0_CS0, 

	/* GPIO1_B */
	GPIO1_B0 = 0x1b00, UART2_SIN, JTAG_TDI, 
	GPIO1_B1 = 0x1b10, UART2_SOUT, JTAG_TDO, 
	GPIO1_B2 = 0x1b20, UART3_SIN, GPS_MAG, 
	GPIO1_B3 = 0x1b30, UART3_SOUT, GPS_SIG, 
	GPIO1_B4 = 0x1b40, UART3_CTSN, GPS_RFCLK, 
	GPIO1_B5 = 0x1b50, UART3_RTSN, 
	GPIO1_B6 = 0x1b60, SPDIF_TX, SPI1_CS1, 
	GPIO1_B7 = 0x1b70, SPI0_CS1, 

	/* GPIO1_C */
	GPIO1_C0 = 0x1c00, I2S0_CLK, 
	GPIO1_C1 = 0x1c10, I2S0_SCLK, 
	GPIO1_C2 = 0x1c20, I2S0_LRCKRX, 
	GPIO1_C3 = 0x1c30, I2S0_LRCKTX, 
	GPIO1_C4 = 0x1c40, I2S0_SDI, 
	GPIO1_C5 = 0x1c50, I2S0_SDO, 

	/* GPIO1_D */
	GPIO1_D0 = 0x1d00, I2C0_SDA, 
	GPIO1_D1 = 0x1d10, I2C0_SCL, 
	GPIO1_D2 = 0x1d20, I2C1_SDA, 
	GPIO1_D3 = 0x1d30, I2C1_SCL, 
	GPIO1_D4 = 0x1d40, I2C2_SDA, 
	GPIO1_D5 = 0x1d50, I2C2_SCL, 
	GPIO1_D6 = 0x1d60, I2C4_SDA, 
	GPIO1_D7 = 0x1d70, I2C4_SCL, 

	/* GPIO2_A */
	GPIO2_A0 = 0x2a00, LCDC1_D0, SMC_D0, TRACE_D0, 
	GPIO2_A1 = 0x2a10, LCDC1_D1, SMC_D1, TRACE_D1, 
	GPIO2_A2 = 0x2a20, LCDC1_D2, SMC_D2, TRACE_D2, 
	GPIO2_A3 = 0x2a30, LCDC1_D3, SMC_D3, TRACE_D3, 
	GPIO2_A4 = 0x2a40, LCDC1_D4, SMC_D4, TRACE_D4, 
	GPIO2_A5 = 0x2a50, LCDC1_D5, SMC_D5, TRACE_D5, 
	GPIO2_A6 = 0x2a60, LCDC1_D6, SMC_D6, TRACE_D6, 
	GPIO2_A7 = 0x2a70, LCDC1_D7, SMC_D7, TRACE_D7, 

	/* GPIO2_B */
	GPIO2_B0 = 0x2b00, LCDC1_D8, SMC_D8, TRACE_D8, 
	GPIO2_B1 = 0x2b10, LCDC1_D9, SMC_D9, TRACE_D9, 
	GPIO2_B2 = 0x2b20, LCDC1_D10, SMC_D10, TRACE_D10, 
	GPIO2_B3 = 0x2b30, LCDC1_D11, SMC_D11, TRACE_D11, 
	GPIO2_B4 = 0x2b40, LCDC1_D12, SMC_D12, TRACE_D12, 
	GPIO2_B5 = 0x2b50, LCDC1_D13, SMC_D13, TRACE_D13, 
	GPIO2_B6 = 0x2b60, LCDC1_D14, SMC_D14, TRACE_D14, 
	GPIO2_B7 = 0x2b70, LCDC1_D15, SMC_D15, TRACE_D15, 

	/* GPIO2_C */
	GPIO2_C0 = 0x2c00, LCDC1_D16, SMC_R0, TRACE_CLK, 
	GPIO2_C1 = 0x2c10, LCDC1_D17, SMC_R1, TRACE_CTL, 
	GPIO2_C2 = 0x2c20, LCDC1_D18, SMC_R2, 
	GPIO2_C3 = 0x2c30, LCDC1_D19, SMC_R3, 
	GPIO2_C4 = 0x2c40, LCDC1_D20, SMC_R4, 
	GPIO2_C5 = 0x2c50, LCDC1_D21, SMC_R5, 
	GPIO2_C6 = 0x2c60, LCDC1_D22, SMC_R6, 
	GPIO2_C7 = 0x2c70, LCDC1_D23, SMC_R7, 

	/* GPIO2_D */
	GPIO2_D0 = 0x2d00, LCDC1_DCLK, SMC_CS0, 
	GPIO2_D1 = 0x2d10, LCDC1_DEN, SMC_WEN, 
	GPIO2_D2 = 0x2d20, LCDC1_HSYNC, SMC_OEN, 
	GPIO2_D3 = 0x2d30, LCDC1_VSYNC, SMC_ADVN, 
	GPIO2_D4 = 0x2d40, SMC_BLSN0, 
	GPIO2_D5 = 0x2d50, SMC_BLSN1, 
	GPIO2_D6 = 0x2d60, SMC_CS1, 
	GPIO2_D7 = 0x2d70, TEST_CLK_OUT, 

	/* GPIO3_A */
	GPIO3_A0 = 0x3a00, MMC0_RSTNOUT, 
	GPIO3_A1 = 0x3a10, MMC0_PWREN, 
	GPIO3_A2 = 0x3a20, MMC0_CLKOUT, 
	GPIO3_A3 = 0x3a30, MMC0_CMD, 
	GPIO3_A4 = 0x3a40, MMC0_D0, 
	GPIO3_A5 = 0x3a50, MMC0_D1, 
	GPIO3_A6 = 0x3a60, MMC0_D2, 
	GPIO3_A7 = 0x3a70, MMC0_D3, 

	/* GPIO3_B */
	GPIO3_B0 = 0x3b00, MMC0_DETN, 
	GPIO3_B1 = 0x3b10, MMC0_WRPRT, 
	GPIO3_B3 = 0x3b30, CIF0_CLKOUT, 
	GPIO3_B4 = 0x3b40, CIF0_D0, HSADC_D8, 
	GPIO3_B5 = 0x3b50, CIF0_D1, HSADC_D9, 
	GPIO3_B6 = 0x3b60, CIF0_D10, I2C3_SDA, 
	GPIO3_B7 = 0x3b70, CIF0_D11, I2C3_SCL, 

	/* GPIO3_C */
	GPIO3_C0 = 0x3c00, MMC1_CMD, RMII_TXEN, 
	GPIO3_C1 = 0x3c10, MMC1_D0, RMII_TXD1, 
	GPIO3_C2 = 0x3c20, MMC1_D1, RMII_TXD0, 
	GPIO3_C3 = 0x3c30, MMC1_D2, RMII_RXD0, 
	GPIO3_C4 = 0x3c40, MMC1_D3, RMII_RXD1, 
	GPIO3_C5 = 0x3c50, MMC1_CLKOUT, RMII_CLKOUT, RMII_CLKIN, 
	GPIO3_C6 = 0x3c60, MMC1_DETN, RMII_RXERR, 
	GPIO3_C7 = 0x3c70, MMC1_WRPRT, RMII_CRS, 

	/* GPIO3_D */
	GPIO3_D0 = 0x3d00, MMC1_PWREN, RMII_MD, 
	GPIO3_D1 = 0x3d10, MMC1_BKEPWR, RMII_MDCLK, 
	GPIO3_D2 = 0x3d20, MMC1_INTN, 
	GPIO3_D3 = 0x3d30, PWM0, 
	GPIO3_D4 = 0x3d40, PWM1, JTAG_TRSTN, 
	GPIO3_D5 = 0x3d50, PWM2, JTAG_TCK, OTG_DRV_VBUS, 
	GPIO3_D6 = 0x3d60, PWM3, JTAG_TMS, HOST_DRV_VBUS, 
};

#define rk29_mux_api_set(name, mode) iomux_set(mode)
#define rk30_mux_api_set(name, mode) iomux_set(mode)
#define rk30_iomux_init() iomux_init()

#endif
