/*
@file: atividade7_aula13
@author: Deivid da Silva Galvao
@date: 23 nov 2021
@brief: Exercício 7) Escreva um programa que receba uma sigla de um estado da região 
Sul ou Sudeste e exiba o nome completo do estado correspondente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char estado [3];
    //capturar e armazenar as letras digitadas
    printf("Digite a sigla de um estado do suldeste ou sul do Brasil:");
    fgets(estado, 3 , stdin);
    estado [strcspn(estado , "\n")]= '\0';
     //if e else para verificar o estado digitado
     if (estado[0] == 'R' && estado[1] == 'S')
    {
        printf("%s - Rio Grande do Sul", estado);
    } else if (estado[0] == 'S' && estado[1] == 'C')
    {
        printf("%s - Santa Catarina", estado);
    } else if (estado[0] == 'P' && estado[1] == 'R')
    {
        printf("%s - Parana", estado);
    } else if (estado[0] == 'S' && estado[1] == 'P')
    {
        printf("%s - Sao Paulo", estado);
    } else if (estado[0] == 'M' && estado[1] == 'G')
    {
        printf("%s - Minas Gerais", estado);
    } else if (estado[0] == 'R' && estado[1] == 'J')
    {
        printf("%s - Rio de Janeiro", estado);
    } else if (estado[0] == 'E' && estado[1] == 'S')
    {
        printf("%s - Espirito Santo", estado);
    }


    return 0;
}//fecha main
