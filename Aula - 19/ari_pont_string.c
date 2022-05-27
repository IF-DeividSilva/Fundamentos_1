/**
 * @file ari_pont_string.c
 * @author Deivid da Silva (you@domain.com)
 * @brief 
 *  5) Elabora uma função que receba duas strings como parâmetros e 
verifique se a segunda string está dentro da primeira. Para isso, utilize 
apenas aritmética de ponteiros.

 * @version 0.1
 * @date 2022-05-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * @brief funçao para verificar se a string 1 esta dentro da string 2
 * 
 * @param string1 
 * @param string2 
 * @return int 
 */
int verificar_String(char* string1,char* string2){
  //for para percorrer as posicoes do endereco das strings enquanto o valor da posicao for diferente de \0
  for (;*string2 != '\0' ;string1++,string2++) {
    if(*string2 == *string1){//if para verificar se o caracter do endereco em questao sao iguais nas 2 strings
     // printf("%c",*string2);
    }else{//caso nao forem iguais retornar 0
      return 0;
    }//else
  }//for
  return 1;//caso forem iguais retornar 1
}//verificar_String

int main(){
  char string1[51];
  char string2[51];
  //char string3[21]={"World Hello"};
  int resultado;

 setbuf(stdin, NULL);
 printf("Digite a palavra 1: ");
 fgets(string1, 51, stdin);
 string1[strcspn(string1,"\n")]='\0';
 setbuf(stdin, NULL);

 printf("Digite a palavra 2: ");
 fgets(string2, 51, stdin);
 string2[strcspn(string2,"\n")]='\0';
 setbuf(stdin, NULL);


  char*ptr_1=string1;//ponteiro que recebe o endereco da string 1
  char*ptr_2=string2;//ponteiro que recebe o endereco da string 2

  resultado = verificar_String(ptr_1,ptr_2);
  //caso a funcao retorne 1 a string 1 esta dentro da string 2 caso contrario nao...
  if(resultado == 1){
    printf("\nA String 1 está dentro da String 2\n");
  }else{
    printf("\nA String 1 não está dentro da String 2\n");
  }
  return 0;
}//main