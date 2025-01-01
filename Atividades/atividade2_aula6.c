/*
@file: aula6_atividade3
@author: Deivid da Silva Galvao
@date:18 out 2021
@brief:3) Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).
 Para isso, lembre-se da fórmula de Báskara:

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
//declarar as variavies a,b,c
  float a;
  float b;
  float c;
//exibir as instruções para o usuario digitar os valores das variaveis
  printf("Digite o valor de a:");
   scanf("%f", &a);
  printf("Digite o valor de b:");
   scanf("%f", &b);
  printf("Digite o valor de c:");
   scanf("%f", &c);
// declarando as variaveis das formulas de delta e baskara
   float valor_da_raiz1;
   float valor_da_raiz2;
   float valor_do_delta;

  valor_do_delta = (b*b)-4*a*c;
  valor_da_raiz1 = (-b + sqrt (valor_do_delta)) /2*a;
  valor_da_raiz2 = (-b - sqrt (valor_do_delta)) /2*a;
/* condição se o valor de delta for maior q 0 as raizes não sao reais
e se for maior para o computador exibir o resultado para o usuario.
*/
   if (valor_do_delta < 0) {
     printf("Essa equacao nao possui raizes reais\n");

  }else{
    printf("valor da raiz 1: %.2f\n", valor_da_raiz1);
    printf("valor da raiz 2: %.2f\n", valor_da_raiz2);

    return 0;





  }//fecha else



}//fecha main
