#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vetorI[5]){
    srand(time(NULL));
    for(int i = 0; i< 5; i++){
        vetorI[i] = rand() % 20;
    }
}

void modificarVetorSomatorioRetornarMax(int vetorI[5], int vetorModificado[5]){
    
    int k = 4;
    int maiorValor = 0;
    for (int i = 0; i < 5; i++){
        int somatorio = 0;
        for (int j = i; j < i + k - 1 && j < 5; j++)
        {
            somatorio += vetorI[j];
            
        }
        vetorModificado[i] = somatorio;
        if (vetorModificado[i]> maiorValor)
        {
            maiorValor = vetorModificado[i];
        }
    }
    
    printf("\n\nO maior valor eh:%d\n", maiorValor);
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
    printf("\n***Somatorio dos vetores até um indice determinado pela formula i + (k - 1)***\n");
    modificarVetorSomatorioRetornarMax(vetor, vetormodificado);
    imprimirVetor(vetormodificado);
    
    

    return 0;
}
