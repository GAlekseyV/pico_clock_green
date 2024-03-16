//
// Created by yufu on 2021/1/23.
//

#ifndef DEFINE_H
#define DEFINE_H

#include "pico/stdlib.h"
#include <stdio.h>
#include <string.h>

//-----define IO------------------------------
// SM1610
#define OE_PIN 13
#define SDI_PIN 11
#define CLK_PIN 10
#define LE_PIN 12

#define OE_OPEN gpio_put(OE_PIN, 0)
#define OE_CLOSE gpio_put(OE_PIN, 1)

#define SDI_LOW gpio_put(SDI_PIN, 0)
#define SDI_HIGH gpio_put(SDI_PIN, 1)

#define CLK_LOW gpio_put(CLK_PIN, 0)
#define CLK_HIGH gpio_put(CLK_PIN, 1)

#define LE_LOW gpio_put(LE_PIN, 0)
#define LE_HIGH gpio_put(LE_PIN, 1)

// DS3231
#define SDA_PIN 6
#define SCL_PIN 7
#define SQW_PIN 3

// SM5166 
#define A0_PIN 16
#define A1_PIN 18
#define A2_PIN 22

#define A0_LOW gpio_put(A0_PIN, 0)
#define A0_HIGH gpio_put(A0_PIN, 1)

#define A1_LOW gpio_put(A1_PIN, 0)
#define A1_HIGH gpio_put(A1_PIN, 1)

#define A2_LOW gpio_put(A2_PIN, 0)
#define A2_HIGH gpio_put(A2_PIN, 1)

// Keypad
#define KEY_MID_PIN 2
#define KEY_UP_PIN 17
#define KEY_DOWN_PIN 15

// Buzzer
#define BUZZ_PIN 14u

// ADC
#define AIN_PIN 26
#define ADC_VREF_PIN 29

#define UP_flag 1
#define DOWN_flag 0

//------------定义左侧状态指示灯使用的个数---------
#define disp_offset 2

// 定义 IIC
#define I2C_PORT i2c1
#define Address 0x68
#define Address_ADS 0x48

typedef struct
{
  uint8_t seconds;
  uint8_t minutes;
  uint8_t hour;
  uint8_t dayofweek;
  uint8_t dayofmonth;
  uint8_t month;
  uint8_t year;
} TIME_RTC;

typedef enum {
  ALARM_MODE_ALL_MATCHED = 0,
  ALARM_MODE_HOUR_MIN_SEC_MATCHED,
  ALARM_MODE_MIN_SEC_MATCHED,
  ALARM_MODE_SEC_MATCHED,
  ALARM_MODE_ONCE_PER_SECOND
} AlarmMode;

//----------------星期LED指示灯定义-------------------------

#define Monday                          \
  {                                     \
    disp_buf[0] |= (1 << 3) | (1 << 4); \
  }
#define DisMonday                          \
  {                                        \
    disp_buf[0] &= ~((1 << 3) | (1 << 4)); \
  }
#define Tuesday                         \
  {                                     \
    disp_buf[0] |= (1 << 6) | (1 << 7); \
  }
#define DisTuesday                         \
  {                                        \
    disp_buf[0] &= ~((1 << 6) | (1 << 7)); \
  }
#define Wednesday                       \
  {                                     \
    disp_buf[8] |= (1 << 1) | (1 << 2); \
  }
#define DisWednesday                       \
  {                                        \
    disp_buf[8] &= ~((1 << 1) | (1 << 2)); \
  }
#define Thursday                        \
  {                                     \
    disp_buf[8] |= (1 << 4) | (1 << 5); \
  }
#define DisThursday                        \
  {                                        \
    disp_buf[8] &= ~((1 << 4) | (1 << 5)); \
  }
#define Friday                \
  {                           \
    disp_buf[8] |= (1 << 7);  \
    disp_buf[16] |= (1 << 0); \
  }
#define DisFriday              \
  {                            \
    disp_buf[8] &= ~(1 << 7);  \
    disp_buf[16] &= ~(1 << 0); \
  }
#define Saturday                         \
  {                                      \
    disp_buf[16] |= (1 << 2) | (1 << 3); \
  }
#define DisSaturday                         \
  {                                         \
    disp_buf[16] &= ~((1 << 2) | (1 << 3)); \
  }
#define Sunday                           \
  {                                      \
    disp_buf[16] |= (1 << 5) | (1 << 6); \
  }
#define DisSunday                           \
  {                                         \
    disp_buf[16] &= ~((1 << 5) | (1 << 6)); \
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


#endif