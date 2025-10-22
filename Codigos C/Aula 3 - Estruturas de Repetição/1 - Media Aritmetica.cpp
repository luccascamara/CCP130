#include <stdio.h>  // Biblioteca padr�o de entrada e sa�da (para printf e scanf)
#include <stdlib.h> // Biblioteca para usar o system("pause") no Windows

int main() {
    // Declara��o de vari�veis
    int numero;           // Armazena o n�mero digitado pelo usu�rio
    int contador = 0;     // Conta quantos n�meros v�lidos foram digitados (excluindo o zero)
    int soma = 0;         // Acumula a soma de todos os n�meros digitados


    // La�o infinito que ser� interrompido com break quando o usu�rio digitar 0
    while (1) {
        printf("Digite um numero:\n");  // Solicita um n�mero ao usu�rio
        scanf("%d", &numero);          // L� o n�mero digitado e armazena na vari�vel 'numero'

        // Verifica se o n�mero digitado � zero
        if (numero == 0) {
            break; // Encerra o la�o se o n�mero for 0
        }

        contador++;         // Incrementa o n�mero de entradas v�lidas
        soma += numero;     // Adiciona o n�mero digitado � soma total
    }

    // Verifica se pelo menos um n�mero diferente de zero foi digitado
    if (contador > 0) {
        // Calcula a m�dia como n�mero real (float) para evitar perda de precis�o
        float media = (float)soma / contador;

        // Exibe os resultados
        printf("Voce digitou %d numeros\n", contador);       // Mostra quantos n�meros foram digitados
        printf("O somatorio dos numeros eh %d\n", soma);      // Mostra a soma total
        printf("Media = %.2f\n", media);                     // Mostra a m�dia com duas casas decimais
    } else {
        // Se o usu�rio digitou apenas zero
        printf("Nenhum numero foi digitado al�m de zero.\n");
    }

    // Pausa o programa (funciona apenas no Windows)
    system("pause");

    // Finaliza o programa com sucesso
    return 0;
}

