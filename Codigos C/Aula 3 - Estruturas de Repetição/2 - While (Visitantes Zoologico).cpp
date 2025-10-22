#include <stdio.h>   // Biblioteca padr�o para entrada e sa�da (printf, scanf)
#include <stdlib.h>  // Biblioteca para usar system("pause")

int main() {
    int idade;                    // Vari�vel para armazenar a idade do visitante
    double custo_total = 0.0;     // Vari�vel acumuladora do valor total dos ingressos

    // La�o infinito: continuar� solicitando idades at� que o usu�rio digite 0
    while (1) {
        printf("Digite a idade do visitante:\n");  // Solicita a idade ao usu�rio
        scanf("%d", &idade);                       // L� a idade digitada

        if (idade == 0) {
            break;  // Encerra o la�o se a idade for 0 (condi��o de parada)
        }

        // Verifica a faixa et�ria do visitante e soma o valor correspondente ao custo_total
        if (idade <= 2) {
            // Visitantes com 2 anos ou menos t�m entrada gratuita
            custo_total += 0.0;
        } else if (idade >= 3 && idade <= 12) {
            // Crian�as de 3 a 12 anos pagam R$14,00
            custo_total += 14.0;
        } else if (idade >= 65) {
            // Idosos com 65 anos ou mais pagam R$18,00
            custo_total += 18.0;
        } else {
            // Demais visitantes (de 13 a 64 anos) pagam R$23,00
            custo_total += 23.0;
        }
    }

    // Ap�s sair do la�o, exibe o valor total acumulado do grupo
    printf("O Valor do grupo � %.2f\n", custo_total);  // Mostra o valor com duas casas decimais

    system("pause");  // Pausa a execu��o (funciona apenas no Windows)
    return 0;         // Finaliza o programa com sucesso
}

