#ifndef MODBUS_OPTS_H
#define MODBUS_OPTS_H

#include "uart.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


#define MODBUS_DATA_MAX_SIZE        256     // Max data size for modbus
#define MODBUS_TX_BUFFER_SIZE		256
#define MODBUS_RX_BUFFER_SIZE       256       // Max Rx Buffer Size
#define MODBUS_TIMEOUT              3000     // Timeout for get response data

/*Portable Modbus to your system*/ 

// Physical Layer [UART]
#define MODBUS_TRANSMIT(data, data_size)		UART_send(data, data_size)
#define MODBUS_RECEIVE_IS_AVAILABLE()			UART_rx_available()
#define MODBUS_RECEIVE()						UART_receive_data()

// Tick                                     
#define MODBUS_GET_TIME_MS()			xTaskGetTickCount() / configTICK_RATE_HZ

#endif //MODBUS_OPTS_H


