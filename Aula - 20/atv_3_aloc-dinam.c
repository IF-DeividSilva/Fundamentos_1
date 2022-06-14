/**
* @file aloc_dinan_ptr-paran.c
* @author your name (you@domain.com)
* @brief
*     3) Escreva uma função que receba como parâmetro dois vetores via referência( A e B)
e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N
alocado dinamicamente, em que:
C[i] = A[i] * B[i]
 
* @version 0.1
* @date 2022-05-10
*
* @copyright Copyright (c) 2022
*
*/

#include <stdio.h>
#include <stdlib.h>


/**
 * @brief funcao para retornar o ponteiro par o vetor C
 * 
 * @param A 
 * @param B 
 * @param tam_n 
 * @return int* 
 */
int* funcao_ptr(int A[], int B[], int tam_n){
    int* ptr;
    ptr = (int*) malloc(tam_n * sizeof(int));//alocando dinamicamente o ptr
 
    for (int i = 0; i < tam_n; i++)//for para fazer as operacoes que geram o vetor C
    {
       ptr[i] = A[i] * B[i];
    }//for
   
    return ptr ;
 
 
} //ptr
int main(int argc, char const *argv[])
{
   int tam_n;
  
   int* vetor_c;
   int a = 0;
  
   printf("Digite o tamanho dos vetores: ");
   scanf("%d", &tam_n);
   int A[tam_n];
   int B[tam_n];
   for (int i = 0; i < tam_n; i++)
   {
   printf("Digite o valor do vetor A na posicao[%i]", i);
   scanf("%d", &A[i]);
   printf("Digite o valor do vetor B na posicao[%i]", i);
   scanf("%d", &B[i]);
 
}//for
  
   vetor_c = funcao_ptr(A,B, tam_n);//atribuindo vetor_c ao valor retornado da funcao
 
   for (size_t i = 0; i < tam_n; i++)//exibindo os valores do vetor C
   {
  
   printf("%i \n", vetor_c[i]);
   }
  //liberando as memorias
 free(vetor_c);
 free(A);
 free(B);
 
   return 0;
}//main
 
 
