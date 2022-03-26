/*
@file: aula7_atividade1
@author: Deivid da Silva Galvao
@date: 20 out 2021
@brief: 1) Crie um programa que forneça um menu com duas
opções. Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

 int main (){
  int opcoes_do_usuario;

  printf("Ola bem vindo ao programa\n");
  printf("1- verifica par/impar \n");
  printf("2- verifica se maior ou menor de idade\n");
  printf("digite 1 ou 2 para processeguir\n");
  scanf("%i", &opcoes_do_usuario);

  switch (opcoes_do_usuario) {
    case "1" :
    printf("voce escolheu a opcao 1\n");

    int numero;
    int confirmacao;
 //solicitar para que o usuario digite um numero e em seguida armazenar o numero na memoria.
   printf("Digite um numero inteiro:");
   scanf("%i", &numero );
 // declarar a formula para confirmacao se o numero é ou não par e em seguida mostrar o resultado obtido para o usuario
   confirmacao = numero % 2;

   if (confirmacao == 0 ) {
     printf("O numero digitado e par:\n");


 } else {
   printf("O numero digitado e impar\n");

   break;

   case "2" :
   int idade;
   printf("Voce escolheu a opcao 2\n");
   printf("digite sua idade:");
   scanf("%i", &idade);

   switch (idade){
     case "idade": > 18


   }
   }
 } //fecha else
}//fecha main
