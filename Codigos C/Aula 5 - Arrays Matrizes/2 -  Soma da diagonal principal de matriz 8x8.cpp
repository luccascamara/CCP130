#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para rand(), srand() e system("pause")

int main(void) {
    int m[8][8];     // Matriz 8x8 de inteiros
    int i, j, soma = 0;  // Variaveis auxiliares e acumuladora da soma da diagonal

    unsigned int seed = 123;  // Semente fixa para gerar numeros aleatorios
    srand(seed);              // Inicializa o gerador de numeros aleatorios

    // Preenche e imprime a matriz com numeros de 0 a 100
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            m[i][j] = rand() % 101;     // Gera numero aleatorio entre 0 e 100
            printf("%3d ", m[i][j]);    // Imprime o numero com largura de 3 espacos
        }
        printf("\n");  // Pula para a proxima linha da matriz
    }

    // Soma os elementos da diagonal principal (onde i == j)
    for (i = 0; i < 8; i++) {
        soma += m[i][i];  // Acumula os elementos da diagonal principal
    }

    // Exibe o resultado da soma
    printf("A soma da diagonal principal e %d\n", soma);

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

