#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    float matriz[3][3];  // Declaracao de uma matriz 3x3 de numeros reais

    // Impressao dos enderecos de cada posicao da matriz
    printf("Enderecos das posicoes da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco de matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}


