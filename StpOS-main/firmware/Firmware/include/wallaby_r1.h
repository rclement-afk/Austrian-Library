// Author: Joshua Southerland (2015)

#ifndef WALLABY_R0_H_
#define WALLABY_R0_H_
#include "stm32f4xx.h"

#define SystemCoreClock 180000000


#define MOT_MODE_PWM 0
#define MOT_MODE_MAV 1
#define MOT_MODE_MTP 2
#define MOT_MODE_MRP 3


#define GYRO_ID 211

// Yellow LED on pin PE9
#define LED1_PIN GPIO_Pin_9
#define LED1_PORT GPIOE


// Motor0 0A7 (U5)   PWMA=PWM1, AIN2=PD7, AIN1=PD1
#define MOT0_PWM GPIO_Pin_8 //PA8
#define MOT0_PWM_PinSource GPIO_PinSource8
#define MOT0_PWM_PORT GPIOA
#define MOT0_DIR1 GPIO_Pin_1
#define MOT0_DIR1_PORT GPIOD
#define MOT0_DIR2 GPIO_Pin_7
#define MOT0_DIR2_PORT GPIOD
#define MOT0_BEMF_H GPIO_Pin_0  //ADC123_IN0  PA0
#define MOT0_BEMF_L GPIO_Pin_1  //ADC123_IN1  PA1
#define MOT0_BEMF_H_CHAN ADC_Channel_0
#define MOT0_BEMF_L_CHAN ADC_Channel_1
#define MOT0_BEMF_H_ADX ADC3
#define MOT0_BEMF_L_ADX ADC3
#define MOT0_BEMF_H_PORT GPIOA
#define MOT0_BEMF_L_PORT GPIOA


// Motor1 1A7 (U5)   PWMB=PWM2  BIN2=PC13, BIN1=PE15
#define MOT1_PWM GPIO_Pin_9 //PA9
#define MOT1_PWM_PinSource GPIO_PinSource9
#define MOT1_PWM_PORT GPIOA
#define MOT1_DIR1 GPIO_Pin_15
#define MOT1_DIR1_PORT GPIOE
#define MOT1_DIR2 GPIO_Pin_13
#define MOT1_DIR2_PORT GPIOC
#define MOT1_BEMF_H GPIO_Pin_2  //ADC123_IN2  PA2
#define MOT1_BEMF_L GPIO_Pin_3  //ADC123_IN3  PA3
#define MOT1_BEMF_H_CHAN ADC_Channel_2
#define MOT1_BEMF_L_CHAN ADC_Channel_3
#define MOT1_BEMF_H_ADX ADC3
#define MOT1_BEMF_L_ADX ADC3
#define MOT1_BEMF_H_PORT GPIOA
#define MOT1_BEMF_L_PORT GPIOA


// Motor2  0A37 (U5)   PWMA=PWM3, AIN2=PC15, AIN1=PC14
#define MOT2_PWM GPIO_Pin_10 //PA10
#define MOT2_PWM_PinSource GPIO_PinSource10
#define MOT2_PWM_PORT GPIOA
#define MOT2_DIR1 GPIO_Pin_14
#define MOT2_DIR1_PORT GPIOC
#define MOT2_DIR2 GPIO_Pin_15
#define MOT2_DIR2_PORT GPIOC
#define MOT2_BEMF_H GPIO_Pin_4  //ADC12_IN4  ????
#define MOT2_BEMF_L GPIO_Pin_5  //ADC12_IN5   ?????
#define MOT2_BEMF_H_CHAN ADC_Channel_4
#define MOT2_BEMF_L_CHAN ADC_Channel_5
#define MOT2_BEMF_H_ADX ADC2
#define MOT2_BEMF_L_ADX ADC2
#define MOT2_BEMF_H_PORT GPIOA
#define MOT2_BEMF_L_PORT GPIOA


// Motor3 1A37 (U5)   PWMB=PWM4  BIN2=PD11, BIN1=PD10
#define MOT3_PWM GPIO_Pin_6 //PC6
#define MOT3_PWM_PinSource GPIO_PinSource6
#define MOT3_PWM_PORT GPIOC
#define MOT3_DIR1 GPIO_Pin_10
#define MOT3_DIR1_PORT GPIOD
#define MOT3_DIR2 GPIO_Pin_11
#define MOT3_DIR2_PORT GPIOD
#define MOT3_BEMF_H GPIO_Pin_6  //ADC12_IN6   ?????
#define MOT3_BEMF_L GPIO_Pin_7  //ADC12_IN7   ????
#define MOT3_BEMF_H_CHAN ADC_Channel_6
#define MOT3_BEMF_L_CHAN ADC_Channel_7
#define MOT3_BEMF_H_ADX ADC2
#define MOT3_BEMF_L_ADX ADC2
#define MOT3_BEMF_H_PORT GPIOA
#define MOT3_BEMF_L_PORT GPIOA


// servos from J3
#define SRV0_PWM GPIO_Pin_7 // PWM5 PC7 -->  U22
#define SRV0_PWM_PORT GPIOC
#define SRV0_PWM_PinSource GPIO_PinSource7
#define SRV1_PWM GPIO_Pin_8 // PWM6 PC8 -->  U22
#define SRV1_PWM_PORT GPIOC
#define SRV1_PWM_PinSource GPIO_PinSource8


// servos from J17
#define SRV2_PWM GPIO_Pin_5 // PWM7  PE5 -->  U2
#define SRV2_PWM_PORT GPIOE
#define SRV2_PWM_PinSource GPIO_PinSource5
#define SRV3_PWM GPIO_Pin_6 // PWM8  PE6 --> U2
#define SRV3_PWM_PORT GPIOE
#define SRV3_PWM_PinSource GPIO_PinSource6


// Analog In
#define AIN0_PIN GPIO_Pin_1  // J5_1  ADC12_IN9  --> PB1
#define AIN1_PIN GPIO_Pin_1  // J5_2  ADC123_IN11  --> PC1
#define AIN2_PIN GPIO_Pin_2  // J5_3  ADC123_IN12  --> PC2
#define AIN3_PIN GPIO_Pin_3  // J5_4  ADC123_IN13  --> PC3
#define AIN4_PIN GPIO_Pin_4  // J5_5  ADC12_IN14  --> PC4
#define AIN5_PIN GPIO_Pin_5  // J5_6  ADC12_IN15  --> PC5

#define AIN0_CHAN ADC_Channel_9
#define AIN1_CHAN ADC_Channel_11
#define AIN2_CHAN ADC_Channel_12
#define AIN3_CHAN ADC_Channel_13
#define AIN4_CHAN ADC_Channel_14
#define AIN5_CHAN ADC_Channel_15

#define AIN0_ADX ADC2
#define AIN1_ADX ADC3
#define AIN2_ADX ADC3
#define AIN3_ADX ADC3
#define AIN4_ADX ADC2
#define AIN5_ADX ADC2

#define AIN0_PORT GPIOB
#define AIN1_PORT GPIOC
#define AIN2_PORT GPIOC
#define AIN3_PORT GPIOC
#define AIN4_PORT GPIOC
#define AIN5_PORT GPIOC


// Battery voltage ADC
#define ADC_BATT_PIN GPIO_Pin_0 //  ADC123_IN10 --> PC0
#define ADC_BATT_CHAN ADC_Channel_10
#define ADC_BATT_ADX ADC3
#define ADC_BATT_PORT GPIOC


// Digital IO
#define DIG0_PIN GPIO_Pin_12  // J13_1  PD12
#define DIG1_PIN GPIO_Pin_13  // J13_2  PD13
#define DIG2_PIN GPIO_Pin_14  // J13_3  PD14
#define DIG3_PIN GPIO_Pin_15  // J13_4  PD15
#define DIG4_PIN GPIO_Pin_9  // J13_5  PB9
#define DIG5_PIN GPIO_Pin_8  // J13_6  PB8
#define DIG6_PIN GPIO_Pin_9  // J13_7  PC9
#define DIG7_PIN GPIO_Pin_0  // J13_8  PE0
#define DIG8_PIN GPIO_Pin_1  // J13_9  PE1
#define DIG9_PIN GPIO_Pin_4  // J13_10 PE4
#define DIG10_PIN GPIO_Pin_8 // PD8  main proc
#define DIG11_PIN GPIO_Pin_9 // PD9 main proc
#define DIG12_PIN GPIO_Pin_9  // PE9 LED
#define DIG13_PIN GPIO_Pin_0 // PB0 button

#define DIG0_PORT GPIOD
#define DIG1_PORT GPIOD
#define DIG2_PORT GPIOD
#define DIG3_PORT GPIOD
#define DIG4_PORT GPIOB
#define DIG5_PORT GPIOB
#define DIG6_PORT GPIOC
#define DIG7_PORT GPIOE
#define DIG8_PORT GPIOE
#define DIG9_PORT GPIOE
#define DIG10_PORT GPIOD // main proc
#define DIG11_PORT GPIOD // main proc
#define DIG12_PORT GPIOE // LED
#define DIG13_PORT GPIOB // button



// SPI2  (Main Proc)
#define SPI2_CLK              GPIO_Pin_13  // PB13
#define SPI2_CLK_SOURCE       GPIO_PinSource13
#define SPI2_CLK_PORT         GPIOB
#define SPI2_MISO             GPIO_Pin_14  // PB14
#define SPI2_MISO_SOURCE      GPIO_PinSource14
#define SPI2_MISO_PORT        GPIOB
#define SPI2_MOSI             GPIO_Pin_15  // PB15
#define SPI2_MOSI_SOURCE      GPIO_PinSource15
#define SPI2_MOSI_PORT        GPIOB
#define SPI2_CS0              GPIO_Pin_12   // PB12
#define SPI2_CS0_PORT         GPIOB
#define SPI2_CS0_SOURCE       GPIO_PinSource12


// SPI3  (IMU)
#define SPI3_CLK              GPIO_Pin_10  // PC10
#define SPI3_CLK_SOURCE       GPIO_PinSource10
#define SPI3_CLK_PORT         GPIOC
#define SPI3_MISO             GPIO_Pin_11  // PC11
#define SPI3_MISO_SOURCE      GPIO_PinSource11
#define SPI3_MISO_PORT        GPIOC
#define SPI3_MOSI             GPIO_Pin_12  // PC12
#define SPI3_MOSI_SOURCE      GPIO_PinSource12
#define SPI3_MOSI_PORT        GPIOC
#define SPI3_CS0              GPIO_Pin_2   // accel/mag   SPI3_CS0   PE2
#define SPI3_CS0_PORT         GPIOE
#define SPI3_CS1              GPIO_Pin_3   // gyro:       SPI3_CS1   PE3
#define SPI3_CS1_PORT         GPIOE


// SPI4 (Header)
// clk   -> 39.SPI4_CLK --> PE12
// miso   -> 39.SPI4_MISO   --> PE13
// mosi   -> 39.SPI4_MOSI  --> PE14
// cs0   -> 39.PE11  
// nirq   -> 39.PD0  
#define SPI4_CLK              GPIO_Pin_12
#define SPI4_CLK_SOURCE       GPIO_PinSource12
#define SPI4_CLK_PORT         GPIOE
#define SPI4_MISO             GPIO_Pin_13 
#define SPI4_MISO_SOURCE      GPIO_PinSource13
#define SPI4_MISO_PORT        GPIOE
#define SPI4_MOSI             GPIO_Pin_14 
#define SPI4_MOSI_SOURCE      GPIO_PinSource14
#define SPI4_MOSI_PORT        GPIOE
#define SPI4_CS0              GPIO_Pin_11 
#define SPI4_CS0_PORT         GPIOE
#define SPI4_NIRQ             GPIO_Pin_0 
#define SPI4_NIRQ_PORT        GPIOD

// I2C1 (Header)
#define I2C1_SCL              GPIO_Pin_6   // PB6
#define I2C1_SCL_SOURCE       GPIO_PinSource6
#define I2C1_SCL_PORT         GPIOB
#define I2C1_SDA              GPIO_Pin_7   // PB7
#define I2C1_SDA_SOURCE       GPIO_PinSource7
#define I2C1_SDA_PORT         GPIOB


// IMU ICs
#define GYRO_DATA_READY       GPIO_Pin_2    // PD2
#define GYRO_DATA_READY_PORT  GPIOD         // PD2
#define ACCEL_INT1            GPIO_Pin_3    // PD3
#define ACCEL_INT1_PORT       GPIOD
#define ACCEL_INT2            GPIO_Pin_4    // PD4
#define ACCEL_INT2_PORT       GPIOD


// Button
#define BUTTON_S1_PIN GPIO_Pin_0
#define BUTTON_S1_PORT GPIOB

#endif
