#include <stdio.h>
#include <stdlib.h>


//Fa�a um Programa que pe�a dois n�meros e imprima a soma.

int main(int argc, char *argv[]) {
	
	int a = 0, b =0;
	
	
	printf("Escreva o primeiro numero");	
	scanf("%d", &a);
	printf("Escreva o segundo numero");	
	scanf("%d", &b);



	printf("A soma dos dois numeros �: %d", (a+b) );
	
	return 0;
}