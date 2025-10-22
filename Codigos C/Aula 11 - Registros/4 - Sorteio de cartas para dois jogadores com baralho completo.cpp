#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <stdlib.h>   // Necessaria para rand, srand, system("pause")
#include <time.h>     // Necessaria para time()

int main(void) {
    srand(time(NULL));  // Inicializa o gerador de numeros aleatorios com base no tempo

    // Valores e naipes do baralho
    char *valores[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "0", "Q", "J", "K"};
    char naipes[] = {'C', 'O', 'P', 'E'}; // Copas, Ouros, Paus, Espadas

    int baralho[52] = {0}; // Marca quais cartas ja foram usadas

    // Sorteio das cartas do Jogador 1
    printf("==== Cartas do Jogador 1 ====\n");
    for (int i = 0; i < 5; ) {
        int carta = rand() % 52;
        if (!baralho[carta]) {
            baralho[carta] = 1;              // Marca a carta como usada
            int valor = carta % 13;          // Valor da carta (0 a 12)
            int naipe = carta / 13;          // Naipe da carta (0 a 3)
            printf("%s de %c\n", valores[valor], naipes[naipe]);
            i++;
        }
    }

    printf("=============================\n");

    // Sorteio das cartas do Jogador 2
    printf("==== Cartas do Jogador 2 ====\n");
    for (int i = 0; i < 5; ) {
        int carta = rand() % 52;
        if (!baralho[carta]) {
            baralho[carta] = 1;
            int valor = carta % 13;
            int naipe = carta / 13;
            printf("%s de %c\n", valores[valor], naipes[naipe]);
            i++;
        }
    }

    printf("=============================\n");

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;
}

