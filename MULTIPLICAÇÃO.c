#include <stdio.h>


int main(void){
	int var1, var2, PROD;
	printf("Insira o primeiro numero: \n");
	scanf("%d", &var1);
	printf("Insira o segundo numero: \n");
	scanf("%f", &var2);
	
	PROD = var1 * var2;
	
	printf("PROD = %d\n", PROD);
}
