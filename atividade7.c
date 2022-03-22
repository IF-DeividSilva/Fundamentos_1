/*
@file:aula8_atividade_7
@author: Deivid da Silva Galvao
@date: 24 out 2021
@brief: Faça um programa que calcule o fatorial de um número a ser digitado.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
  //declarando as variaveis
  int fatorial = 1;
  int numero;
//exibindo as instrucoes para o usuario e salvando o numero digitado por ele.
 printf("bem vindo ao programa\n");
 printf("Gostaria de saber quanto e o fatorial de algum numero?\n");
 printf("digite o numero desejado (maior que zero):");
 scanf("%i", &numero );

 if (numero < 0){//abrindo um if para se o numero digitado for menor que 0, exibir numero invalido.
 printf("numero digitado invalido\n");

}else{//abrindo um else para caso o usuario digite um numero valido.

 while (numero > 0) {//abrindo while para calcular o fatorial do numero digitado.
   fatorial = fatorial * numero;
   numero--;

}//fecha while
printf("o fatorial e de %d \n",fatorial );

}//fecha else
}//fecha main
