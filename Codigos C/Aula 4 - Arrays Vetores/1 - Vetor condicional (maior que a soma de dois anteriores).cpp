#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    int vetor[10];  // Vetor de números inteiros com 10 elementos 
    int i;          // Variavel de controle para os lacos

    // Laco para ler 10 numeros inteiros e armazenar no vetor
    printf("Digite os numeros de entrada: \n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);  // Le um numero e armazena na posicao i do vetor
    }

    // Mensagem informando os numeros que satisfazem a condicao
    printf("Abaixo estao os numeros que atendem a condicao:\n");

    // Laco inicia em i = 2 porque vamos verificar os dois anteriores
    for(i = 2; i < 10; i++) {
        // Verifica se o numero atual e maior que a soma dos dois anteriores
        if(vetor[i] > (vetor[i-1] + vetor[i-2])) {
            printf("%d\n", vetor[i]);  // Imprime o numero que satisfaz a condicao
        }
    }

    system("pause");  // Pausa a execucao (funciona no Windows)
    return 0;         // Finaliza o programa com sucesso
}

