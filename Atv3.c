/*
@file:aula 3 atividade 1
@author:Deivid da Silva Galvao
@date:06 out 2021
@brief: 1) Elabore um programa que exiba o seu nome na primeira
linha e o seu e-mail segunda. Em seguida, exiba uma
mensagem solicitando para o usuário pressionar uma tecla.
Quando o usuário pressionar, exiba em uma nova linha o nome
do seu amigo e, em outra, o e-mail dele.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){ // abrir variavel para declarar letra
  char letra;

  printf("Deivid da Silva Galvao \n");//Exibir meu nome para o usuario
  printf("deivid.2002@alunos.utfpr.edu.br"); // exibir email para o usuario

  printf("\n Precione qualquer tecla..."); // Exibir uma instrução para o usuario
  letra = getchar();

  printf("Amigo: Jarvis Stark \n"); // exibir nome do amigo e depois o email dele
  printf("Jarvis.2021@alunos.utfpr.edu.br");
  return 0;

}//main  finalizar codigo
