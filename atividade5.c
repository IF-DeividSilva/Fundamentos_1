/*
@file: aula8_atividade5
@author: Deivid da Silva Galvao
@date: 24 out 2021
@brief: 5) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá repetir esse
procedimento para 10 números, um de cada vez.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
  //declarando as variaveis
  int numero;
  int verificacao = 1;
  printf("Digite um numero real:");//dando uma instrucao para o usuario

  while (numero) {//abrindo o while para coletar o numero digitado pelo usuario e calcular o quadrado dele .
    while (verificacao <= 10) {//abrindo outro while para verificar se o usuario ja digitou 10 numeros e quando digitar encerrar o programa.
    scanf("%i", &numero);
    verificacao++;
    numero = numero * numero;
    printf("valor: %i\n",numero);



  }//fecha while1
   break;//fecha o loop do while 1
 }//fecha while 2
  return 0;
}//fecha main
