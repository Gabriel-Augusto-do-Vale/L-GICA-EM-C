#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	int A, B, C, D, DIFERENCA;
	printf("Insira o primeiro valor: \n");
	scanf("%d", &A);
	printf("Insira o segundo valor: \n");
	scanf("%d", &B);
	printf("Insira o terceiro valor: \n");
	scanf("%d", &C);
	printf("Insira o quarto valor: \n");
	scanf("%d", &D);
	
	DIFERENCA = (A * B) - (C * D);
	
	printf("DIFERENCA = %d", DIFERENCA);
	
	
	
}
