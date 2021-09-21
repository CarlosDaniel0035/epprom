/*
 * File:   main.c
 * Author: 20185070
 *
 * Created on 21 de Setembro de 2021, 13:43
 */

#include "config.h"
#include <xc.h>
#include "delay.h"
#include "dispLCD4vias.h"
#include "eprom2.h"

char vetor[10];
char estado = 1;
void main(void)

      
{
    initLCD();
    switch (estado)
    {
            case 1:
                
                lcd(0,0,"fdp");
                __delay_ms(4000);
                
                dispLCD_clr();
                
                estado =2;
                break;
    }
    while( 1 );
}

