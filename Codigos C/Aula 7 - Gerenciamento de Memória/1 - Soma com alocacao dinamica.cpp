#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para malloc, free e system("pause")

int main() {
    int *numeros;     // Ponteiro para alocar o vetor dinamicamente
    int N, i, soma = 0;  // N = quantidade de numeros, soma = acumulador

    // Solicita ao usuario a quantidade de numeros a serem inseridos
    printf("Digite a quantidade de numeros a serem inseridos: ");
    scanf("%d", &N);

    // Aloca memoria dinamicamente para N inteiros
    numeros = (int*) malloc(N * sizeof(int));

    // Verifica se a alocacao foi bem-sucedida
    if (numeros == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;  // Encerra o programa com erro
    }

    // Leitura dos numeros e acumulacao da soma
    printf("Digite os %d numeros:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];  // Soma os valores conforme sao digitados
    }

    // Exibe o resultado da soma
    printf("A soma dos numeros e: %d\n", soma);

    // Libera a memoria alocada
    free(numeros);

    system("pause");  // Pausa a execucao (funciona no Windows)
    return 0;         // Finaliza o programa com sucesso
}


