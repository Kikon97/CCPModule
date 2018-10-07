/* 
 * File:   config.h
 * Author: Ddrag
 *
 * Created on 11 de septiembre de 2018, 21:04
 */

#ifndef CONFIG_H
#define	CONFIG_H

#include <xc.h>
#include "globalDefinitions.h" // incluyes los terminos definidos en globalDefinitions

void configPIC(); // se llama la funcion donde se establecieron la configuracion de los pines
void putch(unsigned char data);
void init_uart(void);

#endif	/* CONFIG_H */

