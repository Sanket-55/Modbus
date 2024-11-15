/*
 * modbusSlave.h
 *
 *  Created on: Oct 27, 2022
 *      Author: controllerstech.com
 */

#ifndef INC_MODBUSSLAVE_H_
#define INC_MODBUSSLAVE_H_

#include "modbus_crc.h"
#include "stm32f1xx_hal.h"

#define SLAVE_ID 7

#define ILLEGAL_FUNCTION       0x01
#define ILLEGAL_DATA_ADDRESS   0x02
#define ILLEGAL_DATA_VALUE     0x03



void modbusException (uint8_t exceptioncode);
uint8_t readHoldingRegs (void);
uint8_t readInputRegs (void);
uint8_t WriteSingleHoldingRegs(void);
uint8_t readCoils (void);
uint8_t readInputs (void);
uint8_t writeMultipleHoldingRegs (void);
uint8_t writeMultiCoils (void);
uint8_t writeSingleCoil (void);
void Send_TO_Uart(data, size);
void Data_Received();

#endif /* INC_MODBUSSLAVE_H_ */
