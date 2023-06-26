// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/*
 * custom.h
 *
 *  Created on: July 29, 2020
 *      Author: nxf53801
 */

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

void custom_init(lv_ui *ui);
void ON_OFF_FUNC();
void Fan_Speed_FUNC();
void Temperature_UP_FUNC();
void Temperature_DOWN_FUNC();
uint8_t getSum(uint8_t *data, uint8_t len);
uint8_t IrSend(uint8_t *data, uint8_t group);
uint16_t ExterStudyPack(uint8_t *buf, uint8_t *data, uint16_t dataLen);
extern void IR_Cool_Mode_LAUNCH();
extern void IR_Heat_Mode_LAUNCH();
extern void IR_ON_LAUNCH();
extern void IR_OFF_LAUNCH();
extern void IR_Temperature_UP_DOWN_LAUNCH(int Temp_DISP_para);
extern void IR_FAN_SPEED_LAUNCH(int fan_speed);
extern void IR_H_SWING_LAUNCH();
extern void IR_V_SWING_LAUNCH();
extern void IR_MODE_SWITCH_LAUNCH(int mode_num_para);
extern void LIGHT_ON_OFF_FUNC();

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
