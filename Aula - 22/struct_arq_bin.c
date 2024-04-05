/**
 * @file struct_arq_bin.c
 * @author your name (you@domain.com)
 * @brief 3) Crie uma estrutura representando um atleta. Essa estrutura 
deve conter o nome do atleta, seu esporte, idade e altura. Agora, 
escreva um programa que leia os dados de cinco atletas e os 
armazene em um arquivo binário.
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//---struct----
typedef struct 
{
    char nome[30];
    char esporte[20];
    int idade;
    float altura;
}Atleta;




int main(int argc, char const *argv[])
{
 // ---variaveis----
  Atleta atleta [5];
  int j = 0;
  FILE* arq;
//for para pegar os dados do teclado
  for (size_t i = 0; i < 5; i++)
  {
    printf("Digite o nome do atleta %i :", j);
    setbuf(stdin, NULL);
    fgets(atleta[i].nome,30, stdin);
    atleta[i].nome[strcspn(atleta[i].nome,"\n")] = '\0';
    
    setbuf(stdin, NULL);
    printf("Digite o esporte do atleta %i :", j);
    fgets(atleta[i].esporte,20, stdin);
    atleta[i].esporte[strcspn(atleta[i].esporte,"\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite a idade do atleta %i :", j);
    scanf("%d", &atleta[i].idade);
    printf("Digite a altura do atleta %i :", j);
    scanf("%f", &atleta[i].altura);

    j++;
  }//for

  //abre o arquivo para escrita binaria 
    arq = fopen("atletas.dat", "wb");
//if para verificar se abriu corretamente
    if  (arq == NULL)
    {
        
        printf("Erro  ao abrir o aquivo solicitado.../n");
        exit(1);//erro    

    }//if

  //escreve de forma binaria os dado da struct no arquivo
    fwrite(atleta, sizeof(Atleta), 5 , arq);

    fclose(arq);//fecha o arquivo
    return 0;
}//main
