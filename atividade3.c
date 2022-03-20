/*
@file:aula6_atividade3
@author: Deivid da Silva Galvao
@date:20 out 2021
@brief: 3) Crie um algoritmo que exiba todos os números múltiplos
de 3 no intervalo de 1 a 322.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {//declarando as variaveis i e valor
  int i = 1;
  int valor = 0;
/*abrindo o while para o codigo ficar retornando, para exibir os
numeros que divididos por 3 tem resto igual a 0 até o numero 322*/
  while (i <= 322) {
    if (i % 3 == 0) {
      printf("valores %i\n", i);
      valor = valor + i;
    }//if
  i++;

}//while
  return 0;
}//main
