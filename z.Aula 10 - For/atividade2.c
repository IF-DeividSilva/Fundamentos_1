/*
@file: atividade2_aula10
@author: Deivid da Silva Galvao
@date: 10 nov 2021
@brief: 2) Faça um algoritmo que exiba todos números de 100 a 1.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador;
  for (contador = 100; contador >= 1; contador--) {
    printf("%i\n", contador);
  }//fecha for
  return 0;
}//fecha main
