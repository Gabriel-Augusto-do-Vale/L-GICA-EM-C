#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a[19], par[19], impar[19];
	int i = 0, j = 0, k = 0, l = 0;
	
	printf("INSIRA 20 NUMEROS INTEIROS: \n");
	
	for(i; i < 20; i++){
		scanf("%d", &a[i]);
	}
	
	printf("\nNUMEROS DIGITADOS: \n");
	for(l; l < 20; l++){
		printf("%d\n", a[l]);
	}
	
	printf("\n\nPARES: \n");
		
		
	for(j; j < 20; j++){
		if(a[j] % 2 == 0){
			par[j] = a[j];
			printf("%d\n", par[j]);
		}
	}
	
	printf("\n\nIMPARES: \n");
	
	for(k; k < 20; k++){
		if(a[k] % 2 != 0){
			impar[k] = a[k];
			printf("%d\n", impar[k]);
		}
	}}
