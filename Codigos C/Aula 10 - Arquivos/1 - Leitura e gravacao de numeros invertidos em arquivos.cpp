#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para arquivos e system("pause")

int main() {
    FILE *fr = fopen("pares.txt", "r");              // Abre o arquivo de leitura
    FILE *fw = fopen("pares_invertido.txt", "w");    // Abre o arquivo de escrita

    // Verifica se os arquivos foram abertos corretamente
    if (fr == NULL || fw == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numeros[1000];  // Vetor para armazenar os numeros lidos
    int count = 0;      // Contador de elementos lidos

    // Leitura dos numeros do arquivo até o final (EOF)
    while (fscanf(fr, "%d", &numeros[count]) != EOF) {
        count++;
    }

    // Escrita dos numeros no novo arquivo em ordem inversa
    for (int i = count - 1; i >= 0; i--) {
        fprintf(fw, "%d\n", numeros[i]);
    }

    // Fecha os arquivos
    fclose(fr);
    fclose(fw);

    system("pause");  // Pausa a execucao para visualizacao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

