#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <stdlib.h>   // Necessaria para system("pause")

int main() {
    FILE *fr = fopen("maiorR.txt", "r");  // Abre o arquivo para leitura

    // Verifica se o arquivo foi aberto corretamente
    if (fr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;  // Encerra o programa com erro
    }

    float num, maior;     // num = valor atual lido, maior = maior valor encontrado
    int i = 0, ind = 0;   // i = contador total, ind = indice do maior

    // Le o primeiro valor para inicializar a variavel 'maior'
    if (fscanf(fr, "%f", &maior) == 1) {
        i = 1;
        // Continua lendo os proximos valores
        while (fscanf(fr, "%f", &num) == 1) {
            i++;
            if (num > maior) {
                maior = num;
                ind = i - 1;  // Atualiza o indice do maior valor
            }
        }
    }

    fclose(fr);  // Fecha o arquivo

    // Exibe o resultado
    printf("Maior: %.4f na posicao %d\n", maior, ind + 1);
    printf("Total de Elementos: %d\n", i);

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

