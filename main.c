#include "serial.h"
//#include "p18f4550.h"
//#include "usart.h"
//#define MAX_STRING_LENGTH 40

void initialize_USART()
{
    TX_PORT = 0;        // transmitting output
    RX_PORT = 1;        //  as input
    
    SPBRG_HIGH = 0;
    SPBRG_LOW = 0x19;       //1200 baud
    BRG_SPEED = 0;              //Baud rate selection 
    BAUD_BITS = 0;               //8 bit BRG
    TX_MODE = 0;                //Async mode
    SERIAL_PORT_ENABLE = 1;     //Enable serial port
    TRANSMIT_ENABLE = 1;        //enable USART transmit mode    
}

// to send a message
//static char buff[MAX_STRING_LENGTH];

void str2ram(static char *dest, static char rom *src)
{
    while((*dest++ = *src++) != '\0');
}


void print_line(static const rom char *str)
{
    str2ram(buff, str);
    putsUSART(buff);
    
}

void print_line_better(static const char *str)
{
        putsUSART(buff);
}