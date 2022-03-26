/*
@file: aula7_atividade1
@author: Deivid da Silva Galvao
@date: 20 out 2021
@brief: 1) Crie um programa que forneça um menu com duas
opções. Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

 int main (){
   //declarando as variaveis
  int opcoes_do_usuario;
  int idade;
//mostrando o menu de opsoes para o usuario e em seguida coletando a opsao digitada por ele.
  printf("Ola bem vindo ao programa\n");
  printf("1- verifica par/impar \n");
  printf("2- verifica se maior ou menor de idade\n");
  printf("digite 1 ou 2 para processeguir\n");
  scanf("%i", &opcoes_do_usuario);
// abrindo um switch para atribuir varios caminhos que o codigo deve seguir depedendo da opscao escolhida pelo usuario.

  switch (opcoes_do_usuario) {
    case 1 :
    printf("voce escolheu a opcao 1\n");

    int numero;
    int confirmacao;
 //solicitar para que o usuario digite um numero e em seguida armazenar o numero na memoria.
   printf("Digite um numero inteiro:");
   scanf("%i", &numero );
 // declarar a formula para confirmacao se o numero é ou não par e em seguida mostrar o resultado obtido para o usuario
   confirmacao = numero % 2;

   if (confirmacao == 0 ) {
     // imprimindo o resultado para o usuario
     printf("O numero digitado e par:\n");


 } else {
    // imprimindo o resultado para o usuario
   printf("O numero digitado e impar\n");

   break; //fechando o caso 1

   case 2 :
   // dando as novas instrucoes para o usuario caso ele escolha essa opcao.
   printf("Voce escolheu a opcao 2\n");
   printf("digite sua idade:");
   scanf("%i", &idade);
  //abrindo um if else dentro do case 2 para verificar se o usuario é ou não maior de idade.
   if (idade >= 18) {

     printf("voce e maior de idade\n");

   } else{
       if (idade < 18 && idade > 0) {
         printf("voce e menor de idade\n");

    } else{
      if (idade < 0){
      printf("idade invalida\n");
    break;//fecha o caso 2

    default://o codigo seguira para cá caso o usuario faça algum comando incorreto
     printf ("comando invalido, erro497\n");
    break;// fecha o default






      }//fecha if 1
    }//fecha if 2
    return 0;
  }//fecha else 1
 }//fecha else 2
}//fecha switch
}//fecha main
