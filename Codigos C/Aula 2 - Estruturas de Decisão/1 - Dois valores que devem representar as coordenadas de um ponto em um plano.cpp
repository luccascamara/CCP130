#include <stdio.h> // Biblioteca padrão para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() {
    int x, y;
    
    printf("Digite x e y: \n");
    scanf("%d %d", &x, &y );

    if (x > 0 && y > 0) {
        printf("Q1\n");
        
    } else if (x < 0 && y > 0) {
        printf("Q2\n");
        
    } else if (x < 0 && y < 0) {
        printf("Q3\n");
        
    } else if (x > 0 && y < 0) {
        printf("Q4\n");
        
    } else if (x == 0 && y == 0) {
        printf("Origem\n");
        
    } else if (x == 0) {
        printf("Sobre o eixo y\n");
        
    } else {
        printf("Sobre o eixo x\n");
    }

	system("pause");
    return 0;
    
}

