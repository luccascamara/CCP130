#include <stdio.h> // Biblioteca padrão para C
#include <stdlib.h> // Biblioteca para usar system("pause")

int main() {
    
	float dias, horas, minutos, segundos , total_segundos; // declarar todas as variaveis
    
    printf("Digite a quantidade de Dias: \n ");
    scanf("%f", &dias);
    
	printf("Digite a quantidade de Horas: \n ");
    scanf("%f" , &horas);
    
    printf("Digite a quantidade de Minutos: \n ");
    scanf("%f" , &minutos);   
    
    printf("Digite a quantidade de Segundos : \n ");
    scanf("%f" , &segundos);  
    
    total_segundos = (dias * 86400) + (horas * 3600) + (minutos * 60) + segundos;
    
    printf("Tempo em segundos: %f\n", total_segundos);
    
	system("pause"); 
    return 0;
}

