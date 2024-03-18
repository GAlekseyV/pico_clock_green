#include "display.h"

void monday_leds_on(unsigned char *dbuf)
{
  dbuf[0] |= (1 << 3) | (1 << 4);
}

void monday_leds_off(unsigned char *dbuf)
{
  dbuf[0] &= ~((1 << 3) | (1 << 4));
}

void tuesday_leds_on(unsigned char *dbuf)
{
  dbuf[0] |= (1 << 6) | (1 << 7);
}

void tuesday_leds_off(unsigned char *dbuf)
{
  dbuf[0] &= ~((1 << 6) | (1 << 7));
}

void wednesday_leds_on(unsigned char *dbuf)
{
  dbuf[8] |= (1 << 1) | (1 << 2);
}

void wednesday_leds_off(unsigned char *dbuf)
{
  dbuf[8] &= ~((1 << 1) | (1 << 2));
}

void thursday_leds_on(unsigned char *dbuf)
{
  dbuf[8] |= (1 << 4) | (1 << 5);
}

void thursday_leds_off(unsigned char *dbuf)
{
  dbuf[8] &= ~((1 << 4) | (1 << 5));
}

void friday_leds_on(unsigned char *dbuf)
{
  dbuf[8] |= (1 << 7);
  dbuf[16] |= (1 << 0);
}
void friday_leds_off(unsigned char *dbuf)
{
  dbuf[8] &= ~(1 << 7);
  dbuf[16] &= ~(1 << 0);
}
void saturday_leds_on(unsigned char *dbuf)
{
  dbuf[16] |= (1 << 2) | (1 << 3);
}
void saturday_leds_off(unsigned char *dbuf)
{

  dbuf[16] &= ~((1 << 2) | (1 << 3));
}
void sunday_leds_on(unsigned char *dbuf)
{

  dbuf[16] |= (1 << 5) | (1 << 6);
}
void sunday_leds_off(unsigned char *dbuf)
{
  dbuf[16] &= ~((1 << 5) | (1 << 6));
}

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
