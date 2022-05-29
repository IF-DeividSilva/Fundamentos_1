/**
 * @file endereco_vari.c
 * @author Deivid da Silva Galvao (you@domain.com)
 * 
 * @brief  1) Escreva um programa que contenha duas variáveis inteiras. Compare os
endereços e exiba o endereço e o conteúdo do maior endereço.
 * @version 0.1
 * @date 2022-05-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int a,b = 0;
    int* pta = &a;
    int* ptb = &b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if ( pta > ptb)//if para verificar se o endereco de a é maior que o endereco de b
    //como o endereco é alocado de forma sequencial podemos concluir que o endereco "b" sera sempre maior que o "a" independente do valor que as variaveis assumam 
    {
        printf("O endereco de a: %p com o valor de %d ", pta ,a);

    }else{
         printf("O endereco de b: %p com o valor de %d ", ptb ,b);
}//else
    
    return 0;
}//main
