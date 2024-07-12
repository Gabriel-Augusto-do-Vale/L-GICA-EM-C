#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i = 0, x;
	
	printf("Insira a quantidade de numeros que voce vai usar: ");
	scanf("%d", &x);
	
	int a[x], b[x], j = x - 1;
	
	printf("\nInsira %d numeros: \n", x);
	
	for(i; i < x; i++){
		scanf("%d", &a[i]);
		b[j] = a[i];
		j--;
	}
	int k = 0;
	printf("\nNumeros Inseridos: \n");
	for(k; k < x; k++){
		printf("%d\n", a[k]);
	}
	printf("\nNumeros inversos: \n");
	int l = 0;
	for(l; l < x; l++){
		printf("%d\n", b[l]);
	}
}
