/**
 * @file endereco_vetor.c
 * @author your name (you@domain.com)
 * 
 * @brief  2) Crie um programa que contenha um vetor float (tamanho 10). Imprima o
endereço de cada posição desse vetor.
 *  
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
    float a[10];
    float *pta;
    int tam = 0 ;
//for para percorrer todas as posicoes e exibir os endercos dessas possicoes 
for ( tam = 0; tam < 10; tam++)
{   pta = &a[tam];
  printf("O enderco da posicao %d e:  %p \n", tam , pta) ;

}//for



    return 0;
}//main
