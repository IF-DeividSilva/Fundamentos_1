/**
 * @file 4-aloc_matriz.c
 * @author your name (you@domain.com)
 * @brief 
 *  4) Escreva uma função que receba como parâmetro um valor L e um valor C e retorne 
o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas. 
Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.

 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief funcao que retorna um ponteiro para uma matriz alocada dinamicamente
 * 
 * @param L 
 * @param C 
 * @return int** 
 */
int** funcao_matrix(int L, int C){
//alocando dinamicamente o ponteiro da linhas da matriz
    int** ptr_matriz  = (int**) malloc(L * sizeof(int*));

//alocando dinamicamente as colunas da matriz
    for (int i = 0; i < C; i++)
    {
    int* ptr_matriz = (int*) malloc(C * sizeof(int));
}//for
    
return ptr_matriz;



}//matriz

int main(int argc, char const *argv[])
{
    int L;
    int C;
    int** matriz;

    printf("Digite quantas linhas: ");
    scanf("%d", &L);
    
    printf("Digite quantas colunas: ");
    scanf("%d", &C);

    matriz = funcao_matrix(L,C);//atribuindo o valor retornado pela funcao a variavel matriz

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = 0;
            printf("[%i][%i]: %i  ", i, j, matriz[i][j]);
        }//for2
    printf("\n");
    }//for1
    

    return 0;
}//main
