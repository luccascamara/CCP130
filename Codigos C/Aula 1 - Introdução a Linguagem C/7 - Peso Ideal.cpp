#include <stdio.h> // Biblioteca padrão para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main()

{
    float altura, peso_ideal;

    printf("Digite a sua altura (m): \n\n");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;

    printf("Peso ideal: %.2f kg\n", peso_ideal);
    
    system("pause");
    return 0;
}


