#include <stdio.h>


int somatorioMatrizAcimaDiagonalPrincipal(int matrizA[5][5]){
    int somatorioDaMatriz = 0;

    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
                somatorioDaMatriz +=matrizA[i][j];
            
        }
    }
    return somatorioDaMatriz;
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

    printf("%d", somatorioMatrizAcimaDiagonalPrincipal(matrizA));
    return 0;
}