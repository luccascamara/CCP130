#include <stdio.h>   // Biblioteca padrão para entrada e saída (printf, scanf)
#include <stdlib.h>  // Biblioteca para usar system("pause")

int main() {
    int idade;                    // Variável para armazenar a idade do visitante
    double custo_total = 0.0;     // Variável acumuladora do valor total dos ingressos

    // Laço infinito: continuará solicitando idades até que o usuário digite 0
    while (1) {
        printf("Digite a idade do visitante:\n");  // Solicita a idade ao usuário
        scanf("%d", &idade);                       // Lê a idade digitada

        if (idade == 0) {
            break;  // Encerra o laço se a idade for 0 (condição de parada)
        }

        // Verifica a faixa etária do visitante e soma o valor correspondente ao custo_total
        if (idade <= 2) {
            // Visitantes com 2 anos ou menos têm entrada gratuita
            custo_total += 0.0;
        } else if (idade >= 3 && idade <= 12) {
            // Crianças de 3 a 12 anos pagam R$14,00
            custo_total += 14.0;
        } else if (idade >= 65) {
            // Idosos com 65 anos ou mais pagam R$18,00
            custo_total += 18.0;
        } else {
            // Demais visitantes (de 13 a 64 anos) pagam R$23,00
            custo_total += 23.0;
        }
    }

    // Após sair do laço, exibe o valor total acumulado do grupo
    printf("O Valor do grupo é %.2f\n", custo_total);  // Mostra o valor com duas casas decimais

    system("pause");  // Pausa a execução (funciona apenas no Windows)
    return 0;         // Finaliza o programa com sucesso
}

