#include <stdio.h>  // Biblioteca padrão de entrada e saída (para printf e scanf)
#include <stdlib.h> // Biblioteca para usar o system("pause") no Windows

int main() {
    // Declaração de variáveis
    int numero;           // Armazena o número digitado pelo usuário
    int contador = 0;     // Conta quantos números válidos foram digitados (excluindo o zero)
    int soma = 0;         // Acumula a soma de todos os números digitados


    // Laço infinito que será interrompido com break quando o usuário digitar 0
    while (1) {
        printf("Digite um numero:\n");  // Solicita um número ao usuário
        scanf("%d", &numero);          // Lê o número digitado e armazena na variável 'numero'

        // Verifica se o número digitado é zero
        if (numero == 0) {
            break; // Encerra o laço se o número for 0
        }

        contador++;         // Incrementa o número de entradas válidas
        soma += numero;     // Adiciona o número digitado à soma total
    }

    // Verifica se pelo menos um número diferente de zero foi digitado
    if (contador > 0) {
        // Calcula a média como número real (float) para evitar perda de precisão
        float media = (float)soma / contador;

        // Exibe os resultados
        printf("Voce digitou %d numeros\n", contador);       // Mostra quantos números foram digitados
        printf("O somatorio dos numeros eh %d\n", soma);      // Mostra a soma total
        printf("Media = %.2f\n", media);                     // Mostra a média com duas casas decimais
    } else {
        // Se o usuário digitou apenas zero
        printf("Nenhum numero foi digitado além de zero.\n");
    }

    // Pausa o programa (funciona apenas no Windows)
    system("pause");

    // Finaliza o programa com sucesso
    return 0;
}

