#include "cadastro_time.h"
#include <stdio.h>

void cadastro_time(Liga liga[], int tam_time, int tam){
    
   char comparador[20];
   int n,i = 1;

      do
      {
          i--;
    for ( ; i < tam_time; i++)
    {
      printf("Digite o nome da liga do time a ser cadastrado: ");
      fgets(comparador, 20, stdin);
      comparador[strcspn(comparador,"\n")]='\0';
      setbuf(stdin, NULL); 

      n=0;
   
    
      if(strcmp(comparador,liga[i].nome)== 0){
      liga[i].time[i].idLiga= i;    
      printf("Digite o nome do time: ");
      fgets(liga[i].time[i].nome, 20, stdin);
      liga[i].time[i].nome[strcspn(liga[i].time[i].nome,"\n")]='\0';
      setbuf(stdin, NULL); 

      printf("Digite o numero de vitorias do time: ");
      scanf("%d", &liga[i].time[i].vitorias);
      
      printf("Digite o numero de derrotas do time: ");
      scanf("%d", &liga[i].time[i].derrotas);

      printf("Digite o numero de empates do time: ");
      scanf("%d", &liga[i].time[i].empates);
      
      printf("Digite a pontuação do time: ");
      scanf("%d", &liga[i].time[i].pontuacao);

      printf("Digite a media de gols do time: ");
      scanf("%d", &liga[i].time[i].media);


    if (i > 0)
      {
      liga[i].time[i].id = liga[i].time[i].id++;
      }else{
          liga[i].time[i].id = liga[i].time[i].id++;
      }//else
        
      n=0;


      }else{
        n = 1;
        printf("Liga digitada não existe, tente novamente...");
      }//else
          
    }//for
      } while (n != 0);
          
    
}//cadastro time