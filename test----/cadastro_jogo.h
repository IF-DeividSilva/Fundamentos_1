#include <stdio.h>
#include <stdlib.h>

typedef struct{
char nome[20];
char categoria[20];
float nota;
int ano;
int num_vendas;
float temp_zerar;

}Jogos;

void cadastro_jogo(Jogos ptr_jogo[], int tam);