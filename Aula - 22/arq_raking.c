/*
 * @file arq_raking.c
 * @author your name (you@domain.com)
 * @brief 5/ Crie uma estrutura representando um ranking. Essa
estrutura deve conter o nome do jogador e sua pontuação.
Em seguida, escreva um programa que leia os dados de 5
jogadores e os armazene em um arquivo utilizando a
técnica de Dados formatados.
 * @version 0.1
 * @date 2022-05-27
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

    Ranking ranking[5]; 
    FILE* arq;

    //for para pegar os dados do teclado
    for (size_t i = 0; i < 5; i++)
    {
      
      setbuf(stdin, NULL);
      printf("Digite o nome do atleta: ");
      fgets(ranking[i].nome,20, stdin);
      ranking[i].nome[strcspn(ranking[i].nome,"\n")] = '\0';
      setbuf(stdin, NULL);
       
      printf("Digite a pontuacao: ");
      scanf("%d", &ranking[i].pontuacao); 
    }//for
    

    //abre o arquivo no modo escrita de texto
    arq = fopen("ranking.txt", "w" );
    
    if (arq == NULL)
    { 
        printf("Erro  ao abrir o aquivo solicitado.../n");
        exit(1);//erro    

    }//if
    //for para salvar os dados digitados no arquivo de forma formatada com a funcao fprintf
    for (size_t i = 0; i < 5; i++)
    {
        fprintf(arq , "%s ", ranking[i].nome);
        fprintf(arq , " %i \n", ranking[i].pontuacao);
    }//for
    

fclose(arq);//fecha arquivo

    return 0;
}//main
