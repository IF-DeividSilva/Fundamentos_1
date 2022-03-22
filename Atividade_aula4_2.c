/*
@file:aula 4 atividade 2
@author:Deivid da Silva Galvao
@date:06 out 2021
@brief: 2)Uma conta de caderneta de poupança foi aberta com um
depósito de R$ 500,00. Imagine que esta conta é remunerada
em 1% de juros ao mês. Qual será o valor da conta após três
meses.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){//declarar as variaveis
  float valor_inicial = 500;
  float valor_final;

  valor_final = pow (0.01 + 1, 3) * valor_inicial;
  printf("valor total apos 3 meses: %.2f\n", valor_final );

  return 0;

}//main  finalizar codigo
