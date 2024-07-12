#include <stdlib.h>
#include <stdio.h>


int main(void){
	
	int X;
	float Y, consumo;
	printf("Qual a distancia percorrida? \n");
	scanf("%d", &X);
	printf("Qual a quantidade de combustivel gasto? \n");
	scanf("%f", &Y);
	
	consumo = X / Y;
	
	printf("A media de combustivel gasto eh %f", consumo);
	printf("km/l");
	
}
