/**
 * @file aloc_dinan_vetor.c
 * @author your name (you@domain.com)
 * @brief 
 *  1) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em 
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o 
imprima.
 * @version 0.1
 * @date 2022-05-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int tam = 0;
    int* ptr_vetor;
    printf("Digite o temanho do vetor:");
    scanf("%d", &tam);

    ptr_vetor = (int*) malloc(tam * sizeof(int));
 
    for (size_t i = 0; i < tam; i++)
    {
        printf("Digite o valor da posicao %i:", i);
        scanf("%d", &ptr_vetor[i]);
    }//for

     for (size_t i = 0; i < tam; i++)
    {
        printf("O valor na posicao [%d] eh: %i \n", i, ptr_vetor[i]);
    
    }//for

    free(ptr_vetor);
    
    return 0;
}//main
