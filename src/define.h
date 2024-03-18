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
#endif