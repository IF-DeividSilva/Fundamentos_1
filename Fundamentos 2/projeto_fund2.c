/**
 * @file projeto_fund2.c
 * @author your name (you@domain.com)
 * @brief Defina pelo menos duas estruturas que se conversem entre si (pedidos e
produtos, times e jogadores, carros e marca). Cada estrutura deve ter pelo
menos 1 campo de id(contador inteiro) + 6 campos específicos tendo que ter
pelo menos um membro de cada um dos tipos (int, float e string);
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "cadastro_liga.h"
 #include "cadastro_time.h"

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


 void menu(int escolha, int tam, int tam_time, Liga* liga, int quantidade_jogadores){


    while (escolha != 5)
    {
       printf("------ MENU ------ \n");
       printf("[1] - Cadastrar Liga \n");
       printf("[2] - Remover Liga \n");
       printf("[3] - Listar todas as Ligas \n");
       printf("[4] - Pesquisar Liga \n");
       printf("[5] - Finalizar Programa \n");

       do
       {
          printf("Digite sua escolha: ");
          scanf("%d", &escolha);

       switch (escolha)
       {
       case 1:
         printf("Digite quantas ligas serão inseridas: ");
         scanf("%d", &tam); 

         liga = (Liga*) malloc(tam * sizeof(Liga));

         cadastro_liga(liga, tam);

         printf("Deseja cadastrar um time: ");
         printf("[1] Sim \n");
         printf("[2] Não \n");
         scanf("%d", &escolha);
         
         if (escolha == 1)
         {
            printf ("Digite quantos times serão inseridos: ");
            scanf("%d", &tam_time);

            liga->time = (Time*) malloc(tam * sizeof(Time)) ;

            cadastro_time(liga, tam_time, tam);

             printf("Deseja cadastrar os jogadores: ");
             printf("[1] Sim \n");
             printf("[2] Não \n");
             scanf("%d", &escolha);

             if (escolha ==1)
             {
               printf("Um time pode ter no maximo 22 jogadores...");
               printf ("Digite quantos jogadores serão inseridos: ");
               scanf("%d", &quantidade_jogadores);

               
               liga->time = (Time*) malloc(tam * sizeof(Time)) ;
               

             }//
             

         }//if

          break;

       case 2:
          remover(liga, tam);
          break; 

       case 3:
          listar(liga, tam);
          break;

       case 4:
          pesquisar(liga, tam);
          break; 
       case 5:   
         exit(1);

          break;

       }//switch
       } while (escolha != 1 || escolha != 2 || escolha != 3 || escolha != 4 || escolha != -5);
       
    }//while

 }//cadastro



int main(int argc, char const *argv[])
{
    int tam = 0, tam_time = 0, quandidade_jogadores = 0;
    Liga *liga;
    int escolha = 0;

    printf("Bem vindo ao sistema \n");
    
    menu(escolha, tam, tam_time, liga, quandidade_jogadores);

   return 0;
}//main

