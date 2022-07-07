/**
 * @file convert_maiusculo.c
 * @author Deivid da S Galvao
 * @brief 3) Escreva um programa para converter o conteúdo de um arquivo 
texto em caracteres maiúsculos. O programa deverá ler do usuário o 
nome do arquivo a ser convertido e o nome do arquivo a ser salvo.
 * @version 0.1
 * @date 2022-05-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char constargv[])
{
// ------------- VARIAVEIS -----------
    char arquivo1[30];
    char arquivo2[30];
    FILE* arq;
    FILE* arq2;
    char c;

//------------------- PEGAR O NOME APARTIR DO TECLADO ----------
    setbuf(stdin, NULL);
    printf("Digite o nome do arquivo a ser convertido: ");
    fgets(arquivo1, 30, stdin);
    arquivo1[strcspn(arquivo1,"\n")]='\0';
    setbuf(stdin, NULL);

    setbuf(stdin, NULL);
    printf("Digite o nome do arquivo a ser salvo: ");
    fgets(arquivo2, 30, stdin);
    arquivo2[strcspn(arquivo2,"\n")]='\0';
    setbuf(stdin, NULL);

//abrir o arquivo para leitura com o nome digitado pelo usuario usando a funcao fopen
    arq = fopen(arquivo1, "r");
    //if para verifica se o arquivo abriu corretamente
      if (arq == NULL)
    {
        printf("erro ao abrir o arquivo 1...");
        exit(1);
    }//if

//abrir o arquivo para escrita com o nome digitado pelo usuario usando a funcao fopen
    arq2 = fopen(arquivo2, "w");
      if (arq2 == NULL)
    {
        printf("erro ao abrir o arquivo 2...");
        exit(1);
    }//if

//repetir enquanto o caractere for diferente de eof
    while ((c = fgetc(arq)) != EOF) {
      fputc(toupper(c),arq2);//converte o minusculo para maiusculo com a funcao toupper e copiar para o arq2
    }//while

    //fecha arquivos...
    fclose(arq);
    fclose(arq2);
    return 0;
}//main