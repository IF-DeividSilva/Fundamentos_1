/**
 * @file pont_for_pont.c
 * @author Deivid da Silva Galvao (you@domain.com)
 * @brief 
 * 6) Considere a seguinte declaração:
 int a, *b, **c, ***d;
 Escreva um programa que receba o valor de a, calcule e exiba:
 O dobro do valor a, utilizando o ponteiro b
 O triplo do valor a, utilizando o ponteiro c
 O quadruplo do valor a, utilizando o ponteiro d

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
    int a=0;
    int* b = &a;
    int** c = &b;
    int*** d = &c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    (*b)= (*b)* 2;//dobrando o valor contido na variavel "a" apartir do ponteiro b
    printf("o dobro de a eh: %d e esta na posicao de memoria: %p \n", *b, b);

    (**c) = ((**c)/2) * 3;//triplicando o valor contido na variavel "a" apartir do ponteiro "c" que aponta para o ponteiro "b" que aponta para variavel "a"
    printf("o triplo de a eh: %d e esta na posicao de memoria: %p \n", **c, c);

    (***d) = ((***d)/3) * 4;//quadrupicando o valor da variavel "a" apartir do ponteiro "d" que aponta para o ponteiro "c" que aponta para o "b" que aponta para variavel "a"
    printf("o quadruplo de a eh: %d e esta na posicao de memoria: %p \n", ***d, d);

  

    return 0;
}//main
