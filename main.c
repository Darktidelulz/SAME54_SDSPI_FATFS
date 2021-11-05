/*----------------------------------------------------------------------*/
/* Foolproof FatFs sample project for ARM ATMEL SAM D/E 5X            (C)ChaN, 2014    */
/*----------------------------------------------------------------------*/

 #include "atmel_start_pins.h"	/* Device specific declarations */
 #include "ff.h"		/* Declarations of FatFs API */
 
 FATFS FatFs;		/* FatFs work area needed for each volume */
 FIL Fil;			/* File object needed for each open file */
 uint32_t itWorks = 0;
 
 int main (void)
 {
 	UINT bw;
 	FRESULT fr;
 
 
 	f_mount(&FatFs, "", 0);		/* Give a work area to the default drive */
 
 	fr = f_open(&Fil, "newfile.txt", FA_WRITE | FA_CREATE_ALWAYS);	/* Create a file */
 	if (fr == FR_OK) {
 		f_write(&Fil, "It works!\r\n", 11, &bw);	/* Write data to the file */
 		fr = f_close(&Fil);							/* Close the file */
 		if (fr == FR_OK && bw == 11) {		
 			itWorks = 1;//set breakpoint here for testing if it works and check sd card after.
 		}
 	}
 
 	for (;;) ;
 }
 

