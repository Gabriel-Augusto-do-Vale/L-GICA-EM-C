#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
	float valor, quantidade, total, troco, cliente;
	printf("Digite o valor do produto: \n");
	scanf("%f", &valor);
	printf("Digite a quantidade de unidades compradas: \n");
	scanf("%f", &quantidade);
	
	total = valor * quantidade;
	
	printf("Digite o valor entregue pelo cliente: \n");
	scanf("%f", &cliente);
	
	troco = cliente - total;
	
	printf("O total a pagar eh: %f\n", total);
	printf("O troco deve ser: %f\n", troco);
	
}
