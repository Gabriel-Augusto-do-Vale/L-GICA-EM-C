#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
	float valor, plano, min, total;
	
	
	printf("Digite a quantidade de minutos usados no telefone: \n");
	scanf("%f", &min);
	
	plano = 50;
	valor = (min * 2) - 200;
	total = plano + valor;
	
	if(min>100)
		printf("O valor a pagar eh: %f\n", total);
	else if(min<100)
		printf("O valor a pagar eh: %f\n", plano);
	else
		printf("O valor a pagar eh: %f\n", plano);
}

