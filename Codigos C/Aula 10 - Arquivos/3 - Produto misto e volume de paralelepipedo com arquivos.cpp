#include <stdio.h>    // Biblioteca padrao para entrada e saida
#include <stdlib.h>   // Necessaria para system("pause")
#include <math.h>     // Biblioteca para fabs()

// Funcao para o produto escalar de dois vetores de tamanho 3
float produto_escalar(float a[], float b[]) {
    return a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
}

// Funcao para o produto vetorial de dois vetores de tamanho 3
void produto_vetorial(float a[], float b[], float resultado[]) {
    resultado[0] = a[1]*b[2] - a[2]*b[1];
    resultado[1] = a[2]*b[0] - a[0]*b[2];
    resultado[2] = a[0]*b[1] - a[1]*b[0];
}

// Funcao para o produto misto de tres vetores
float produto_misto(float u[], float v[], float w[]) {
    float vetorial[3];
    produto_vetorial(v, w, vetorial);      // Primeiro faz o produto vetorial de v e w
    return produto_escalar(u, vetorial);   // Depois o escalar com u
}

int main() {
    FILE *fr = fopen("prodMistoR.txt", "r");  // Abre o arquivo para leitura

    float x[3], y[3], z[3];  // Vetores 3D

    // Le os tres vetores do arquivo
    fscanf(fr, "%f %f %f", &x[0], &x[1], &x[2]);
    fscanf(fr, "%f %f %f", &y[0], &y[1], &y[2]);
    fscanf(fr, "%f %f %f", &z[0], &z[1], &z[2]);

    fclose(fr);  // Fecha o arquivo

    float valor = fabs(produto_misto(x, y, z));  // Calcula o modulo do produto misto

    // Exibe os vetores corretamente
    printf("x = (%.4f, %.4f, %.4f)\n", x[0], x[1], x[2]);
    printf("y = (%.4f, %.4f, %.4f)\n", y[0], y[1], y[2]);
    printf("z = (%.4f, %.4f, %.4f)\n", z[0], z[1], z[2]);

    // Exibe o volume (produto misto)
    printf("Volume: %.4f\n", valor);

    system("pause");  // Pausa a execucao (Windows)
    return 0;         // Finaliza o programa com sucesso
}

