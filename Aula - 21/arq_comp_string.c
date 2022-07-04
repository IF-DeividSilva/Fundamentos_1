/**
 * @file arq_comp_string.c
 * @author Deivid da Silva Galvao
 * @brief  6) Elabore um programa no qual o usuário informe o nome 
de um arquivo texto e uma palavra, e o programa informe o 
número de vezes que aquela palavra aparece
 * @version 0.1
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char constargv[]){
// ------------- VARIAVEIS ----------- 
     FILE* arq;
     char string_comp [50];
     char arquivo[50];
     char c;
     int contador = 0;
     char linha[200];//ONDE IRÁ SALVAR A LINHA INTEIRA
     char* frase_quebrada; //ONDE IREMOS SALVAR CADA PALAVRA DA LINHA INTEIRA

//------------------- PEGAR O NOME APARTIR DO TECLADO ----------
     setbuf(stdin, NULL);
     printf("Digite o nome do arquivo:");
     fgets(arquivo, 50, stdin);
     arquivo[strcspn(arquivo,"\n")]='\0';
     setbuf(stdin, NULL);

     setbuf(stdin, NULL);
     printf("Digite a palavra:");
     fgets(string_comp, 50, stdin);
     string_comp[strcspn(string_comp,"\n")]='\0';
     setbuf(stdin, NULL);

//abrir o arquivo para leitura com o nome digitado pelo usuario usando a funcao fopen
     arq = fopen(arquivo, "r");

     if (arq == NULL){
     printf("Erro  ao abrir o aquivo solicitado.../n");
     exit(1);//erro
     }//if

       while ((c = fgetc(arq)) != EOF) {
       fseek(arq,-1,SEEK_CUR);//VOLTA AO INICIO DA LINHA
       fgets(linha,200,arq);//SALVA A LINHA
       frase_quebrada = strtok(linha,".% ,|\n""");//LINHA QUE IRÁ SER QUEBRADA

        while(frase_quebrada!=NULL){
         if(strcmp(frase_quebrada,string_comp)==0){
           contador++;
         }//if
         frase_quebrada=strtok(NULL,".% ,|\n""");
       }//while_d
      }//while_f
      printf("a palavra digitada aparece %i vezes \n",contador );
    return 0;
}//main