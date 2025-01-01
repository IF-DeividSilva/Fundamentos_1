/*
@file: atividade 3 aula 5
@author: Deivid da Silva Galvao
@date: 13 out 2021
@brief: 3) Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido.
*/

#include <stdio.h>
#include <stdlib.h>

  int main(){ // declarando as variaveis

     float total_de_vendas;
     float salario_base = 1200;
     float salario_bruto;

//solicitando para que o usuario digite o tatal de vendas realizadas
//e pedindo para o computador salvar o valor na variavel total_de_vendas
     printf("Digite o total de vendas:");
     scanf("%f",&total_de_vendas);

//declarando o valor do salario_bruto e em seguida mostrando o resultado para o usuario
     salario_bruto = salario_base + (0.1 * total_de_vendas);
     printf("Seu salario bruto e de :%.2f reais\n",salario_bruto );

return  0;

}// finalizando a main
