#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	float prod1, prod2, prod1q, prod1v, prod2q, prod2v, totalprod1, totalprod2, total;
	printf("Qual o codigo do produto 1? \n");
	scanf("%f", &prod1);
	printf("Quantas unidades do produto 1 estao sendo compradas? \n");
	scanf("%f", &prod1q);
	printf("Qual o preco de cada unidade do produto 1? \n");
	scanf("%f", &prod1v);
	
	printf("Qual o codigo do produto 2? \n");
	scanf("%f", &prod2);
	printf("Quantas unidades do produto 2 estao sendo compradas? \n");
	scanf("%f", &prod2q);
	printf("Qual o preco de cada unidade do produto 2? \n");
	scanf("%f", &prod2v);
	
	totalprod1 = prod1q * prod1v;
	totalprod2 = prod2q * prod2v;
	total = totalprod1 + totalprod2;
	
	printf("O TOTAL A PAGAR EH: %f\n", total);
}
