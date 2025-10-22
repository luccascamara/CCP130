#include <stdio.h>   // Biblioteca padr�o para entrada e sa�da (printf, scanf)
#include <stdlib.h>  // Biblioteca necess�ria para usar system("pause")

int main() {
    int n;  // Declara a vari�vel que armazenar� o n�mero digitado pelo usu�rio

    // Solicita ao usu�rio que digite um n�mero inteiro
    printf("Digite um numero:\n");
    scanf("%d", &n);  // L� e armazena o valor digitado na vari�vel 'n'

    // La�o 'for' que vai de 1 at� 'n'
    for (int i = 1; i <= n; i++) {
        // Imprime tr�s valores:
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

    system("pause");  // Pausa o programa para o usu�rio ver o resultado (funciona no Windows)
    return 0;         // Finaliza o programa com sucesso
}

