/*
@file: atividade3_aula10
@author: Deivid da Silva Galvao
@date: 10 nov 2021
@brief: 3) Crie um algoritmo que exiba todos os números múltiplos
de 5 no intervalo de 1 a 500.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador;
  for (contador = 5; contador <= 500 ; contador = contador + 5) {
    printf("%i\n",contador );
  }//fecha for
  return 0;
}//fecha main
