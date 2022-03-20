/*
@file: aula8_atividade_1
@author: Deivid da Silva Galvao
@date: 20 out 2021
@brief: 1) Faça um algoritmo que exiba todos números de 100 a 1.
*/
#include <stdio.h>
#include <stdlib.h>


int main() {//declarando a variavel i
  int i = 100;
//abrindo o while para o codigo ficar voltando no codigo e subtraindo 1 até a variavel i ser = 1
  while (i >= 1) {
    printf("valores %i\n", i );
    i--;
  }//fecha while

  return 0;
}//fecha main
