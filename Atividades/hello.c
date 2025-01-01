/*
@file:
@author:
@date:
@brief:

1) Elabore um programa que exiba o seu nome na primeira
linha e o seu e-mail segunda. Em seguida, exiba uma
mensagem solicitando para o usuário pressionar uma tecla.
Quando o usuário pressionar, exiba em uma nova linha o nome
do seu amigo e, em outra, o e-mail dele.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  char letra;

  printf("Deivid da Silva Galvao \n");
  printf("deivid.2002@alunos.utfpr.edu.br");

  printf("Precione qualquer tecla...");
  letra = getchar();

  printf("Amigo: Jarvis Stark \n");
  printf("Jarvis.2021@alunos.utfpr.edu.br");
  return 0;

}//main
