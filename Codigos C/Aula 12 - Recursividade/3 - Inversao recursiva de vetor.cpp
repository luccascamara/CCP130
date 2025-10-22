#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <stdlib.h>   // Necessaria para system("pause")

int vetor[] = {1, 2, 3, 4, 5};  // Vetor global com valores de exemplo

// Funcao recursiva para inverter o vetor
void inverter(int vet[], int inicio, int fim) {
    if (inicio >= fim)
        return;

    int temp = vet[inicio];
    vet[inicio] = vet[fim];
    vet[fim] = temp;

    inverter(vet, inicio + 1, fim - 1);  // Chamada recursiva para o centro
}

int main() {
    int size = sizeof(vetor) / sizeof(int);  // Calcula o tamanho do vetor

    inverter(vetor, 0, size - 1);  // Inverte o vetor

    printf("Vetor invertido:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vetor[i]);  // Imprime os elementos
    }
    printf("\n");

    system("pause");  // Pausa a execucao (Windows)
    return 0;
}

