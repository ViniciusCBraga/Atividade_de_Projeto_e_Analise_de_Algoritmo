#include <stdio.h>
#include<stdlib.h>

#define SIZE 3

void preencherMatriz(int matriz[SIZE][SIZE]) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++)
        {
            matriz[i][j] = rand() % 5;
        }
    }
    
}

void matriz_transposta(int matriz[SIZE][SIZE], int matrizTransposta[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++)
        {
            matrizTransposta[j][i]= matriz[i][j];
        }
    }
}


//Multiplicação correta de duas matriz C[i][j] = ∑ (A[i][k] * B[k][j])
void multiplicacao_matrizes(int matriz[SIZE][SIZE], int matrizTransposta[SIZE][SIZE], int matriz_multiplicada[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            
            matriz_multiplicada[i][j] = 0; // inicializando a matriz para poder efetuar a soma dos produtos

            for (int k = 0; k < SIZE; k++){

                matriz_multiplicada[i][j] += matriz[i][k] * matrizTransposta[k][j];
                //Necessita do += para acumular a soma dos valores anteriores
            }
        }
    }
}

void ehOrtogonal(int matriz[SIZE][SIZE]){
    int matrizTransposta[SIZE][SIZE];
    int matrizMultiplicada[SIZE][SIZE];

    matriz_transposta(matriz, matrizTransposta);
    multiplicacao_matrizes(matriz, matrizTransposta, matrizMultiplicada);

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
                //Diagonal principal deve ser igual a 1     //Valores fora da diagonal principal, o valor deve ser igual a zero
            if(i == j && matrizMultiplicada[i][j] != 1){
                printf("Nao eh Ortogonal.");
                return;
            }
            if(i !=j && matrizMultiplicada[i][j] != 0){
                printf("Nao eh Ortogonal.");
                return;
            }
        }  
    }
    printf("Eh ortogonal.");
}

void imprimeMatriz(int matriz[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }   
}

int main(){
    system("cls");
    int matriz[SIZE][SIZE];

    // MATRIZ TESTE
    // int matriz[SIZE][SIZE] = {
    //     {1,0,0},
    //     {0,1,0},
    //     {0,0,1}
    // };

    preencherMatriz(matriz);

    printf("***MATRIZ GERADA *****\n");
    imprimeMatriz(matriz);

    printf("RESPOSTA:\n");
    ehOrtogonal(matriz);

    return 0;
}