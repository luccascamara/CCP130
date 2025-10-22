#include <stdio.h> // Biblioteca padrão para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() 
{
    float km, dias, preco_total;


    printf("Digite os kms percorridos:\n");
    scanf("%f", &km);

	printf("Digite os dias:\n\n");
    scanf("%f", &dias);


    preco_total = (dias * 60) + (km * 0.15);

    printf("Preco total aluguel: %.2f\n", preco_total);
	
    system("pause"); 
	return 0;
}

