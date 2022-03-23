/*
@file: aula 4 atividade 4
@auhor: Deivid da Silva Galvao
@dade: 07/10/2021
@brief: 4) Tendo a Altura da pessoa definida como uma constante,
calcule seu peso ideal utilizando a seguinte fórmula:
 peso ideal = 72.7 x altura – 58

*/

#include <stdio.h>
#include <stdlib.h>
#define altura 1.7

 int main(){
   float peso_ideal;
   peso_ideal = (72.7 * altura) - 58;


printf("O peso ideal para quem tem 1 metro e 70 centimetros de altura e de: %.2f metros \n", peso_ideal);






   return 0;

 }//finaliza main
