#include <stdio.h>   // Biblioteca padrão para entrada e saída (printf, scanf)
#include <stdlib.h>  // Biblioteca necessária para usar system("pause")

int main() {
    int n;  // Declara a variável que armazenará o número digitado pelo usuário

    // Solicita ao usuário que digite um número inteiro
    printf("Digite um numero:\n");
    scanf("%d", &n);  // Lê e armazena o valor digitado na variável 'n'

    // Laço 'for' que vai de 1 até 'n'
    for (int i = 1; i <= n; i++) {
        // Imprime três valores:
        // 1. o valor de i
        // 2. o quadrado de i (i * i)
        // 3. o cubo de i (i * i * i)
        printf("%d %d %d\n", i, i * i, i * i * i);

        // Imprime novamente os mesmos valores, mas com +1 no quadrado e no cubo:
        // 1. o valor de i
        // 2. o quadrado de i somado de 1
        // 3. o cubo de i somado de 1
        printf("%d %d %d\n", i, (i * i) + 1, (i * i * i) + 1);
    }

    system("pause");  // Pausa o programa para o usuário ver o resultado (funciona no Windows)
    return 0;         // Finaliza o programa com sucesso
}

