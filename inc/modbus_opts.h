#ifndef MODBUS_OPTS_H
#define MODBUS_OPTS_H

#include "main.h"
#include "app_uart.h"


#define MODBUS_DATA_MAX_SIZE        256     // Max data size for modbus
#define MODBUS_TX_BUFFER_SIZE		256
#define MODBUS_RX_BUFFER_SIZE       256       // Max Rx Buffer Size
#define MODBUS_TIMEOUT              3000     // Timeout for get response data

/*Portable Modbus to your system*/ 

// Physical Layer [UART]
#define MODBUS_TRANSMIT(data, data_size)		Sim3g_Transmit(data, data_size)
#define MODBUS_RECEIVE_IS_AVAILABLE()			Uart1_Received_Buffer_Available()
#define MODBUS_RECEIVE()						Uart1_Read_Received_Buffer()

// Tick                                     
#define MODBUS_GET_TIME_MS()			HAL_GetTick()
#endif //MODBUS_OPTS_H


