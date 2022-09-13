/**
 * @file le_soma_arq.c
 * @author your name (you@domain.com)
 * @brief 
 * 2) Elabore um programa que leia um arquivo binário contendo
100 números. Mostre na tela a soma desses números.
 * @version 0.1
 * @date 2022-05-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    FILE* arq_w;
    FILE* arq_r;
    int num[100];
    int soma  = 0;


        arq_r = fopen("arq_num.dat", "rb");

     if (arq_r == NULL)
    {
        printf("Erro  ao abrir o aquivo solicitado.../n");
        exit(1);//erro    

    }//if

         arq_w = fopen("soma1.dat", "wb");
     if (arq_w == NULL)
    {
        
        printf("Erro  ao abrir o aquivo solicitado.../n");
        exit(1);//erro    
    }//if
       
       fread(num, sizeof(int), 100, arq_r);
       for (size_t i = 0; i < 100; i++)
       {
           soma = soma + num[i];
       }//for
       fclose(arq_r);
       fwrite(&soma, sizeof(int), 1, arq_w);
       fclose(arq_w);   
       printf("a soma dos numeros eh: %d", soma);
       
  //  printf("a soma dos numeros eh %d");

    return 0;
}//main