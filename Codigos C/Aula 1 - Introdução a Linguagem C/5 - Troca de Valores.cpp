#include <stdio.h> // Biblioteca padrão para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() {

    float a, b, temp;

	printf("Digite o primeiro numero (a): \n");
    scanf("%f", &a);

	printf("Digite o segundo numero (b): \n");
    scanf("%f", &b);
	
    temp = a;
    a = b;
    b = temp;

    printf("a = %1.f \n",  a );
    printf("b = %1.f \n", b);
    
	system("pause");
    return 0;
	
}

