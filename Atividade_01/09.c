#include <stdio.h>
#include <stdlib.h>

//Fa�a um Programa que leia o tamanho de um lado do quadrado e calcule sua �rea em seguida mostre o dobro desta �rea para o usu�rio.

int quadradoArea(int lado){
	int area=0;
	area = lado*lado;
	
	return(area*area);
}


int main(int argc, char *argv[]) {
	
	int lado = 0, area =0;
	
	
	printf("Digite o tamanho do lado do quadrado: ");	
	scanf("%d", &lado);
	
	

	printf("O quadrado da area do circulo �: %d", quadradoArea(lado));
	
	return 0;
}
