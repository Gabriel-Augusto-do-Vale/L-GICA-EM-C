#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	float triangulo, circulo, trapezio, quadrado, retangulo, A, B, C;
	printf("Insira o valor da base A: \n");
	scanf("%f", &A);
	printf("Insira o valor da altura / raio da circunferencia C: \n");
	scanf("%f", &C);
	printf("Insira o valor da base B: \n");
	scanf("%f", &B);
	
	triangulo = (A * C) / 2;
	circulo = (3.14159 * C * C);
	trapezio = (A + B) / 2 * C;
	quadrado = B * B;
	retangulo = A * B;
	
	printf("TRIANGULO = %f\n", triangulo);
	printf("CIRCULO = %f\n", circulo);
	printf("TRAPEZIO = %f\n", trapezio);
	printf("QUADRADO = %f\n", quadrado);
	printf("RETANGULO = %f\n", retangulo);
}
