#include "cadastro_liga.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * @brief funcao para fazer o cadastro das ligas
 * 
 * @param liga 
 * @param tam 
 */

void cadastro_liga(Liga liga[], int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
      if (i > 0)
      {
      liga[i].id = liga[i-1].id++;
      }else{
          liga[i].id = liga[i].id++;
      }//else
        

      printf("Digite o nome da liga: ");
      fgets(liga[i].nome, 20, stdin);
      liga[i].nome[strcspn(liga[i].nome,"\n")]='\0';
      setbuf(stdin, NULL); 

    }//for
}//for