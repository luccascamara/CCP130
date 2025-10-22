#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <string.h>   // Biblioteca para manipulacao de strings
#include <stdlib.h>   // Necessaria para system("pause")

int main() {
    char s[100];  // Vetor para armazenar a palavra digitada

    while (1) {
        // Solicita a palavra
        printf("Digite uma palavra ou enter para sair:\n");
        fgets(s, sizeof(s), stdin);  // Le a linha com espacos

        // Verifica se a entrada foi apenas ENTER
        if (s[0] == '\n') {
            break;  // Encerra o laco
        }

        // Verifica se a palavra comeca com 'b' ou 'B'
        if (s[0] == 'b' || s[0] == 'B') {
            // Remove o '\n' final da string, se houver
            if (s[strlen(s) - 1] == '\n') {
                s[strlen(s) - 1] = '\0';
            }

            // Exibe a palavra que comeca com 'b' ou 'B'
            printf("Palavra que comeca com 'b' ou 'B': %s\n", s);
        }
    }

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

