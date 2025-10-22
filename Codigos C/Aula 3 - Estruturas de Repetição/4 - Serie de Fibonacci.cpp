#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    int N, a = 0, b = 1, c;  // 'a' e 'b' sao os dois primeiros termos da sequencia de Fibonacci

    // Solicita ao usuario que digite um numero inteiro
    printf("Digite um numero:\n");
    scanf("%d", &N);  // Le o numero digitado e armazena em N

    // Laco para gerar os N primeiros termos da sequencia de Fibonacci
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            // Primeiro termo da sequencia
            printf("%d", a);
        } else if (i == 1) {
            // Segundo termo da sequencia
            printf(" %d", b);
        } else {
            // Termos seguintes: soma dos dois anteriores
            c = a + b;
            printf(" %d", c);
            a = b;  // Atualiza 'a' para o valor anterior de 'b'
            b = c;  // Atualiza 'b' para o novo valor calculado 'c'
        }
    }

    printf("\n");         // Imprime quebra de linha ao final da sequencia
    system("pause");      // Pausa a execucao (funciona apenas no Windows)
    return 0;             // Finaliza o programa com sucesso
}

