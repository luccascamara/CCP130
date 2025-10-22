#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <ctype.h>    // Biblioteca para funcoes de manipulacao de caracteres
#include <stdlib.h>   // Necessaria para system("pause")

int main() {
    char s[100];              // Vetor para armazenar a string original
    char maiusculas[100];     // Vetor para armazenar a string em maiusculas
    char minusculas[100];     // Vetor para armazenar a string em minusculas
    int i;

    // Leitura da linha de texto
    printf("Digite uma linha de texto:");
    fgets(s, sizeof(s), stdin);  // Le a string (inclusive espacos)

    // Conversao dos caracteres
    for (i = 0; s[i] != '\0'; i++) {
        maiusculas[i] = toupper(s[i]);  // Converte para maiuscula
        minusculas[i] = tolower(s[i]);  // Converte para minuscula
    }

    // Finaliza as strings com caractere nulo
    maiusculas[i] = '\0';
    minusculas[i] = '\0';

    // Exibe os resultados
    printf("\nLetras maiusculas:\n%s", maiusculas);
    printf("\nLetras minusculas:\n%s", minusculas);

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

