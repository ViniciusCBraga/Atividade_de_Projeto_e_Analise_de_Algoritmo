#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vetorI[10]){
    srand(time(NULL));
    for(int i = 0; i< 10; i++){
        vetorI[i] = rand() % 10;
    }
}

int verificarVetorSomatorioProdutorio(int vetorI[10]){
    
    int x = 5;
    int y = 3;
    int somatorio = 0;
    for (int i = 0; i < 10; i += 2){
        somatorio += vetorI[i];
    }

    printf("\nO somatorio do vetor com indices pares eh: %d\n", somatorio);
    int produtorio = 1;
    for (int j = 1; j < 10; j += 2)
    {
        produtorio *= vetorI[j];
    }
    printf("\nO produtorio do vetor com indices impares eh: %d\n", produtorio);

    int resultadoDoSomatorio =  x * abs(somatorio);
    int resultadoDoProdutorio = y * produtorio;

    if (resultadoDoSomatorio <= resultadoDoProdutorio)
    {
        return 1;
    }
    else{
        return 0;
    }

}

void imprimirVetor(int vetor[10]){
     printf("Índice\tValor\n");
    printf("----------------\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\n", i, vetor[i]);
    }
    
}

int main()
{
    int vetor[10];
   
    printf("***Vetor antes de ser modificado***\n");
    preencherVetor(vetor);
    imprimirVetor(vetor);
    if (verificarVetorSomatorioProdutorio(vetor))
    {
        printf("\n\nA condicao e verdadeira\n\n");
    }
    else
        printf("\n\nA condicao e falsa\n\n");
    
    
    return 0;
}
