#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int escolha;
	float celsius, fah, celsius2, fah2, tc, tf;
	escolha = 0;
	printf("Informe a escala que deseja converter: \n");
	printf("Para converter Celsius para Fahrenheit insira 1 \n");
	printf("Para converter Fahrenheit para Celsius insira 2 \n");
	
	scanf("%d", &escolha);
	

	
	switch(escolha)
	{
		case 1:
			printf("Insira o valor em graus Celsius: \n");
			scanf("%f", &celsius);	
			tc = celsius * 1.8;
			fah2 = tc + 32;
			printf("O valor de graus Fahrenheit eh: %f\n", fah2);
		break;
		
		case 2:
			printf("Insira o valor em graus Fahrenheit: \n");
			scanf("%f", &fah);
			tf = 32 - fah;
			celsius2 = tf / 1.8;
			printf("O valor de graus Celsius eh: %f\n", celsius2);
		break;
		
		default:
			printf("Opcao indisponivel");
	}

}
