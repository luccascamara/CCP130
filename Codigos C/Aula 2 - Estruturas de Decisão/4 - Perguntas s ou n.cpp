#include <stdio.h> // Biblioteca padr�o para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() {
    char resposta;
    int pontos = 0; // somat�rio

    // Mensagem de instru��o
    printf("Responda as perguntas com sim (s) ou nao (n)\n");

    // Perguntas
    printf("Telefonou para a vitima?\n");
    scanf(" %c", &resposta);  // espa�o antes de %c para limpar o buffer
    if (resposta == 's' || resposta == 'S') pontos++;

    printf("Esteve no local do crime?\n");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') pontos++;

    printf("Mora perto da vitima?\n");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') pontos++;

    printf("Devia para a vitima?\n");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') pontos++;

    printf("Ja trabalhou com a vitima?\n");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') pontos++;

    // Classifica��o com base nas respostas
    if (pontos == 2) {
        printf("SUSPEITO!\n");
    } else if (pontos >= 3 && pontos <= 4) {
        printf("CUMPLICE!\n");
    } else if (pontos == 5) {
        printf("ASSASSINO!\n");
    } else {
        printf("INOCENTE!\n");
    }

    return 0;
}


