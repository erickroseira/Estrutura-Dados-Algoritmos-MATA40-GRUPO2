#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre a soma desses n�meros.

int main(int argc, char *argv[]) {
	
	int a = 0, b =0, c=0, d=0, soma=0;
	
	
	printf("Escreva o primeiro numero");	
	scanf("%d", &a);
	printf("Escreva o segundo numero");	
	scanf("%d", &b);
	printf("Escreva o terceiro numero");	
	scanf("%d", &c);
	printf("Escreva o quarto numero");	
	scanf("%d", &d);

	soma = a+b+c+d;
	printf("A soma do quatro numeros �: %d", soma );
	
	return 0;
}