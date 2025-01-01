/*
 * @gerenciamento_banda.c
 * @author Deivid da Silva Galvao
 * 25 marco de 2022
 * @brief 
   3) Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes 
passos:
 a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve 
ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que 
posição do ranking essa banda está dentre as suas 5 bandas favoritas;
 b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo 
passado. Após criar e preencher, exiba todas as informações das bandas/estruturas. 
 c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu 
programa deve exibir informações da banda cuja posição no seu ranking é a que foi 
solicitada pelo usuário;
 d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com 
esse tipo de música no seu ranking. 
 e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está 
entre suas bandas favoritas ou não;
 f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e 
todas as opções das questões passadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definindo a estrutura bandas
typedef struct 
{
    char nome_banda[51];
    char tipo_de_musica[51];
    int integrantes;
    int posicao;
}Bandas;

void preencher();
void pesquisa_ranking();
void pesquisa_tipo();
void banda_favorita();

/**
* função para verificar se a banda está entre as favoritas
* \param arg1 struct bandas
* \param arg2 tamanho do vetor
* \return não retorna nenhum valor(void)
*/
void banda_favorita(int j, Bandas bandas[]) {
  char pesquisa [51];
  int i;
  printf("Digite uma banda:");
  scanf("%s", pesquisa); 

  for (size_t i = 0; i < 5; i++)
  {
      if (strcmp (bandas[i].nome_banda, pesquisa ) == 0)
      {
          printf(" A banda digitada esta nas suas favoritas na posicao: %d", bandas[i].posicao);
      }else{
          printf("Banda não está entre as favoritas...");
      }//else
      
  }//for
  



}//void banda_favorita*/

/**
* Funcao para verificar as bandas que tocam o tipo musical digitado
* \param arg1 struct bandas
* \param arg2 tamanho do vetor
* \return não retorna nenhum valor(void)
*/
void pesquisa_tipo(int j, Bandas bandas[]){
char pesquisa [51];
int i;
printf("Digite um tipo musical: ");
scanf("%s", pesquisa);
// for para percorer todos os dados das bandas
for (size_t i = 0; i < 5; i++)
{
    if (strcmp (bandas[i].tipo_de_musica, pesquisa ) == 0)//if para encontrar o tipo musical solicitado
    {
        printf("nome da banda: %s", bandas[i].nome_banda);
        printf("tipo de musica da banda:  %s", bandas[i].tipo_de_musica );
        printf("numero de integrantes da banda:  %d", bandas[i].integrantes );
        printf("posicao dessa banda no ranking:  %d", bandas[i].posicao );

    }//if
    
}//for



}// void pesquisa_tipo*/
/**
* Função para pesquisar as bandas dicordo com o rank
* \param arg1 struct bandas
* \param arg2 tamanho do vetor
* \return não retorna nenhum valor(void)
*/
void pesquisa_ranking(int j, Bandas bandas[]){
  int pesquisa = 0;
  int i;
  printf("Digite um numero de 1 até 5 de forma correta: ");
  scanf("%d", &pesquisa);
  
  // for para percorer todos os dados das bandas
  for (size_t i = 0; i < 5; i++)
  {
      if (bandas[i].posicao == pesquisa)//if para encontrar a banda solicitada
      {
        printf("nome da banda: %s", bandas[i].nome_banda);
        printf("tipo de musica da banda:  %s", bandas[i].tipo_de_musica );
        printf("numero de integrantes da banda:  %d", bandas[i].integrantes );
        printf("posicao dessa banda no ranking:  %d", bandas[i].posicao );
      }//if
      
  }//for
  
}//void pesquisa_ranking

/**
* Função para preecher as bandas e exibir
* \param arg1 struct bandas
* \param arg2 tamanho do vetor
* \return não retorna nenhum valor(void)
*/
void preencher(int j, Bandas bandas[]){
    int i;

for ( i = 0; i < j; i++)
{
setbuf(stdin, NULL);
printf("Digite o nome da banda: ");
fgets(bandas[i].nome_banda, 51, stdin);
bandas[i].nome_banda[strcspn(bandas[i].nome_banda,"\n")] = '\0';
setbuf(stdin, NULL);
printf("Digite o tipo de musica da banda: ");
fgets(bandas[i].tipo_de_musica, 51, stdin);
bandas[i].tipo_de_musica[strcspn(bandas[i].tipo_de_musica,"\n")] = '\0';
setbuf(stdin, NULL);
printf("Digite o numero de integrantes da banda: ");
scanf("%d", &bandas[i].integrantes );
printf("Digite a posicao dessa banda no ranking: ");
scanf("%d", &bandas[i].posicao );


}//for
//for para exibir os dados coletados
for (size_t i = 0; i < 5; i++)
{
    printf("nome da banda: %s \n", bandas[i].nome_banda);
    printf("tipo de musica da banda:  %s \n", bandas[i].tipo_de_musica);
    printf("numero de integrantes da banda:  %d \n", bandas[i].integrantes);
    printf("posicao dessa banda no ranking:  %d \n", bandas[i].posicao);
}



}//preenvher


int main()
{
    Bandas bandas[5];
    int escolha;

    do
    {
         printf("-----Menu----\n");
 printf("digite 1 para preecher as bandas\n");
 printf("digite 2 para buscar por ranking\n");
 printf("digite 3 para buscar por tipo musical\n");
 printf("digite 4 para verificar se a banda está entre as favoritas");
 printf("digite 5 para finalizar");
 

 scanf("%d", &escolha);

 switch (escolha)
 {
 case 1:
     preencher(5 , &bandas);
     break;
 case 2:
     pesquisa_ranking(5 , &bandas);
     break;
 case 3:
     pesquisa_tipo(5 , &bandas);
     break;    
  case 4:
     banda_favorita(5 , &bandas);
     break;   
  case 5:
     printf("programa finalizado...");
     break;     
     
 default:
     break;
 }//switch
    } while (escolha == 1 || escolha == 2 || escolha == 3 || escolha == 4 );


    
    return 0;
}//main
