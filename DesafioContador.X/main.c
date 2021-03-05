/*
 * File:   main.c
 * Author: 20185327
 *
 * Created on 25 de Fevereiro de 2021, 16:51
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"

void main(void) 
{
    unsigned char cont = 0;
    
    display7seg_init ();
    
    while ( 1 )
    {
        display7seg ( cont );
        delay (500);
        if ( botao_Up() == 1)
        {
            cont = ++cont % 16;
        }
        if (botao_Down()== 1)
        {
            cont = --cont % 16;
        }
    }
    return;