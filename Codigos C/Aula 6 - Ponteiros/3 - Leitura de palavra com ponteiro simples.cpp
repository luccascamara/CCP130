#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    char palavra[5];       // Vetor de 5 caracteres
    char *p = palavra;     // Ponteiro que aponta para o inicio do vetor

    // Mensagem inicial
    printf("Digite uma palavra de 5 caracteres...\n");

    // Leitura de 5 letras com uso de aritmetica de ponteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite a letra %d:\n", i + 1);
        scanf(" %c", p + i);  // Le a letra diretamente na posicao correspondente
    }

    // Impressao da palavra usando o vetor (ou ponteiro)
    printf("Palavra:\n");
    printf("%c %c %c %c %c\n", p[0], p[1], p[2], p[3], p[4]);

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}


