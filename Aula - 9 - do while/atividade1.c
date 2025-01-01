/*
@file: aula9_atividade1
@author: Deivid da Silva Galvao
@date: 26 out 2021
@brief: Faça um programa que calcule a média para 5 alunos, sendo que cada aluno tem
2 notas (reais). O programa somente deverá aceitar notas no intervalo fechado
de 0 a 10, solicitando nova digitação quando necessário.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
//declarando as variaveis
float nota1;
float nota2;
float media;
//abrindo um do while para que mesmo que o usuario digite um numero incorreto o computador execute o while ao inves de "pula-lo".
// em seguida salvar nas respectivas variaveis o que o usuario digitar e calcular e exibir a media de cada um dos 5 alunos.

    do{
        printf("Digite a primeira nota do aluno 1: ");
        scanf("%f", &nota1);

    }while(nota1< 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota do aluno 1: ");
        scanf("%f", &nota2);

    }while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("Nota final do aluno 1: %.2f\n", media);


    do{
        printf("Digite a primeira nota do aluno 2: ");
        scanf("%f", &nota1);

    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota do aluno 2: ");
        scanf("%f", &nota2);
    }while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("Nota final do aluno 2: %.2f\n", media);

    do{
        printf("Digite a primeira nota do aluno 3: ");
        scanf("%f", &nota1);

    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota do aluno 3: ");
        scanf("%f", &nota2);
    }while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("Nota final do aluno 3: %.2f\n", media);

    do{
        printf("Digite a primeira nota do aluno 4: ");
        scanf("%f", &nota1);

    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota do aluno 4: ");
        scanf("%f", &nota2);
    }while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("Nota final do aluno 4: %.2f\n", media);

    do{
        printf("Digite a primeira nota do aluno 5: ");
        scanf("%f", &nota1);

    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota do aluno 5: ");
        scanf("%f", &nota2);
    }while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("Nota final do aluno 5: %.2f\n", media);
}//fecha main
