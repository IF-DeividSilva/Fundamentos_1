/*
@file: aula8_atividade_4
@author: Deivid da Silva Galvao
@date: 20 out 2021
@brief: 4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  //declarando a variavel i
    int i = 240;
  //abrindo o while para o codigo ficar retornando e somando 1 ate i chegar no valor de 730
  while (i <= 730) {
    //abrindo if para descobri quais numeros sao multipos de 2
    if (i % 2 == 0) {
      printf("valores: %i \n", i);//mostrando os valores para o usuario
      }
      i++;
  }//fecha while



return 0;


}//fecha main
