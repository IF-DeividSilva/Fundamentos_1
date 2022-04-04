/*
@file: atividade3_aula10
@author: Deivid da Silva Galvao
@date: 10 nov 2021
@brief: 4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int par;
  for (par = 240; par >= 240 && par <= 730; par = par + 2) {
  printf("%i\n",par );
}//fecha for
  return 0;
}//fecha main
