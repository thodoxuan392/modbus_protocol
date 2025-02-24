#ifndef MODBUS_OPTS_H
#define MODBUS_OPTS_H

#include "hal/uart.h"


#define MODBUS_DATA_MAX_SIZE        256     // Max data size for modbus
#define MODBUS_TX_BUFFER_SIZE		256
#define MODBUS_RX_BUFFER_SIZE       256       // Max Rx Buffer Size
#define MODBUS_TIMEOUT              3000     // Timeout for get response data

/*Portable Modbus to your system*/ 

// Physical Layer [UART]
#define MODBUS_TRANSMIT(data, data_size)		UART_Transmit(UART_5, data, data_size, 0xffffffff)
#define MODBUS_RECEIVE_IS_AVAILABLE()			UART_IsReceiveAvailable(UART_5)
#define MODBUS_RECEIVE()						UART_ReceiveOneByte(UART_5)

// Tick                                     
#define MODBUS_GET_TIME_MS()			HAL_GetTick()

#endif //MODBUS_OPTS_H


