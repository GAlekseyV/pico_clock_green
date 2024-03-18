#ifndef _SRC_DISPLAY_H
#define _SRC_DISPLAY_H

//----------------LED-------------------------
void monday_leds_on(unsigned char[]);
void monday_leds_off(unsigned char[]);
void tuesday_leds_on(unsigned char[]);
void tuesday_leds_off(unsigned char[]);
void wednesday_leds_on(unsigned char[]);
void wednesday_leds_off(unsigned char[]);
void thursday_leds_on(unsigned char[]);
void thursday_leds_off(unsigned char[]);
void friday_leds_on(unsigned char[]);
void friday_leds_off(unsigned char[]);
void saturday_leds_on(unsigned char[]);
void saturday_leds_off(unsigned char[]);
void sunday_leds_on(unsigned char[]);
void sunday_leds_off(unsigned char[]);

//----------------状态LED指示灯定义-------------------------
#define dis_move_open disp_buf[0] |= 0X03
#define dis_move_close disp_buf[0] &= ~0X03
#define dis_Alarm_en disp_buf[1] |= 0X03
#define dis_Alarm_close disp_buf[1] &= ~0x03
#define dis_CountDown disp_buf[2] |= 0X03
#define dis_CountDown_close disp_buf[2] &= ~0x03
#define dis_F_flag disp_buf[3] |= (1 << 0)
#define dis_F_flag_close disp_buf[3] &= ~(1 << 0)
#define dis_C_flag disp_buf[3] |= (1 << 1)
#define dis_C_flag_close disp_buf[3] &= ~(1 << 1)
#define dis_AM disp_buf[4] |= (1 << 0)
#define dis_AM_close disp_buf[4] &= ~(1 << 0)
#define dis_PM disp_buf[4] |= (1 << 1)
#define dis_PM_close disp_buf[4] &= ~(1 << 1)
#define dis_CountUp disp_buf[5] |= 0X03
#define dis_CountUp_close disp_buf[5] &= ~0x03
#define dis_hourly_chime disp_buf[6] |= 0X03
#define dis_hourly_chime_close disp_buf[6] &= ~0X03
#define dis_Auto_light disp_buf[7] |= 0X03
#define dis_Auto_light_close disp_buf[7] &= ~0X03
#define back_light_on disp_buf[0] |= (1 << 2) | (1 << 5)
#define back_light_off disp_buf[0] &= ~((1 << 2) | (1 << 5))

#endif// _SRC_DISPLAY_H