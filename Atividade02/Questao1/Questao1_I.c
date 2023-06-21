#include <stdio.h>



void somatorioColunaMatriz(int matriz[5][5], int vetorSomatorio[5]) {// matriz de entrada e vetor de saida
    for (int j = 0; j < 5; j++) {
        int somatorio = 0;// inicializa e armazena o somatorio da coluna atual == j
        for (int i = 0; i < 5; i++) {
            somatorio += matriz[i][j]; // faz o somatorio
        }
        vetorSomatorio[j] = somatorio;// armazena no vetor somatorio que representa a coluna atual
    };

    for ( int j = 0; j < 5; j++){
        printf(" Coluna %d : %d\n", j + 1, vetorSomatorio[j]);
    }
    
}

int main() {
    int matriz[5][5] = {
        {0, 2, 8, 1, 7},
        {1, 5, 8, 2, 2},
        {3, 4, 0, 8, 1},
        {9, 1, 2, 7, 2},
        {3, 0, 1, 0, 4}
    };

    int vetorSomatorio[5];

    printf("Somatório de cada coluna da matriz:\n");
    somatorioColunaMatriz(matriz, vetorSomatorio);

    
    

    return 0;
}
