#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int a, b, c;
	printf("INSIRA O PRIMEIRO NUMERO: \n");
	scanf("%d", &a);
	printf("INSIRA O SEGUNDO NUMERO: \n");
	scanf("%d", &b);
	printf("INSIRA O TERCEIRO NUMERO: \n");
	scanf("%d", &c);
	
	if ((a>b) & (a>c))
		printf("O maior eh: %d\n", a);
		
	else if ((b>c) & (b>a))
		printf("O maior eh: %d\n", b);
	
	else if ((c>a) & (c>b))
		printf("O maior eh: %d\n", c);

}
