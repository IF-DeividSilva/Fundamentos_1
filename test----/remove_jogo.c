#include "cadastro_jogo.h"
#include "remove_jogo.h"
#include <stdio.h>
#include <stdlib.h>

void remove_jogo(Jogos ptr_jogo[], int tam){
    char buscador [20];
    printf("Digite o nome do jogo a ser removido: ");
    fgets(buscador, 20, stdin);
    buscador[strcspn(buscador,"\n")]='\0';
    setbuf(stdin, NULL);
for (size_t i = 0; i < tam; i++)
{
    if (strcmp(buscador,ptr_jogo[i].nome) == 0)
    {
       strcpy(ptr_jogo[i].nome,ptr_jogo[tam].nome);
       strcpy(ptr_jogo[i].categoria,ptr_jogo[tam].categoria);
       ptr_jogo[i].ano = ptr_jogo[tam].ano;
       ptr_jogo[i].nota = ptr_jogo[tam].nota;
       ptr_jogo[i].num_vendas = ptr_jogo[tam].num_vendas;
       ptr_jogo[i].temp_zerar = ptr_jogo[tam].temp_zerar;

       

       
    }//if
}//for

    
    


}//cadastro_jogo