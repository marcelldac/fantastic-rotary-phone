#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// Calculadora de soma simples em C.
int main (){
	setlocale(LC_ALL,""); //Informa ao programa o tipo de teclado que está sendo utilizado.
	float a, b; // Tipo e nome das variáveis.
	
	printf("Digite o número 1:\n");
	scanf("%f", &a);
	if (a < 0){ // Condição Se.
		printf("Número invalido.");
		
	} else{ //Condição Senão.
		printf("Digite o número 2:\n");
		scanf("%f", &b);
		printf("O resultado da soma é:%2.f%2.f", a + b);
	}
	
	
	
return 0;
}
