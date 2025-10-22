#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <string.h>   // Biblioteca para manipulacao de strings
#include <stdlib.h>   // Necessaria para system("pause")

int main() {
    char frase[100];      // Vetor para armazenar a frase
    char caractere;       // Caractere a ser procurado
    int i, contador = 0;  // Indice do laco e contador de ocorrencias

    // Leitura da frase
    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);  // Le a linha com espacos

    // Leitura do caractere
    printf("Digite um caractere:\n");
    caractere = getchar();  // Le apenas o primeiro caractere

    // Contagem das ocorrencias do caractere na frase
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == caractere) {
            contador++;
        }
    }

    // Exibe o resultado
    printf("O caractere %c foi encontrado %d vezes\n", caractere, contador);

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

