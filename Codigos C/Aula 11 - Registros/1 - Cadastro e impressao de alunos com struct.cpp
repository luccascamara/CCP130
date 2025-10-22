#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <string.h>   // Biblioteca para manipulacao de strings
#include <stdlib.h>   // Necessaria para system("pause")

#define MAX_NOME 50
#define MAX_SOBRENOME 50
#define MAX_CURSO 50
#define NUM_ALUNOS 5

// Definicao da estrutura Aluno
struct AlunoStruct {
    char nome[MAX_NOME];
    char sobrenome[MAX_SOBRENOME];
    int ra;              // Matricula
    char curso[MAX_CURSO];
};

int main() {
    struct AlunoStruct alunos[NUM_ALUNOS];  // Vetor de alunos

    printf("Digite os dados dos alunos:\n\n");

    // Leitura dos dados de cada aluno
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, MAX_NOME, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;  // Remove o '\n'

        printf("Digite o sobrenome do aluno %d: ", i + 1);
        fgets(alunos[i].sobrenome, MAX_SOBRENOME, stdin);
        alunos[i].sobrenome[strcspn(alunos[i].sobrenome, "\n")] = 0;

        printf("Digite o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, MAX_CURSO, stdin);
        alunos[i].curso[strcspn(alunos[i].curso, "\n")] = 0;

        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].ra);
        getchar();  // Limpa o '\n' pendente do buffer
        printf("\n");
    }

    // Impressao dos dados cadastrados
    printf("Imprimindo os alunos cadastrados:\n\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno: %s\n", alunos[i].nome);
        printf(" %s\n", alunos[i].sobrenome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Matricula: %d\n", alunos[i].ra);
        if (i < NUM_ALUNOS - 1) {
            printf("-----------------------------\n");
        }
    }
    printf("\n");

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

