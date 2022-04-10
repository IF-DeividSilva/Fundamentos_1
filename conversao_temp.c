/*
 * @conversao_temp.c
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


/*typedef struct 
{
    int hora;
    int minuto;
    int segundo;
}horario;
*/

/**
* Descrição da função
* \param arg1 endereco do total de segundos digitado pelo usuario
* \param arg2 endereco da variavel hora
* \param arg3 endereco da variavel minuto
* \param arg2 endereco da variavel segundo
* \return não retorna nenhum valor(void)
*/
void converteHora( int* total_segundos ,int* hora, int* minuto, int* segundo ){
   int resto;
   *hora = *total_segundos / 3600;
   resto = *total_segundos  % 3600;
   *minuto = resto / 60;
   *segundo = resto % 60;
   
   printf(" %.2d: %.2d: %.2d", *hora , *minuto, *segundo);



}//converteHora


int main(int argc, char const *argv[])
{
    //horario tempo;
    int hora;
    int minuto; 
    int segundo;
    int total_segundos;
    

    printf("Digite um numero inteiro: ");
    scanf("%d", &total_segundos);

    converteHora(&total_segundos, &hora, &minuto, &segundo);
    return 0;
}//main

/*
atoi -> ascll to int
atof -> ascll to float
*/