

#include <stdio.h>
#include <stdlib.h>

int main(){//declarar as variaveis gasto_por_litro, velocidade e tempo com seus respectivos valores.
  int gasto_por_litro = 12;
  int velocidade = 80;
  float tempo_em_minutos = 35;
  float tempo_em_horas;
  float resultado; //declarar variavel resultado
  tempo_em_horas = tempo_em_minutos / 60;
  resultado =  (velocidade * tempo_em_horas)/gasto_por_litro ; // instruções para o comp. fazer a operação matematica.
  printf("A quantidade de combustivel gasto foi de : %.2f litros. \n",resultado ); //exibir o resultado para o usuario.
  return 0;

}//main  finalizar codigo
