#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para rand(), srand() e system("pause")

int main() {
    unsigned int seed = 123;  // Semente fixa para gerar os mesmos numeros aleatorios
    srand(seed);              // Inicializa o gerador de numeros aleatorios

    int A[5][10];   // Matriz original com 10 linhas e 5 colunas
    int At[10][5];  // Matriz transposta com 5 linhas e 10 colunas

    // Preenche a matriz A com numeros aleatorios entre 0 e 100
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            A[i][j] = rand() % 101;
        }
    }

    // Imprime a matriz original A
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", A[i][j]);  // Imprime cada elemento com largura fixa
        }
        printf("\n");
    }
    printf("\n");  // Linha em branco entre as duas matrizes

    // Gera a matriz transposta At a partir de A
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            At[j][i] = A[i][j];  // Troca linha por coluna
        }
    }

    // Imprime a matriz transposta At
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", At[i][j]);  // Imprime cada elemento com largura fixa
        }
        printf("\n");
    }

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

