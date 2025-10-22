#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

// Declaracao antecipada da funcao
void divisao(int a, int b);

int main(void) {
    int dividendo, divisor;

    // Leitura do dividendo
    printf("Digite o dividendo:\n");
    scanf("%d", &dividendo);

    // Leitura do divisor
    printf("Digite o divisor:\n");
    scanf("%d", &divisor);

    // Chamada da funcao que realiza a divisao por subtracao
    divisao(dividendo, divisor);

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

// Funcao que calcula quociente e resto usando subtracao sucessiva
void divisao(int a, int b) {
    int quociente = 0;
    int resto = a;

    while (resto >= b) {
        resto = resto - b;
        quociente++;
    }

    // Exibe o resultado
    printf("O quociente e %d com resto %d\n", quociente, resto);
}

