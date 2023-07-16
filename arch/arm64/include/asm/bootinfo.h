/*
 * bootinfo.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASMARM_BOOTINFO_H
#define __ASMARM_BOOTINFO_H

typedef enum {
	PU_REASON_EVENT_HWRST,
	PU_REASON_EVENT_SMPL,
	PU_REASON_EVENT_RTC,
	PU_REASON_EVENT_DC_CHG,
	PU_REASON_EVENT_USB_CHG,
	PU_REASON_EVENT_PON1,
	PU_REASON_EVENT_CABLE,
	PU_REASON_EVENT_KPD,
	PU_REASON_EVENT_WARMRST,
	PU_REASON_EVENT_LPK,
	PU_REASON_MAX
} powerup_reason_t;

enum {
	RS_REASON_EVENT_WDOG,
	RS_REASON_EVENT_KPANIC,
	RS_REASON_EVENT_NORMAL,
	RS_REASON_EVENT_OTHER,
	RS_REASON_MAX
};

typedef enum {
	POFF_REASON_EVENT_SOFT,
	POFF_REASON_EVENT_PS_HOLD = 1,
	POFF_REASON_EVENT_PMIC_WD,
	POFF_REASON_EVENT_GP1_KPD1,
	POFF_REASON_EVENT_GP2_KPD2,
	POFF_REASON_EVENT_KPDPWR_AND_RESIN,
	POFF_REASON_EVENT_RESIN_N,
	POFF_REASON_EVENT_KPDPWR_N = 7,
	POFF_REASON_EVENT_RESEVER1,
	POFF_REASON_EVENT_RESEVER2,
	POFF_REASON_EVENT_RESEVER3,
	POFF_REASON_EVENT_CHARGER,
	POFF_REASON_EVENT_TFT,
	POFF_REASON_EVENT_UVLO,
	POFF_REASON_EVENT_OTST3,
	POFF_REASON_EVENT_STAGE3,
	POFF_REASON_EVENT_GP_FAULT0,
	POFF_REASON_EVENT_GP_FAULT1,
	POFF_REASON_EVENT_GP_FAULT2,
	POFF_REASON_EVENT_GP_FAULT3,
	POFF_REASON_EVENT_MBG_FAULT,
	POFF_REASON_EVENT_OVLO,
	POFF_REASON_EVENT_GEN2_UVLO,
	POFF_REASON_EVENT_AVDD_RB,
	POFF_REASON_EVENT_RESEVER4,
	POFF_REASON_EVENT_RESEVER5,
	POFF_REASON_EVENT_RESEVER6,
	POFF_REASON_EVENT_FAULT_FAULT_N,
	POFF_REASON_EVENT_FAULT_PBS_WATCHDOG_TO,
	POFF_REASON_EVENT_FAULT_PBS_NACK,
	POFF_REASON_EVENT_FAULT_RESTART_PON,
	POFF_REASON_EVENT_GEN2_OTST3,
	POFF_REASON_EVENT_RESEVER7,
	POFF_REASON_EVENT_RESEVER8,
	POFF_REASON_EVENT_RESEVER9,
	POFF_REASON_EVENT_RESEVER10,
	POFF_REASON_EVENT_S3_RESET_FAULT_N,
	POFF_REASON_EVENT_S3_RESET_PBS_WATCHDOG_TO,
	POFF_REASON_EVENT_S3_RESET_PBS_NACK,
	POFF_REASON_EVENT_S3_RESET_KPDPWR_ANDOR_RESIN,
	POFF_REASON_MAX
} poweroff_reason_t;

#define RESTART_EVENT_WDOG              0x10000
#define RESTART_EVENT_KPANIC            0x20000
#define RESTART_EVENT_NORMAL            0x40000
#define RESTART_EVENT_OTHER             0x80000

void set_poweroff_reason(int poweroff_reason);
unsigned int get_powerup_reason(void);
bool is_abnormal_powerup(void);
void set_powerup_reason(unsigned int powerup_reason);
#endif
