/**
 * @file arq_num_palavras.c
 * @author Deivid Da Silva Galvao
 * @brief  4) Crie um programa para calcular e exibir o número de palavras 
contido em um arquivo texto. O usuário deverá informar o nome do 
arquivo. 
 * @version 0.1
 * @date 2022-05-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
// ------------- VARIAVEIS -----------  
    char arquivo[51];
    FILE* arq; 
    char c;
    int contador = 0;

//------------------- PEGAR O NOME APARTIR DO TECLADO ----------
  setbuf(stdin, NULL);
  printf("Digite o nome do arquivo: ");
  fgets(arquivo, 51, stdin);
  arquivo[strcspn(arquivo,"\n")]='\0';
  setbuf(stdin, NULL);

//abrir o arquivo para leitura com o nome digitado pelo usuario usando a funcao fopen
    arq = fopen(arquivo, "r");
    //verifica erro
     if (arq == NULL){
     printf("Erro  ao abrir o aquivo solicitado.../n");
     exit(1);//erro
     }

//if para tratar casos de arquivos vazios...
     if ((c = fgetc(arq)) != EOF)
     {
       contador++;
     }

//repetir enquanto o caractere for diferente de eof     
    while ((c = fgetc(arq)) != EOF) 
    {
      //if o caracter for um marcador de final de palavra soma 1 no contador
      if (c == '\n' || c == '"' || c == ' ' || c == ',' || c == '.' || c == '%')
      {
      contador++;
      }//if
      
    }//while

    //fecha arquivos  e exibe o contador...
    fclose(arq);
    printf("%i", contador);
 return 0;

}//main