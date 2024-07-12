#include <stdio.h>
#include <stdlib.h>

int main(void){
	float a[3];
	float soma, quadrado[3];
	int i = 0;
	
	for(i; i < 4; i++){
		printf("Insira um numero: ");
		scanf("%f", &a[i]);
		quadrado[i] = a[i] * a[i];
		soma += quadrado[i];
	}
	printf("A soma dos quadrados dos numeros eh: %.2f", soma);
}

