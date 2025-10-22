#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <stdlib.h>   // Necessaria para system("pause")

// Estrutura que representa uma data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Funcao que calcula a idade em anos, meses e dias
void calcularIdade(struct Data nascimento, struct Data atual) {
    int idadeAnos = atual.ano - nascimento.ano;
    int idadeMeses = 0;
    int idadeDias = 0;

    // Verifica se ainda nao completou o aniversario no ano atual
    if (atual.mes < nascimento.mes || (atual.mes == nascimento.mes && atual.dia < nascimento.dia)) {
        idadeAnos--;
        idadeMeses = 12 - nascimento.mes + atual.mes;

        // Se ainda nao completou o mes, calcula os dias restantes
        if (atual.dia < nascimento.dia) {
            idadeMeses--;

            int diasNoMesNascimento;
            if (nascimento.mes == 2) {
                diasNoMesNascimento = (nascimento.ano % 4 == 0 && (nascimento.ano % 100 != 0 || nascimento.ano % 400 == 0)) ? 29 : 28;
            } else if (nascimento.mes == 4 || nascimento.mes == 6 || nascimento.mes == 9 || nascimento.mes == 11) {
                diasNoMesNascimento = 30;
            } else {
                diasNoMesNascimento = 31;
            }

            idadeDias = diasNoMesNascimento - nascimento.dia + atual.dia;
        } else {
            idadeDias = atual.dia - nascimento.dia;
        }

    } else {
        idadeMeses = atual.mes - nascimento.mes;

        if (atual.dia < nascimento.dia) {
            idadeMeses--;

            int diasNoMesAnterior;
            int mesAnterior = atual.mes - 1;
            int anoAnterior = atual.ano;

            if (mesAnterior == 0) {
                mesAnterior = 12;
                anoAnterior--;
            }

            if (mesAnterior == 2) {
                diasNoMesAnterior = (anoAnterior % 4 == 0 && (anoAnterior % 100 != 0 || anoAnterior % 400 == 0)) ? 29 : 28;
            } else if (mesAnterior == 4 || mesAnterior == 6 || mesAnterior == 9 || mesAnterior == 11) {
                diasNoMesAnterior = 30;
            } else {
                diasNoMesAnterior = 31;
            }

            idadeDias = diasNoMesAnterior - nascimento.dia + atual.dia;
        } else {
            idadeDias = atual.dia - nascimento.dia;
        }
    }

    // Exibe o resultado
    printf("Sua idade e %d anos, %d meses, %d dias\n", idadeAnos, idadeMeses, idadeDias);
}

int main() {
    struct Data nascimento;
    struct Data atual;

    // Leitura da data de nascimento
    printf("Dia de nascimento:\n");
    scanf("%d", &nascimento.dia);
    printf("Mes de nascimento:\n");
    scanf("%d", &nascimento.mes);
    printf("Ano de nascimento:\n");
    scanf("%d", &nascimento.ano);

    // Leitura da data atual
    printf("Dia atual:\n");
    scanf("%d", &atual.dia);
    printf("Mes atual:\n");
    scanf("%d", &atual.mes);
    printf("Ano atual:\n");
    scanf("%d", &atual.ano);

    // Chamada da funcao para calcular e exibir a idade
    calcularIdade(nascimento, atual);

    system("pause");  // Pausa a execucao (Windows)
    return 0;
}

