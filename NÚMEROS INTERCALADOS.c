#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a[2], b[2], c[5];
	int i = 0, j = 0, k = 0;
	printf("Insira 3 numeros: \n");
	
	for(i; i < 3; i++){
		scanf("%d", &a[i]);
	}
	
	printf("\nInsira mais 3 numeros: \n");
	for(j; j < 3; j++){
		scanf("%d", &b[j]);
	}
		
	c[0] = a[0];
	c[1] = b[0];
	c[2] = a[1];
	c[3] = b[1];
	c[4] = a[2];
	c[5] = b[2];
	
	printf("\nNUMEROS INTERCALADOS: \n");
	for(k; k < 6; k++){
		printf("%d\n", c[k]);
	}
}
