/**
 * @file arq_atleta-4.c
 * @author Deivid da Silva Galvao
 * @brief  4) Considerando a estrutura atleta do exercício anterior, escreva 
um programa que leia um arquivo binário contendo os dados de 
cinco atletas. Calcule e exiba o nome do atleta mais alto e do 
mais velho.
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
    char nome[30];
    char esporte[20];
    int idade;
    float altura;
}Atleta;



int main(int argc, char const *argv[])
{
  //----variaveis----
    FILE* arq;
    int altura[5];
    char nome[30];
    Atleta atleta[5];
    int velho = 0;
    int alto = 0;

  //abre o arquivo para leitura binaria
    arq = fopen("atletas.dat", "rb"); 
  //if para verificar se abriu corretamente  
    if  (arq == NULL)
    {
        
        printf("Erro  ao abrir o aquivo solicitado.../n");
        exit(1);//erro    

    }//if

  //for para percorrer todas as posicoes da "struct do arquivo" e salvar na struct do programa
    for (size_t i = 0; i < 5; i++)
    {
      fread(atleta, sizeof(Atleta), 5 , arq);
}//for
//for para percorrer todas as posicoes da struct e o if para verificar o atleta mais velho e mais alto
  for (size_t i = 0; i < 5; i++)
  {
    if (atleta[i].altura > alto )
    {
      alto = i;
    }//if

    if (atleta[i].idade > velho)
    {
      velho = i;
    }//if
    
    
  }//for

fclose(arq);//fecha arquivo 
//exibe para o usuario o maior e o mais velho
  printf("o mais alto eh o %s \n", atleta[alto].nome);
  printf("o mais velho eh o %s \n", atleta[velho].nome);

  

 return 0;
}//main