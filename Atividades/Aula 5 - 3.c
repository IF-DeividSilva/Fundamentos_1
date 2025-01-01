/*
@file: aula 5 - 2
@author: Deivid da Silva Galvão
@date: 13 out 2021
@brief: 2) Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano.



*/

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
  int idade;
  int ano_de_nacimento;
  int ano_atual;

  printf("Digite o ano atual:\n");
  scanf("%i\n",&ano_atual);
  printf("Digite o ano que voce nasceu %i\n");
  scanf("%i\n",&ano_de_nacimento );

  idade = ano_atual - ano_de_nacimento;
  printf("Sua idade e: %i\n",idade );

   return 0;

 }
