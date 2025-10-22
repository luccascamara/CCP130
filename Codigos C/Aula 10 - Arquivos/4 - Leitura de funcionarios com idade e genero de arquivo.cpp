#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <string.h>   // Biblioteca para manipulacao de strings
#include <stdlib.h>   // Necessaria para system("pause")

int main() {
    FILE *fr = fopen("empresaR.txt", "r");  // Abre o arquivo para leitura

    if (fr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char nome[50], genero;
    int idade;
    int total = 0, total25 = 0, totalF = 0;

    // Conta o total de funcionarios no arquivo
    while (fscanf(fr, "%s %c %d", nome, &genero, &idade) != EOF) {
        total++;
    }

    fclose(fr);  // Fecha apos primeira leitura

    // Reabre o arquivo para leitura dos dados detalhados
    fr = fopen("empresaR.txt", "r");

    printf("Total de funcionarios: %d\n\n", total);

    // Le os dados novamente e imprime informacoes adicionais
    while (fscanf(fr, "%s %c %d", nome, &genero, &idade) != EOF) {
        if (idade > 25) {
            printf("Nome do funcionario +25: %s idade: %d\n", nome, idade);
            total25++;
        }

        if (genero == 'f' || genero == 'F') {
            totalF++;
        }
    }

    fclose(fr);  // Fecha o arquivo novamente

    // Exibe os totais finais
    printf("\nTotal de funcionarios +25: %d\n", total25);
    printf("\nTotal de funcionarias: %d\n", totalF);

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

