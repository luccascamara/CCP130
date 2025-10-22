#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    int numeros[5];       // Vetor para armazenar 5 numeros inteiros
    int *p = numeros;     // Ponteiro que aponta para o inicio do vetor

    // Leitura dos valores inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d:\n", i + 1);  // Solicita o numero
        scanf("%d", p + i);                      // Armazena usando aritmetica de ponteiros
    }

    // Impressao dos valores em dobro
    printf("Dobro dos valores digitados:\n[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i) * 2);  // Acessa o valor e imprime seu dobro
    }
    printf("]\n");

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

