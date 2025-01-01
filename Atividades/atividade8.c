/*
@file:aula8_atividade_8
@author: Deivid da Silva Galvao
@date: 24 out 2021
@brief: Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
A segunda opção imprime “Teste2” e mostra o menu novamente.
A terceira opção finaliza o programa.
Caso digite uma opção diferente, deve mostrar uma mensagem de erro e mostrar o menu novamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  //declarando a variavel e exibindo memsagem de boas vindas para o usuario
  int opcoes_do_usuario;
  printf("slv, bem vindo ao app\n");

  while (opcoes_do_usuario) {/*abrindo o while para exibir o menu até o usuario digitar 3
    e teste 1 ou teste 2 caso ele digite 1,2*/
    printf("Menu\n");
    printf("1 - teste 1\n");
    printf("2 - teste 2\n");
    printf("3 - sair do programa\n");
    printf("digite sua o numero correspondene a sua escolha\n");
    scanf("%i", &opcoes_do_usuario);


     if (opcoes_do_usuario == 1) {
      printf("teste 1\n");

    }else{
      if (opcoes_do_usuario == 2) {
        printf("teste 2\n");

    }else{
      if (opcoes_do_usuario < 0 || opcoes_do_usuario > 3) {
        printf("comando invalido\n");


      }else{
        if (opcoes_do_usuario == 3){
          printf("o programa será finalizado\n");
break;//finalizar while
}//fecha if1
}//fecha else1
}//fecha else2
}//fecha else3
}//fecha while
  return 0;

}//fecha main
