/**
 * @file junta_arq.c
 * @author Deivid da S Galvao
 * @brief 2) Escreva um programa que leia do usuário os nomes de dois 
arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos 
dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do 
segundo).
 * @version 0.1
 * @date 2022-05-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

//-------- VARIAVEIS -----------
    FILE* arq;
    FILE* arq3;
    char arquivo1[30];
    char arquivo2[30];
    char c;

//------------------- PEGAR O NOME APARTIR DO TECLADO ----------
    setbuf(stdin, NULL);
    printf("Digite o nome do arquivo a ser pesquisado: ");
    fgets(arquivo1, 30, stdin);
    arquivo1[strcspn(arquivo1,"\n")]='\0';
    setbuf(stdin, NULL);

    setbuf(stdin, NULL);
    printf("Digite o nome do arquivo a ser pesquisado: ");
    fgets(arquivo2, 30, stdin);
    arquivo2[strcspn(arquivo2,"\n")]='\0';
    setbuf(stdin, NULL);


//abrir os arquivos com os nomes digitados pelo usuario usando a funcao fopen
    arq = fopen(arquivo1, "r");

 //if para verifica se o arquivo abriu corretamente    
    if (arq == NULL)
    {
        printf("erro ao abrir o arquivo...");
        exit(1);//erro
    }//if

 //if para verifica se o arquivo abriu corretamente
    arq3 = fopen("arquivo3.txt", "w");
    if (arq3 == NULL)
    {
        printf("erro ao abrir o arquivo...");
        exit(1);//erro
    }//if
    
//while para repetir enquanto o caractere for diferente de eof
  while (fscanf(arq, "%c", &c) != EOF)
    {
        fprintf(arq3, "%c", c);//copiar o caractere do arq para o arq3
       // printf("%c", c);
    }//while
       fclose(arq);//fecha o arq

 //abrir o arquivo com o nome digitado pelo usuario usando a funcao fopen
    arq = fopen(arquivo2, "r");
    //if para verifica se o arquivo abriu corretamente
    if (arq == NULL)
    {
        printf("erro ao abrir o arquivo...");
        exit(1);
    }//if

    //while para repetir enquanto o caractere for diferente de eof
    while (fscanf(arq, "%c", &c) != EOF)
    {
        fprintf(arq3, "%c", c);//copiar o caractere do arq para o arq3
    
    }//while
    //fechar os arquivos...
       fclose(arq);   
       fclose(arq3);   

    return 0;
}//main
