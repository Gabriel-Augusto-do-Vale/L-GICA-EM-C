#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	float pi, volume, raio;
	printf("Insira o raio da esfera: \n");
	scanf("%f", &raio);
	
	pi = 3.12159;
	volume = (4/3) * pi * (pow(raio, 3));
	
	printf("O volume da esfera eh: %f\n", volume);
}
