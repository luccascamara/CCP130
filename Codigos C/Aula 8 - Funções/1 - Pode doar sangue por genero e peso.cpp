#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

// Funcao que verifica se a pessoa pode doar sangue com base no genero e peso
int podeDoar(char g, float p) {
    if ((g == 'f' && p >= 50) || (g == 'm' && p >= 60)) {
        return 1;  // Pode doar
    } else {
        return 0;  // Nao pode doar
    }
}

int main(void) {
    char genero;   // Armazena o genero (m ou f)
    float peso;    // Armazena o peso em kg

    // Leitura do genero
    printf("Digite seu genero (m ou f):\n");
    scanf(" %c", &genero);  // Espaco antes de %c evita capturar Enter anterior

    // Leitura do peso
    printf("Digite seu peso em kg:\n");
    scanf("%f", &peso);

    // Verifica e exibe se a pessoa pode doar
    if(podeDoar(genero, peso)) {
        printf("Voce pode doar sangue!\n");
    } else {
        printf("Voce nao pode doar sangue!\n");
    }

    system("pause");  // Pausa a execucao (apenas no Windows)
    return 0;         // Finaliza o programa com sucesso
}

