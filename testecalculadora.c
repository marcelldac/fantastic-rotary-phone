#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// Calculadora de soma simples em C.
int main (){
	setlocale(LC_ALL,""); //Informa ao programa o tipo de teclado que est� sendo utilizado.
	float a, b; // Tipo e nome das vari�veis.
	
	printf("Digite o n�mero 1:\n");
	scanf("%f", &a);
	if (a < 0){ // Condi��o Se.
		printf("N�mero invalido.");
		
	} else{ //Condi��o Sen�o.
		printf("Digite o n�mero 2:\n");
		scanf("%f", &b);
		printf("O resultado da soma �:%2.f%2.f", a + b);
	}
	
	
	
return 0;
}
