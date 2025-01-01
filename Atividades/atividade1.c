/*
@file: aula8_atividade_1
@author: Deivid da Silva Galvao
@date: 20 out 2021
@brief: 1) Faça um algoritmo que exiba todos números de 1 a 100.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {//declarando a variavel i
  int i = 1;
  //abrindo o while para o codigo ficar voltando e somando + 1 até a variavel i ser = 100
  while (i <= 100) {
    printf("valores %i\n", i );
    i++;
  }//fecha while

  return 0;
}// fecha main
