#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a[2], b[2], c[5];
	int i = 0, j = 0, k = 0, l = 0, m = 0;
	printf("Insira 3 numeros: \n");
	
	for(i; i < 3; i++){
		scanf("%d", &a[i]);
	}
	
	printf("\nInsira mais 3 numeros: \n");
	for(j; j < 3; j++){
		scanf("%d", &b[j]);
	}
	
	for(k; k < 6; k +=2){
		c[k] = a[m];
		c[k + 1] = b[m];
		m++;
	}
	
	printf("\nNUMEROS INTERCALADOS: \n");
	for(l; l < 6; l++){
		printf("%d\n", c[l]);
	}
}
