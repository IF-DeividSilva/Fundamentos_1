/**
 * @file edereco_matriz.c
 * @author your name (you@domain.com)
 * @brief  3) Crie um programa que contenha uma matriz (3x3) de float. Imprima o 
endereço de cada posição dessa matriz.
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
    float matrix [3][3];
    float* ptmatrix = NULL;
//for para percorrer os campos da matriz exinbindos os endereços de cada posicao
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
        
         ptmatrix = &matrix[i][j];
         printf("O enderco da posicao [%d][%d] e:  %p \n", i, j , ptmatrix);    
        
        }//forj
    }//fori
    

    return 0;
}//main
