/*
@file: aula8_atividade_6
@auhtor: Deivid da Silva Galvao
@date: 24 out 2021
@brief: Faça um programa que receba um número real, calcule e exiba o quadrado dele.
O programa deverá calcular o quadrado de vários números e finalizar quando
for digitado um número negativo ou zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  //declarando as variaveis
  int numero;
  int resultado;
  printf("Bem vindo\n");
  printf("Gostaria de saber o quadrado de qual numero?\n");


  while (numero > 0) {//abrindo while para pedir um numero para o usuario e calcular o quadrado dele.
        printf("Digite um numero real:");
        scanf("%i", &numero);
        resultado = numero * numero;
        printf("O quadrado do numero digitado e %i\n", resultado );

    if (numero <= 0) { // abrindo if para finalizar o programa caso o usuario digite um numero negativo ou igual a zero.
     printf("O programa sera encerrado, obrigado por usar nossos servicos\n");
     break;
  }//fecha if
}//fecha while


  return 0;
}//fecha main
