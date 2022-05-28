/**
 * @file endereco_pares.c
 * @author your name (you@domain.com)
 * @brief 
 * 4) Crie um programa que contenha um vetor de inteiros de tamanho 5. 
Utilizando aritmética de ponteiros, leia os dados do teclado e exiba seus 
valores multiplicado por 2. Em seguida, exiba o endereço de memória das 
posições que contém valores pares.

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
    int vet[5];
    int* ptvet = vet;//atribuindo o ponteiro ptvet ao inteiro vet

    for (size_t i = 0; i < 5; i++)
    {
       printf("Digite um valor inteiro: \n");
       scanf("%d", &ptvet[i]);//salvando o valor digitado no teclado no ponteiro que aponta para determinada posicao do vetor
       ptvet[i] = ptvet[i]*2;
       if (ptvet[i] % 2 == 0)
       {
           printf("Valor digitado multiplicado por 2 eh: %d eh par e esta no enderco %p \n", ptvet[i], ptvet+i );
       }//if   
       
    }//for
    



    return 0;
}//main
