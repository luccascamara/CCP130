#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <math.h>     // Biblioteca para funcoes matematicas
#include <stdlib.h>   // Necessaria para system("pause")

// Estrutura que representa um ponto no plano
struct ponto {
    float x;
    float y;
};

// Estrutura que representa um retangulo com 4 pontos
struct retangulo {
    struct ponto pontos[4];
};

// Funcao que calcula a distancia entre dois pontos
float calcularDistancia(struct ponto p1, struct ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct retangulo ret;

    // Leitura dos 4 pontos do retangulo
    for (int i = 0; i < 4; i++) {
        printf("Digite o x do ponto %d:\n", i);
        scanf("%f", &ret.pontos[i].x);
        printf("Digite o y do ponto %d:\n", i);
        scanf("%f", &ret.pontos[i].y);
    }

    // Calcula dois lados consecutivos do retangulo
    float lado1 = calcularDistancia(ret.pontos[0], ret.pontos[1]);
    float lado2 = calcularDistancia(ret.pontos[1], ret.pontos[2]);

    // Calcula o perimetro do retangulo
    float perimetro = 2 * (lado1 + lado2);

    // Calcula a area do retangulo
    float area = lado1 * lado2;

    // Exibe os resultados
    printf("\nPerimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

