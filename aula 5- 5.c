/*
@file: atividade 5 aula 5
@author: Deivid da Silva Galvao
@date: 13 out 2021
@brief: 5) Sabendo que a função sqrt(valor), que está na biblioteca
math.h retorna a raiz quadrada do valor, calcule a raiz
quadrada de um número que o usuário digitar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){// declarando as variaveis
  double valor;
  double resultado;

// solicitando que o usuario digite um numero real e pedindo que o computador salve o valor digitado na varivel valor
  printf("Digite um numero real:");
  scanf("%lf", &valor );

//declarendo o valor da variavel resultado e em seguida mostrando o resultado para o usuario
  resultado = sqrt( valor);
  printf("A raiz quadrada do numero digitado e: %lf\n",resultado);





  return 0;
}// finaliza a main
