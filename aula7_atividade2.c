/*
@file: aula7_atividade3
@author: Deivid da Silva Galvao
@date:22 out 2021
brief:3) Altere o exercício anterior para receber os 3 valores no
mesmo scanf.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  //declarar as variaveis
  float numero1;
  float numero2;
  float resultado;
  char operacao;
  // mostrar as instrucoes para o usuario e coletando a opcao escolhida por ele
  printf("ola bem vindo a calculadora gamer \n");
   printf("digite a operacao a ser realizada com os um dos operadores (+,-,*,/):");
    scanf("%f%c%f", &numero1,&operacao, &numero2);
    //abrindo um switch para abrir as varias possibilidades de operacoes matemáticas que o codigo pode seguir depedendo da escolha do usuario.
switch (operacao) {
  case '+':
        resultado = numero1 + numero2;
        printf("%.2f + %.2f = %.2f\n", numero1, numero2, resultado);
        break;//fecha o caso 1 (+)

          case '-':
          resultado = numero1 - numero2;
          printf("%.2f - %.2f = %.2f\n", numero1, numero2, resultado);
          break;//fecha o caso 2 (-)

        case '*':
          resultado = numero1 * numero2;
          printf("%.2f * %.2f = %.2f\n", numero1,numero2, resultado);
          break;//fecha o caso 3 (*)

          case '/':
              resultado = numero1 / numero2;
              printf("%.2f / %.2f = %.2f\n", numero1, numero2, resultado);
              break;//fecha o caso 4 (/)

 default://caso o usuario digite um comando errado o codigo pula direto para cá.
 printf("comando invalido, erro497\n");
 break;//fecha o default

  return 0;
}//fecha switch
}//fecha main
