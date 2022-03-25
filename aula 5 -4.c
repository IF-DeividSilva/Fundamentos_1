/*
@file: atividade 4 - aula 5
@author: Deivid da Silva Galvao
@date: 13 out 2021
@brief: 4) Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

  int main(){ // declarando as variaveis

   float valor1;
   float valor2;
   float valor3;
   float valor4;
   float media;

//solicitando que o usuario digite os valores e pedindo para o computador salvar os valores digitados nas respectivas variaveis
   printf("Digite um numero real:");
   scanf("%f",&valor1);

   printf("Digite um numero real:");
   scanf("%f",&valor2);

   printf("Digite um numero real:");
   scanf("%f",&valor3);

   printf(" Digite um numero real:");
   scanf("%f",&valor4);

// declarando o valor da variavel media e em seguida mostrando o valor para o usuario
   media = (valor1 + valor2 + valor3 + valor4) / 4;
   printf("A media e: %.2f\n", media );

   return 0;



 }// finalizando a main
