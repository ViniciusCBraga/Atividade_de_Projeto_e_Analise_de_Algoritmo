#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int matriz[4][5]) {
    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 10 + 1;
        }
    }
}

int verificaMatriz(int matriz[4][5]) {
    int soma[5] = {0}; // Inicializa o vetor soma com zeros
    int menorNum = soma[0]; // Inicializa o menor número com o primeiro valor do vetor soma

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 4; i++) {
            soma[j] += matriz[i][j];
        }

        if (j == 0 || soma[j] < menorNum) {
            menorNum = soma[j];
        }
    }
    

    printf("Somatorio de cada coluna:\n");
    for (int j = 0; j < 5; j++) {
        printf("Coluna %d: %d\n", j + 1, soma[j]);
    }

    return menorNum;

    
}

int main() {
    int matriz[4][5];

    preencherMatriz(matriz);

    printf("Matriz preenchida com numeros aleatorios:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    int menorValor = verificaMatriz(matriz);
    printf("Menor valor do somatorio de cada coluna: %d\n", menorValor);

    return 0;
}
