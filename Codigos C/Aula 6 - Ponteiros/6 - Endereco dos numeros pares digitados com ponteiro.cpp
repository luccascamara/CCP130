#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    int vetor[5];       // Vetor de inteiros com 5 posicoes
    int *p = vetor;     // Ponteiro que aponta para o inicio do vetor

    // Leitura dos valores inteiros digitados pelo usuario
    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d:\n", i + 1);   // Solicita a entrada
        scanf("%d", p + i);                       // Armazena diretamente usando aritmetica de ponteiros
    }

    // Impressao dos enderecos dos valores pares
    printf("Enderecos dos valores pares:\n");
    for (int i = 0; i < 5; i++) {
        if (*(p + i) % 2 == 0) {  // Verifica se o valor e par
            printf("Valor %d na posicao %d -> Endereco: %p\n", *(p + i), i, (void*)(p + i));
        }
    }

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

