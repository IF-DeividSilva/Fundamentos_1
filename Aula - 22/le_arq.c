/**
 * @file le_arq.c
 * @author your name (you@domain.com)
 * @brief  6) Considerando a estrutura ranking do exercício anterior, 
escreva um programa que leia o arquivo gerado contendo 
os dados dos 5 jogadores
 * @version 0.1
 * @date 2022-05-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome [20];
    int pontuacao;
}Ranking;

int main(int argc, char const *argv[])
{
    FILE* arq;
    Ranking ranking[5];
 //abre arquivo no modo leitura de texto
    arq = fopen("ranking.txt", "r");
    
    if (arq == NULL)
    { 
        printf("Erro  ao abrir o aquivo solicitado.../n");
        exit(1);//erro    

    }//if


//for para ler os dados do arquivo com a funcao fscanf e exibir para o usuario
    for (size_t i = 0; i < 5; i++)
    {

       fscanf(arq, "%s ", &ranking[i].nome);
       fscanf(arq, "%d \n", &ranking[i].pontuacao) ;
    
        printf("nome: %s pontuacao: %i \n", ranking[i].nome, ranking[i].pontuacao);
    }
    
    
fclose(arq);//fecha o arquivo
    return 0;
}//main

