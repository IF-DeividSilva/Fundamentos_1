/*
@file:aula 4 atividade 2
@author:Deivid da Silva Galvao
@date:06 out 2021
@brief: 3)Faça um programa com 2 variáveis, A e B, onde A terá
o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B,
AxB e A/B. Em seguida, faça B incrementar de uma
unidade e repita as 4 operações.

*/

#include <stdio.h>
#include <stdlib.h>

int main() { //declarar as variaveis
 int a = 40;
 int b = -1;
 int soma_ab = a + b;
 int diferenca_ab = a - b;
 float produto_ab = a * b;
 float divisao_ab = a / b;

// mostrar para o usuario as operações
 printf("Valor de a+b: %i\n", soma_ab);
 printf("Valor de a-b: %i\n", diferenca_ab);
 printf("Valor de a*b: %.f\n", produto_ab);
 printf("Valor de a/b: %.f\n", divisao_ab);

 b++; // incrementar o valor de b

 printf("Novo valor de b: %i\n", b); // mostrar novo valor para o usuario

  soma_ab = a + b;
  diferenca_ab = a - b;
  produto_ab = a * b;

 printf("Valor de a+b: %i\n", soma_ab);
 printf("Valor de a-b: %i\n", diferenca_ab);
 printf("Valor de a*b: %.f\n", produto_ab);
 printf("Valor de a/b: nao exieste \n");



return 0;

}// finaliza main
