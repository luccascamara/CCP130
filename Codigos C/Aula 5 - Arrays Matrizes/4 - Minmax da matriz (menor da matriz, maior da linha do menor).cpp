#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para rand(), srand() e system("pause")

int main(void) {
    unsigned int seed = 123;  // Semente fixa para geracao de numeros aleatorios
    srand(seed);              // Inicializa o gerador de numeros aleatorios

    int m[5][6];     // Matriz 5x6
    int minmax = 0;  // Variavel para armazenar o valor minmax
    int lx = 0;      // Linha do menor elemento
    int ly = 0;      // Coluna do maior elemento da linha do menor

    // Preenche a matriz com valores aleatorios de 0 a 1000 e imprime
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            m[i][j] = rand() % 1001;       // Valor aleatorio entre 0 e 1000
            printf("%4d ", m[i][j]);       // Imprime o valor com largura 4
        }
        printf("\n");
    }

    // Inicializa o menor valor com o primeiro elemento da matriz
    int menor = m[0][0];

    // Encontra a linha onde esta o menor valor da matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (m[i][j] < menor) {
                menor = m[i][j];  // Atualiza o menor valor
                lx = i;           // Guarda a linha onde ele esta
            }
        }
    }

    // Na linha lx (do menor valor), encontra o maior valor (minmax)
    minmax = m[lx][0];  // Comeca com o primeiro valor da linha
    ly = 0;             // Coluna correspondente
    for (int i = 0; i < 6; i++) {
        if (m[lx][i] > minmax) {
            minmax = m[lx][i];  // Atualiza o maior da linha
            ly = i;             // Guarda a coluna
        }
    }

    // Exibe o resultado
    printf("MINMAX=%d na linha %d coluna %d\n", minmax, lx, ly);

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

