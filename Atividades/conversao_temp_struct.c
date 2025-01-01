/*
 * @conversao_temp_struct.c
 * @author Deivid da Silva Galvao
 * 25 marco de 2022
 * @brief 
   1) Escreva um programa que receba um número inteiro
representando a quantidade total de segundos e, usando
passagem de parâmetros por referência, converta a
quantidade informada de segundos em Horas, Minutos e
Segundos. Imprima o resultado da conversão no formato
HH:MM:SS. Utilize o seguinte protótipo da função:

void converteHora(int total_segundos, int* hora, int* min, int* seg)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definindo uma estrutura para as variaveis de tempo
typedef struct 
{
    int hora;
    int minuto;
    int segundo;
    int total_segundos;
}horario;

/**
* Descrição da função
* \param arg1 endereco das variaveis de tempo que estao na struct horario 
* \return não retorna nenhum valor(void)
*/
void converteHora( horario* tempo ){
   int resto;
   tempo->hora = tempo->total_segundos / 3600;
   resto = tempo->total_segundos  % 3600;
   tempo->minuto = resto / 60;
   tempo->segundo = resto % 60;
   
   printf(" %.2d: %.2d: %.2d", tempo->hora , tempo->minuto, tempo->segundo);



}//converteHora


int main(int argc, char const *argv[])
{
    horario tempo;
    
    

    printf("Digite um numero inteiro: ");
    scanf("%d", &tempo.total_segundos);

    converteHora(&tempo);
    return 0;
}//main

/*
atoi -> ascll to int
atof -> ascll to float
*/