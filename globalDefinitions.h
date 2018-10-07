/* 
 * File:   globalDefinitions.h
 * Author: Ddrag
 *
 * Created on 11 de septiembre de 2018, 21:03
 */

#ifndef GLOBALDEFINITIONS_H
#define	GLOBALDEFINITIONS_H


#define LED_TRIS TRISAbits.RA0 // Se define el registro TRISA RA0 como LED_TRIS 
#define LED PORTAbits.RA0  // se define el puerto RA0 coomo LED
#define _XTAL_FREQ 48000000
#define _OFF  0  // define _OFF con la equivalencia de 0.
#define _ON 1    // define _ON con la equivalencia de 1.
#define OUTPUT 0 // OUTPUT lo definimos como si fuera un 0, que indica salida .
#define INPUT 1  // INPUT lo definimos como si fuera un 1, que indica entrada.


#endif	/* GLOBALDEFINITIONS_H */

