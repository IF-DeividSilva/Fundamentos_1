/*
@file: atividade3_aula10
@author: Deivid da Silva Galvao
@date: 10 nov 2021
@brief: 5) Faça um programa que calcule o fatorial de um número a ser
digitado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
 int numero;
 int fatorial;

  printf("Bem vindo a calculadora de fatorial\n");
  printf("digite o numero para o calculo do fatorial\n");
  scanf("%i", &numero);

  for (fatorial = 1; numero >= 1; numero = numero - 1) {
    fatorial = fatorial * numero;

  }//fecha for
  printf("%i\n",fatorial);
  return 0;
}//fecha main
