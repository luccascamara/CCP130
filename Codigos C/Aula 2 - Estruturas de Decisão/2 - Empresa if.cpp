#include <stdio.h> // Biblioteca padrão para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() {
    float salario, novo_salario, valor_reajuste;
    int indice_reajuste;

    printf("Digite o salario:\n");
    scanf("%f", &salario);

    if (salario <= 400.00) {
        indice_reajuste = 15;
    } else if (salario <= 800.00) {
        indice_reajuste = 12;
    } else if (salario <= 1200.00) {
        indice_reajuste = 10;
    } else if (salario <= 2000.00) {
        indice_reajuste = 7;
    } else {
        indice_reajuste = 4;
    }

    valor_reajuste = salario * indice_reajuste / 100.0;
    novo_salario = salario + valor_reajuste;

    printf("Novo salario = %.2f\n", novo_salario);
    printf("Valor do reajuste = %.2f\n", valor_reajuste);
    printf("Indice do reajuste = %d\n", indice_reajuste);

	system("pause");
    return 0;
}


