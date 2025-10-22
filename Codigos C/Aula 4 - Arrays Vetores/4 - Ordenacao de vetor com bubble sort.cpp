#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para rand(), srand() e system("pause")

#define TAM 20  // Define o tamanho do vetor como 20 elementos

int main(void) {
    int vetor[TAM];  // Vetor com 20 posicoes
    int i, j, temp;  // Variaveis auxiliares para os lacos e troca

    unsigned int seed = 123;  // Semente fixa para gerar os mesmos numeros sempre (poderia ser time(NULL))
    srand(seed);  // Inicializa o gerador de numeros aleatorios

    // Preenche o vetor com numeros aleatorios de 0 a 200
    for (i = 0; i < TAM; i++) {
        vetor[i] = rand() % 201;
    }

    // Ordena o vetor usando o algoritmo Bubble Sort
    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Imprime o vetor ordenado
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

