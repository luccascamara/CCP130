#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    char palavra[5];   // Vetor que armazena 5 letras digitadas pelo usuario
    char *p[5];        // Vetor de ponteiros para armazenar os enderecos das letras

    // Leitura das letras e armazenamento dos enderecos
    for (int i = 0; i < 5; i++) {
        printf("Digite a letra %d:\n", i + 1);      // Solicita ao usuario a letra
        scanf(" %c", &palavra[i]);                  // Le a letra (com espaco antes para ignorar enter anterior)
        p[i] = &palavra[i];                         // Armazena o endereco da letra no vetor de ponteiros
    }

    // Impressao das letras usando os ponteiros
    for (int i = 0; i < 5; i++) {
        printf("Letra: %c\n", *p[i]);  // Imprime o conteudo apontado pelo ponteiro
    }

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

