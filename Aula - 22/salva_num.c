/**
 * @file salva_num.c
 * @author Deivid da silva galvao
 * @brief 1) Faça um programa que gere 100 números aleatórios. Esse
programa deverá, em seguida,armazenar esses números em um
arquivo binário.
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
//----VARIAVEIS----
    int num[100];
    FILE* arq;
//----For para gerar os numeros aleatorios e salvar no vetor num
    for (size_t i = 0; i < 100; i++)
    {
        num[i] = rand() % 1001;
    }//for

// Abrindo o arquivo pra escrita binaria    
    arq = fopen("arq_num.dat", "wb");

 //verifica se abriu corretamente   
    if (arq == NULL)
    {
        printf("Erro  ao abrir o aquivo solicitado.../n");
        exit(1);//erro    

    }//if
 //Escreve os valores do vetor num no arquivo de forma binaria   
    fwrite(num, sizeof(int), 100, arq);
    fclose(arq);//fecha arquivo

    return 0;
}//main
