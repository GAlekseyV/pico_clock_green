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

void move_open_led_on(unsigned char *dbuf)
{
  dbuf[0] |= 0X03;
}
void move_open_led_off(unsigned char *dbuf)
{
  dbuf[0] &= ~0X03;
}
void alarm_led_on(unsigned char *dbuf)
{
  dbuf[1] |= 0X03;
}
void alarm_led_off(unsigned char *dbuf)
{
  dbuf[1] &= ~0x03;
}
void countdown_led_on(unsigned char *dbuf)
{
  dbuf[2] |= 0X03;
}
void countdown_led_off(unsigned char *dbuf)
{
  dbuf[2] &= ~0x03;
}
void fah_led_on(unsigned char *dbuf)
{
  dbuf[3] |= (1 << 0);
}
void fah_led_off(unsigned char *dbuf)
{
  dbuf[3] &= ~(1 << 0);
}
void cel_led_on(unsigned char *dbuf)
{
  dbuf[3] |= (1 << 1);
}
void cel_led_off(unsigned char *dbuf)
{
  dbuf[3] &= ~(1 << 1);
}
void am_led_on(unsigned char *dbuf)
{
  dbuf[4] |= (1 << 0);
}
void am_led_off(unsigned char *dbuf)
{
  dbuf[4] &= ~(1 << 0);
}
void pm_led_on(unsigned char *dbuf)
{
  dbuf[4] |= (1 << 1);
}
void pm_led_off(unsigned char *dbuf)
{
  dbuf[4] &= ~(1 << 1);
}
void countup_led_on(unsigned char *dbuf)
{
  dbuf[5] |= 0X03;
}
void countup_led_off(unsigned char *dbuf)
{
  dbuf[5] &= ~0x03;
}
void hourly_led_on(unsigned char *dbuf)
{
  dbuf[6] |= 0X03;
}
void hourly_led_off(unsigned char *dbuf)
{
  dbuf[6] &= ~0X03;
}
void autolight_led_on(unsigned char *dbuf)
{
  dbuf[7] |= 0X03;
}
void autolight_led_off(unsigned char *dbuf)
{
  dbuf[7] &= ~0X03;
}
void back_light_on(unsigned char *dbuf)
{
  dbuf[0] |= (1 << 2) | (1 << 5);
}
void back_light_off(unsigned char *dbuf)
{
  dbuf[0] &= ~((1 << 2) | (1 << 5));
}
//----------------状态LED指示灯定义-------------------------
