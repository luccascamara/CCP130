#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Necessaria para malloc, free, atoi, system("pause")

int main() {
    char *entradas[4];   // Vetor de 4 ponteiros para armazenar as entradas como strings
    int i, soma = 0;
    char buffer[100];    // Buffer temporario para leitura com fgets

    printf("Digite os numeros:\n");

    for (i = 0; i < 4; i++) {
        entradas[i] = malloc(100 * sizeof(char));   // Aloca espaco para a string
        fgets(buffer, 100, stdin);                  // Le a linha digitada
        sscanf(buffer, "%s", entradas[i]);          // Copia a string formatada para entradas[i]
        soma += atoi(entradas[i]);                  // Converte a string para inteiro e soma
    }

    // Exibe o resultado da soma
    printf("Soma = %d\n", soma);

    // Libera a memoria alocada
    for (i = 0; i < 4; i++) {
        free(entradas[i]);
    }

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

