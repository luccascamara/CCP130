#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para rand(), srand() e system("pause")

int main(void) {
    int vetor[10];   // Vetor para armazenar 10 numeros aleatorios
    int i, count = 0;  // Variavel 'i' para o laco e 'count' para contar numeros > 50
    unsigned int seed = 123;  // Valor fixo para semente (poderia ser time(NULL))

    srand(seed);  // Inicializa o gerador de numeros aleatorios com a semente definida

    // Preenche o vetor com numeros aleatorios de 0 a 100
    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 101;
    }

    // Conta quantos numeros sao maiores que 50
    printf("Ha ");
    for (i = 0; i < 10; i++) {
        if (vetor[i] > 50) {
            count++;  // Incrementa o contador se o valor for maior que 50
        }
    }

    // Exibe os resultados
    if (count > 0) {
        printf("%d numeros maiores que 50 nas posicoes:", count);
        for (i = 0; i < 10; i++) {
            if (vetor[i] > 50) {
                printf(" %d", i);  // Mostra a posicao onde o valor > 50 foi encontrado
            }
        }
        printf("\n");
    } else {
        printf("Nenhum numero maior que 50 encontrado.\n");
    }

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Encerra o programa com sucesso
}

