/**
 * @file arq_conta_letra=.c
 * @author Deivid da Silva Galvao
 * @brief  5) Elabore um programa para calcular e exibir o número de
vezes que cada letra ocorre dentro de um arquivo texto.
Ignore as letras com acento. O usuário deverá informar o
nome do arquivo.

 * @version 0.1
 * @date 2022-05-22
 *
 * @copyright Copyright (c) 2022
 *
 */


#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
 
int main()
{
// ------------- VARIAVEIS -----------   
    char arquivo[51];
    FILE* arq;
    char c;
    int alfabeto[26];
    char letra[26];

//------------------- PEGAR O NOME APARTIR DO TECLADO ----------
  setbuf(stdin, NULL);
  printf("Digite o nome do arquivo: ");
  fgets(arquivo, 51, stdin);
  arquivo[strcspn(arquivo,"\n")]='\0';
  setbuf(stdin, NULL);

//abrir o arquivo para leitura com o nome digitado pelo usuario usando a funcao fopen
    arq = fopen(arquivo, "r");
     if (arq == NULL){
     printf("Erro  ao abrir o aquivo solicitado.../n");
     exit(1);//erro
}//if
//for  para zerar o vetor alfabeto
    for (size_t i = 0; i < 26; i++)
    {
        alfabeto[i] = 0;
    }//for

//while para repetir enquanto c for diferente de eof
     while ((c = fgetc(arq)) != EOF) {
       c=tolower(c);//converte tudo para minusculo
       //switch para verificar casos de repeticao e somar 1 quando ocorrer 
       switch (c) {
         case 'a':
          alfabeto[0]++; 
          letra [0] = 'a';
         break;

         case 'b':
          alfabeto[1]++;
          letra [1] = 'b';
         break;

         case 'c':
          alfabeto[2]++;
          letra [2] = 'c';
         break;

         case 'd':
          alfabeto[3]++;
          letra [3] = 'd';
         break;

          case 'e':
          alfabeto[4]++;
          letra [4] = 'e';
         break;

         case 'f':
          alfabeto[5]++;
         break;

         case 'g':
          alfabeto[6]++;
         break;

         case 'h':
          alfabeto[7]++;
         break;

           case 'i':
          alfabeto[8]++;
         break;

         case 'j':
          alfabeto[9]++;
         break;

         case 'k':
          alfabeto[10]++;
         break;

         case 'l':
          alfabeto[11]++;
         break;

          case 'm':
          alfabeto[12]++;
         break;

         case 'n':
          alfabeto[13]++;
         break;

         case 'o':
          alfabeto[14]++;
         break;

         case 'p':
          alfabeto[15]++;
         break;

         case 'q':
          alfabeto[16]++;
         break;

         case 'r':
          alfabeto[17]++;
         break;

         case 's':
          alfabeto[18]++;
         break;

         case 't':
          alfabeto[19]++;
         break;

          case 'u':
          alfabeto[20]++;
         break;

         case 'v':
          alfabeto[21]++;
         break;

         case 'w':
          alfabeto[22]++;
         break;

         case 'x':
          alfabeto[23]++;
         break;

           case 'y':
          alfabeto[24]++;
         break;

         case 'z':
          alfabeto[25]++;
         break;

       }//switch
  }//while
   fclose(arq);//fecha arq
//for para exibir as letras e o numero suas respectivas incidencias
    for (size_t i = 0; i < 26; i++)
    {
        if (alfabeto[i] != 0)
        {
        printf("existem %d %c \n", alfabeto[i], letra[i]);
        }
        
    }//for

  return 0;
}//main
