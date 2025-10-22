#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para malloc, free e system("pause")

int main() {
    int *arr;       // Ponteiro para vetor de inteiros
    int n, i, maior;  // n = tamanho, i = indice, maior = valor maximo encontrado

    // Solicita a quantidade de elementos ao usuario
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    // Aloca memoria dinamicamente para o vetor
    arr = (int*) malloc(n * sizeof(int));

    // Verifica se a alocacao foi bem-sucedida
    if (arr == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;  // Encerra o programa com erro
    }

    // Leitura dos elementos do vetor
    printf("Digite os %d elementos do vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Inicializa 'maior' com o primeiro elemento
    maior = arr[0];

    // Percorre o vetor procurando o maior valor
    for (i = 1; i < n; i++) {
        if (*(arr + i) > maior) {
            maior = *(arr + i);
        }
    }

    // Exibe o maior elemento encontrado
    printf("O maior elemento e: %d\n", maior);

    // Libera a memoria alocada
    free(arr);

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

