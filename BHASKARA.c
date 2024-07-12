#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float a, b, c, delta, quadrado, baskapositivo, baskanegativo;
	printf("Insira o valor do coeficiente a: \n");
	scanf("%f", &a);
	printf("Insira o valor do coeficiente b: \n");
	scanf("%f", &b);
	printf("Insira o valor do coeficiente c: \n");
	scanf("%f", &c);
	
	delta = (pow(b, 2)) - 4 * a * c;
	quadrado = sqrt(delta);
	baskapositivo = (-b + quadrado) / 2 * a;
	baskanegativo = (-b - quadrado) / 2 * a;
	
	printf("O valor de x1 eh: %f\n", baskapositivo);
	printf("O valor de x2 eh: %f\n", baskanegativo);
	
}
