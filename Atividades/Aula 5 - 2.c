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

 int main(){ // declarando as variaveis idade ano de nascimento e ano atual
  int idade;
  int ano_de_nacimento;
  int ano_atual;
 // solicitando ao usuario que digite o ano atual e em seguida o ano de nascimento
// e dizendo para o computador salvar os valores em nas varivais declaradas acima
  printf("Digite o ano atual:");
  scanf("%i",&ano_atual);
  printf("Digite o ano que voce nasceu:");
  scanf("%i",&ano_de_nacimento);
// atribuindo o valor da variavel idade e em seguida mostrando o resultado para o usuario
  idade = ano_atual - ano_de_nacimento;
  printf("Sua idade e: %i\n",idade );

   return 0;

 }
