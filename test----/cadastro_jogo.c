#include "cadastro_jogo.h"
#include <stdio.h>
#include <stdlib.h>

void cadastro_jogo(Jogos ptr_jogo[], int tam){
    for (size_t i = 0; i < tam; i++)
    {
    printf("Digite o nome do jogo: ");
    fgets(ptr_jogo[i].nome, 20, stdin);
    ptr_jogo[i].nome[strcspn(ptr_jogo[i].nome,"\n")]='\0';
    setbuf(stdin, NULL);
    
    printf("Digite a categoria desse jogo: ");
    fgets(ptr_jogo[i].categoria, 20, stdin);
    ptr_jogo[i].categoria[strcspn(ptr_jogo[i].categoria,"\n")]='\0';
    setbuf(stdin, NULL);

    printf("Digite o ano que o jogo foi lancado: ");
    scanf("%d", &ptr_jogo[i].ano);

    printf("Digite o numero de copias vendidas desse jogo: ");
    scanf("%d", &ptr_jogo[i].num_vendas);

    printf("Digite a desse jogo no metacritic: ");
    scanf("%f", &ptr_jogo[i].nota);

    printf("Digite o tempo em horas que demora para zerar esse jogo: ");
    scanf("%f", &ptr_jogo[i].temp_zerar);

}//for

}//cadastro