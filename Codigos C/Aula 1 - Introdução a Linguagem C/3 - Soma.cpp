#include <stdio.h> // Biblioteca padr�o para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() {
    float num1, num2, soma;
    
printf("Digite o primeiro numero: ");
scanf("%f", &num1); // o scanf � usado para digitar a entrada.

printf("Digite o segundo numero: ");
scanf("%f", &num2); // %f indica que estamos esperando um n�mero float. e o &num1 indica o endere�o da v�riavel 

    soma = num1 + num2;

    printf("Resultado eh: %.2f \n", soma);
    return 0;
}



