#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para rand(), srand() e system("pause")

int main(void) {
    int m[12][12];  // Matriz 12x12 de inteiros
    int i, j, soma = 0;  // Variaveis auxiliares e acumuladora da soma

    unsigned int seed = 123;  // Semente fixa para geracao de numeros aleatorios
    srand(seed);              // Inicializa o gerador de numeros aleatorios

    // Preenche a matriz com numeros aleatorios e imprime na tela
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            m[i][j] = rand() % 101;     // Numero aleatorio entre 0 e 100
            printf("%3d ", m[i][j]);    // Imprime com alinhamento de 3 espacos
        }
        printf("\n");  // Quebra de linha apos cada linha da matriz
    }

    // Soma dos elementos abaixo da diagonal principal (onde i > j)
    for (i = 1; i < 12; i++) {
        for (j = 0; j < i; j++) {
            soma += m[i][j];  // Acumula os valores abaixo da diagonal
        }
    }

    // Exibe o resultado
    printf("Soma: %d\n", soma);

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

