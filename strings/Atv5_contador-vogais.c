/*
@file: atividade5_aula13
@author: Deivid da Silva Galvao
@date: 23 nov 2021
@brief: Exercício 5) Faça um programa que receba uma
frase e depois exiba quantas vezes cada vogal aparece. 
Ele deve contar considerando o tamanho da String.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    int vogal_a = 0;
    int vogal_e = 0;
    int vogal_i = 0;
    int vogal_o = 0;
    int vogal_u = 0;
    char frase [21];
    printf("Digite uma frase:");
    fgets(frase, 21, stdin);
    frase [strcspn(frase, "\n")]='\0';
    
    for ( i = 0; i < 21; i++)
    {
    if (frase[i] == 'a' || frase[i] == 'A' ){
    vogal_a++;
    }
    if (frase[i] == 'e' || frase[i] == 'E' ){
    vogal_e++;
    }
    if (frase[i] == 'i' || frase[i] == 'I' ){
    vogal_i++;
    }
    if (frase[i] == 'o' || frase[i] == 'O' ){
    vogal_o++;
    }
    if (frase[i] == 'u' || frase[i] == 'U' ){
    vogal_u++;
    }

}//for1
    
    printf("Quantidade de vogais digitadas: \n");
    printf("Letra A : %5i \n", vogal_a);
    printf("Letra E : %5i \n", vogal_e);
    printf("Letra I : %5i \n", vogal_i);
    printf("Letra O : %5i \n", vogal_o);
    printf("Letra U : %5i \n", vogal_u);

    return 0;

}//main