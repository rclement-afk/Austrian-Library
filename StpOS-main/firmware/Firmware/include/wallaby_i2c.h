#ifndef WALLABY_I2C_H_
#define WALLABY_I2C_H_


#include "stm32f4xx.h"

void setup_I2C1(void);


void I2C_start(I2C_TypeDef* I2Cx, uint8_t address, uint8_t direction);
void I2C_write(I2C_TypeDef* I2Cx, uint8_t data);

uint8_t I2C_read_ack(I2C_TypeDef* I2Cx);
uint8_t I2C_read_nack(I2C_TypeDef* I2Cx);

void I2C_stop(I2C_TypeDef* I2Cx);

void i2c1_test(void);


#endif