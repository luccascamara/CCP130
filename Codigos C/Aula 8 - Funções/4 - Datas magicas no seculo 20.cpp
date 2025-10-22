#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Necessaria para usar system("pause")

// Funcao que verifica se a data e magica: dia * mes == ultimos dois digitos do ano
int dataMagica(int dia, int mes, int ano) {
    int dois_digitos = ano % 100;
    return (dia * mes == dois_digitos);
}

int main(void) {
    // Varre os anos de 1901 a 1999
    for (int ano = 1901; ano <= 1999; ano++) {
        for (int mes = 1; mes <= 12; mes++) {
            for (int dia = 1; dia <= 31; dia++) {

                // Valida dias de meses com 30 dias
                if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) continue;

                // Valida fevereiro (sem considerar anos bissextos)
                if (mes == 2 && dia > 28) continue;

                // Verifica se a data e magica e imprime se for
                if (dataMagica(dia, mes, ano)) {
                    printf("A data %d/%d/%d e magica\n", dia, mes, ano);
                }
            }
        }
    }

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

