#include <stdio.h>

#define SIZE 20
void gerarVetor(int vetor[SIZE]){
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++){
        vetor[i] = rand() % 100;
    }
}

void imprimirVetor(int vetor[SIZE]){
    for (int i = 0; i < SIZE; i++){
        printf("%2d  ", vetor[i]);
    }
}

void ordernarVetor(int vetor[SIZE]) {
    int aux;
    
    for (int i = 0; i < SIZE; i += 2) { // Primeiro vetor para percorrer os indices impares
        if (vetor[i] % 2 != 0) {// faz a verificação se o vetor é ímpar
            for (int j = i + 1; j < SIZE; j += 2) { //segundo vetor para percorrer os indices pares
                if (vetor[j] % 2 == 0) {// encontra um vetor par
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux; // faz a troca
                    break;
                }
            }
        }
    }
}

    


int main(){

    int vetor[SIZE];
    gerarVetor(vetor);
    printf("Vetor original\n");
    imprimirVetor(vetor);
    ordernarVetor(vetor);
    printf("\nVetor ordenado\n");
    imprimirVetor(vetor);

    return 0;
}