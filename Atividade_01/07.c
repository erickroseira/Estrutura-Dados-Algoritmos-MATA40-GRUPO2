#include <stdio.h>
#include <stdlib.h>

//Fa�a um Programa que converta metros para cent�metros.

float metrosToCentimetro(float metros){

	float centimetros=0;
	centimetros = metros * 100;
	return centimetros;

}





int main(int argc, char *argv[]) {
	
	float metros = 0, centimetros =0;
	
	
	printf("Digite a quantidade de metros: ");	
	scanf("%f", &metros);
	
	

	printf("Em centimetros �: %f", metrosToCentimetro(metros));
	
	return 0;
}
