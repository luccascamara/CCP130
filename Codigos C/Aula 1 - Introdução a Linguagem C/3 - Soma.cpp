#include <stdio.h> // Biblioteca padrão para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() {
    float num1, num2, soma;
    
printf("Digite o primeiro numero: ");
scanf("%f", &num1); // o scanf é usado para digitar a entrada.

printf("Digite o segundo numero: ");
scanf("%f", &num2); // %f indica que estamos esperando um número float. e o &num1 indica o endereço da váriavel 

    soma = num1 + num2;

    printf("Resultado eh: %.2f \n", soma);
    return 0;
}



