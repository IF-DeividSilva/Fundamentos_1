/**
* @file conta_linha.c
* @author Deivid da S. Galvao
* @brief
* 1) Escreva um programa que leia do usuário o nome de um arquivo
texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.
* @version 0.1
* @date 2022-05-18
*
* @copyright Copyright (c) 2022
*
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char const *argv[])
{
   // ------------- VARIAVEIS -----------
  char busca_arquivo[51];
  FILE *arq;
  char c;
  int linha =0;
  char testador = '\n';
  char texto[300];
 
 //------------------- PEGAR O NOME APARTIR DO TECLADO ----------
  setbuf(stdin, NULL);
  printf("Digite o nome do arquivo a ser pesquisado: ");
  fgets(busca_arquivo, 51, stdin);
  busca_arquivo[strcspn(busca_arquivo,"\n")]='\0';
  setbuf(stdin, NULL);
 
 //abrir o arquivo com o nome digitado pelo usuario usando a funcao fopen
   arq = fopen( busca_arquivo, "r");
 
 //if para verifica se o arquivo abriu corretamente
   if (arq == NULL){
   printf("Erro  ao abrir o aquivo solicitado.../n");
   exit(1);//erro
   }//if

// if para verificar se o caracter é igual o "\n" q eh um indicador de outra linha    
   if ((c = fgetc(arq)) != EOF)
   {
       linha++;
   }
   
//while para percorrer todos os caracteres e somar  as linhas
  while(fread (&c, sizeof(char), 1, arq)) {
            if(c == testador) {
                linha++;
            }
        }  
   printf("o arquivo aberto possui %i linhas", linha);
   fclose(arq);//fecha o arquivo
 
   return 0;
}//main
 

