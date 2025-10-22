#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};  // Vetor com 5 elementos inteiros

    // Cabecalho da tabela
    printf("Elemento | Endereco de Memoria\n");
    printf("-----------------------------\n");

    // Laco para imprimir cada elemento do vetor e seu endereco correspondente
    for (int i = 0; i < 5; i++) {
        printf("%8d | %p\n", vetor[i], (void*)&vetor[i]);
        // %8d alinha o numero com 8 espacos
        // %p imprime o endereco de memoria (convertido para void* por seguranca)
    }

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}


