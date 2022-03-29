/*
@file: aula9_atividade2
@author: Deivid da Silva Galvao
@date: 26 out 2021
@brief: 2) Faça um programa que receba valores enquanto eles estiverem no
intervalo de 500 a 1000. Ao receber um valor fora da faixa, o programa deverá
parar de solicitar valores, exibir quantos valores válidos foram digitados e
finalizar.
*/

#include <stdio.h>
#include <stdlib.h>

 int main (){
//declarando as variaveis
float valor;
int quantidade_de_numeros_validos = -1; /* valor da quantidede de numeros validos
igual a -1, pois quando for digitado um numero invalido ele tambem será somado
nessa variavel, logo como o valor é -1 ele somará apenas os valores validos
excluindo o ultimo que seria invalido.
*/
do{/*abrindo um do while para pedir para o usuario digitar um novo valor desde que
  esse valor digitado satisfaça a condicao, e somando a quantidade de valores validos com o ++*/
    printf("Digite um numero entre 500 e 1000: ");
    scanf("%f", &valor);
    quantidade_de_numeros_validos++;

}while(valor >= 500 && valor <= 1000);


if (valor < 500 || valor > 1000) {/*abrindo um if para se o valor for diferente do
  valor previsto ele encerre o programa mostrando a quantidade de valores validos*/
printf("%i\n", quantidade_de_numeros_validos);

}//fecha if


 printf("Programa finalizado\n" );

 return 0;
}//fecha main
