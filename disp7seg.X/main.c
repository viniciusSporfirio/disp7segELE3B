/*
 * File:   main.c
 * Author: 20185327
 *
 * Created on 19 de Fevereiro de 2021, 15:14
 */


#include <xc.h>

void main(void) 
{ int estado = 0;
  int t;
 while(1)
 { 
     switch(estado)
             
       case 0:  
               estado  = 1;
               break;
       case 1:
               semaforo_init();
               estado = 2;
               break;
       case 2:
               amarelo(0);
               vermelho(0);
               verde(1);
               verdePed(0);
               vermelhoPed(1);
               if( botao() == 1 )
                   estado = 3;
               break;
       case 3:
              t = 3000;
           estado = 4;
                 
 
 
 
 
 
 
 
 }    













}
