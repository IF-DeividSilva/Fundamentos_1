/**
* @file aloc_dinan_ptr-paran.c
* @author your name (you@domain.com)
* @brief
*  2) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado.
* @version 0.1
* @date 2022-05-10
*
* @copyright Copyright (c) 2022
*
*/
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief funcao que aloca dinamicamente um ponteiro void para vetor de tamanho n
 * 
 * @param n 
 * @return ponteiro void*  
 */
void* funcao_retorna_ponteiro(int n){
   void* ptr_vetor;
   if (n <= 0)
   {
      ptr_vetor = NULL; 
      return ptr_vetor;
  
   }if(n > 0){
   ptr_vetor =  malloc(n);
   return  ptr_vetor;
   }//else
 
}//retorna ponteiro
int main(int argc, char const *argv[])
{
   int n = 0;
   void* vetor;
  
   printf("Digite o valor de n: ");
   scanf("%d", &n);
  
   vetor = funcao_retorna_ponteiro(n);
   //verifica se o ponteiro é nulo ou nao
    if (vetor == NULL)
    {
        printf("Vetor nulo...valor de n incorreto...");
    }if(vetor != NULL){
 
   
    for (int i = 0; i < n; i++)
   {
       printf("posicao %i, endereco %p \n", i, vetor+i);
   }//for
}
  free(vetor);//libera a regiao de memoria ocupada pelo vetor
   return 0;
}//main
 
 

