/*/*
@file: atividade2_aula14
@author: Deivid da Silva Galvao
@date: 29 nov 2021
@brief: 2) Elabore uma função que receba por parâmetro o sexo (caractere) e a 
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso, 
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7

*/

#include <stdio.h>
#include <stdlib.h>
   

/**
* Calculo do peso ideal para homens
* \param altura valor a ser multiplicado1
* \return o peso ideal para a altura digitada
*/
void peso_idealHomem(float altura){
    float peso_ideal;
    peso_ideal = (72.7 * altura) - 58;
    printf("O peso ideal e de: %2.f quilogramas.", peso_ideal);
 }//fecha pesoidealhomem
/**
* Calculo do peso ideal para mulheres
* \param altura valor a ser multiplicado
* \return o peso ideal para a altura digitada
*/
float peso_idealMulher(float altura){
    float peso_ideal;
    peso_ideal = (62.1 * altura) - 44.7;
    printf("O peso ideal e de: %2.f quilogramas.", peso_ideal);


}//fecha peso ideal mulher


int main()
{
    float altura;
    int sexo;
    printf("Digite sua altura:");
    scanf("%f", &altura);
    printf("Digite (1) para feminino e (2)masculino");
    scanf("%i", &sexo);

    if (sexo == 1){
       peso_idealMulher(altura);
    }else{
        peso_idealHomem(altura);
    }
    
    

    return 0;
}//fecha main
