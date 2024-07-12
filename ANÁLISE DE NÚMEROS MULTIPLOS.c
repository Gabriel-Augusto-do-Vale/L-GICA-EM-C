#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int num1, num2;
	printf("Informe o primeiro numero inteiro: \n");
	scanf("%d", &num1);
	printf("Informe o segundo numero inteiro: \n");
	scanf("%d", &num2);

	
	
	if(num1%num2 == 0) 
		printf("Sao multiplos");
	else if(num2%num1 == 0)
		printf("Sao multiplos");
	else
		printf("nao sao multiplos");
}

