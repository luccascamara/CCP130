#include <stdio.h> // Biblioteca padr�o para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() {
    char tipo_combustivel;
    float litros, valor_total, desconto;

    // Pre�o do litro dos combust�veis
    const float preco_alcool = 3.19;
    const float preco_gasolina = 4.39;

    // Solicitar tipo de combust�vel
    printf("Digite o tipo de combustivel (G para Gasolina ou A para Alcool): \n");
    scanf(" %c", &tipo_combustivel);  // Espa�o antes de %c para ignorar caracteres de nova linha

    // Solicitar quantidade de litros
    printf("Digite a quantidade de litros: \n");
    scanf("%f", &litros);

    // Calcular valor total e descontos
    if (tipo_combustivel == 'A' || tipo_combustivel == 'a') {
        // Para �lcool
        if (litros <= 20) {
            desconto = 0.03;  // Desconto de 3% por litro
        } else {
            desconto = 0.05;  // Desconto de 5% por litro
        }
        valor_total = litros * preco_alcool * (1 - desconto);  // Calcula o valor com desconto
    } 
    else if (tipo_combustivel == 'G' || tipo_combustivel == 'g') {
        // Para Gasolina
        if (litros <= 20) {
            desconto = 0.04;  // Desconto de 4% por litro
        } else {
            desconto = 0.06;  // Desconto de 6% por litro
        }
        valor_total = litros * preco_gasolina * (1 - desconto);  // Calcula o valor com desconto
    } 
    else {
        printf("Tipo de combust�vel inv�lido.\n");
        return 1;  // Finaliza o programa se o tipo de combust�vel for inv�lido
    }

    // Exibir o resultado
    printf("Valor com desconto de %.0f%%: %.2f\n", desconto * 100, valor_total);
	
	system("pause");
    return 0;
}



