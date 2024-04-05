#include <stdio.h>
#include <stdlib.h>
typedef struct 
 {
    int id;
    char jogador[30];
    char nacionalidade[20];
    int idade;
    int numero_jogador;
    float altura;
    int timeId;


 }Jogador;

typedef struct 
 {
    
   int  id;
   char nome[20];
   int  vitorias;
   int  derrotas;
   int  empates;
   int  pontuacao;
   float media;
   int idLiga;
   Jogador jogador;

 }Time;

typedef struct 
{
   int id;
   char nome[30];
   Time* time;

 }Liga; 
void cadastro_liga(Liga liga[], int tam);