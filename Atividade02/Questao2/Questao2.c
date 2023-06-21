#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vetorI[5]){
    srand(time(NULL));
    for(int i = 0; i< 5; i++){
        vetorI[i] = rand() % 100;
    }
}

void modificarVetor(int vetorI[5], int vetorModificado[5]){
    
    for (int i = 0; i < 5; i++){
        int somatorio = 0;
        for (int j = 0; j < 5; j++)
        {
            if (i !=j)
            {
                somatorio += vetorI[j];
            }
        }
        vetorModificado[i] = somatorio;
    }
    
}

void imprimirVetor(int vetor[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("Coluna%d:%d\n", i + 1, vetor[i]);
    }
    
}

int main()
{
    int vetor[5];
    int vetormodificado[5];
    printf("***Vetor antes de ser modificado***\n");
    preencherVetor(vetor);
    imprimirVetor(vetor);
    printf("\n***Somatorio dos vetores, retirando o mesmo indice***\n");
    modificarVetor(vetor, vetormodificado);
    imprimirVetor(vetormodificado);
    
    

    return 0;
}
