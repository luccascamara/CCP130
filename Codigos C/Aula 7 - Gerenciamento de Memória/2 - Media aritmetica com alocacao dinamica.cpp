#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para malloc, free e system("pause")

int main() {
    int numAlunos, i;             // Quantidade de alunos e indice do laco
    float *notas, soma = 0.0, media;  // Ponteiro para as notas, soma e media

    // Solicita ao usuario a quantidade de alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &numAlunos);

    // Aloca memoria dinamicamente para armazenar as notas
    notas = (float*) malloc(numAlunos * sizeof(float));

    // Verifica se a alocacao foi bem-sucedida
    if (notas == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;  // Encerra o programa com erro
    }

    // Leitura das notas e acumulacao da soma
    printf("Digite as notas dos %d alunos:\n", numAlunos);
    for (i = 0; i < numAlunos; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];  // Soma as notas conforme sao digitadas
    }

    // Calcula a media aritmetica
    media = soma / numAlunos;

    // Exibe a media com duas casas decimais
    printf("A media aritmetica e: %.2f\n", media);

    // Libera a memoria alocada
    free(notas);

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

