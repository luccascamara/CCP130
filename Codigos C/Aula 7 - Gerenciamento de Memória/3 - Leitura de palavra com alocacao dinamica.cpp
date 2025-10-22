#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para malloc, free e system("pause")

int main() {
    int q, i;            // q = quantidade de caracteres, i = indice de laco
    char *palavra;       // Ponteiro para armazenar a palavra digitada

    // Solicita ao usuario a quantidade de caracteres
    printf("Digite a quantidade de caracteres da palavra: ");
    scanf("%d", &q);

    // Aloca memoria dinamicamente para armazenar a palavra (mais 1 para o '\0')
    palavra = (char*) malloc((q + 1) * sizeof(char));

    // Verifica se a alocacao foi bem-sucedida
    if (palavra == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;  // Encerra o programa com erro
    }

    // Solicita a palavra do usuario
    printf("Digite a palavra: ");
    scanf("%s", palavra);  // Le a palavra diretamente (sem & porque e vetor)

    // Exibe a palavra digitada
    printf("A palavra recebida foi: %s\n", palavra);

    // Libera a memoria alocada
    free(palavra);

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

