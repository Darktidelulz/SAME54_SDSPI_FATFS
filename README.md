# SAME54_SDSPI_FATFS
SAM D/E 5X

Used the generic example from the FatFs sample projects  @ http://elm-chan.org/fsw/ff/00index_e.html and "ported" this example to SAME53, Should works for SAMD51, SAME51, SAME53 and SAME54.

In atmel_start_pins.h the following is definded and corrosponds to a SERCOM4 SPI implemention I used in start.atmel.com. 

Change GPIO_PORT and Mask depending on implementation. 

#define MISO GPIO(GPIO_PORTB, 12)//SPI MISO //DO

#define SCK GPIO(GPIO_PORTB, 13)//SPI SCK //CLK

#define CS_0 GPIO(GPIO_PORTB, 14) //SPI CS

#define MOSI GPIO(GPIO_PORTB, 15)//SPI MOSI //DI
