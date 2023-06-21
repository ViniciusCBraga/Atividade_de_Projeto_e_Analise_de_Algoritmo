#include <stdio.h>

void produtorioLinhaMatriz(int matriz[5][5]){
    int vetorJ[5];

    for (int i = 0; i < 5; i++){
        int produtorio = 1;
        for (int j = 0; j < 5; j++){
            produtorio *= matriz[i][j];
        }
        vetorJ[i]=produtorio;
    }

    for (int i = 0; i < 5; i++){
        printf("Linha %d:%d\n", i + 1, vetorJ[i]);
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

   

    printf("Produtório de cada linha da matriz:\n");
    produtorioLinhaMatriz(matriz);


    return 0;
}