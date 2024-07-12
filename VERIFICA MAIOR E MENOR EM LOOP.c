#include <stdio.h>
#include <stdlib.h>

int main (void){
	int idade, maior, menor;
	
	printf("Insira sua idade (ou zero para sair): \n");
	scanf("%d", idade);
	
	if (idade >= 1){
		idade = maior;
		idade = menor;
	}	

	while (idade >= 1){
		
		printf("Insira sua idade (ou zero para sair): \n");
		scanf("%d", idade);
		
		if (idade > maior){
			maior = idade;
		} else if (idade < menor){
			menor = idade;
		}
		
	}
	printf("A maior idade eh: %d\n", maior);
	printf("A menor idade eh: %d\n", menor);
}

