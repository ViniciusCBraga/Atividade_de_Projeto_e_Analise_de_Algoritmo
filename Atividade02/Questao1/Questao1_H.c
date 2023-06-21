#include <stdio.h>


int somatorioMatrizMultiplicadoPorVariavel(int matrizA[5][5]){
    int somatorioDaMatriz = 0;
    int variavel = 2;

    for (int i = 0 ; i < 5; i++){
        for (int j = 0; j < 5; j++){
            somatorioDaMatriz += matrizA[i][j];
        }
    }
    return somatorioDaMatriz * variavel;
}

int main()
{
    int matrizA[5][5] = {
        {0,2,8,1,7},
        {1,5,8,2,2},
        {3,4,0,8,1},
        {9,1,2,7,2},
        {3,0,1,0,4}

    };

    printf("%d", somatorioMatrizMultiplicadoPorVariavel(matrizA));
    return 0;
}
