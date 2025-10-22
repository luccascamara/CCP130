#include <stdio.h>   // Biblioteca padrao para entrada e saida
#include <stdlib.h>  // Biblioteca necessaria para usar system("pause")

int main() {
    // Declaracao e inicializacao do vetor de temperaturas (exemplo com 8 valores fixos)
    int temperaturas[8] = {-10, -8, 0, 1, 2, 5, -2, -4 };

    int menor = temperaturas[0];  // Inicializa 'menor' com o primeiro valor do vetor
    int maior = temperaturas[0];  // Inicializa 'maior' com o primeiro valor do vetor
    int soma = 0;                 // Variavel acumuladora da soma das temperaturas

    // Laco que percorre as 8 temperaturas
    for (int i = 0; i < 8; i++) {
        // Atualiza o menor valor se encontrar um mais baixo
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        // Atualiza o maior valor se encontrar um mais alto
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
        // Soma os valores
        soma += temperaturas[i];
    }

    // Calcula a media com divisao real
    float media = soma / 8.0;

    // Exibe os resultados
    printf("O menor valor e %d\n", menor);
    printf("O maior valor e %d\n", maior);
    printf("A media de temperaturas e %.1f\n", media);

    system("pause");  // Pausa a execucao (apenas no Windows)
    return 0;         // Finaliza o programa com sucesso
}

