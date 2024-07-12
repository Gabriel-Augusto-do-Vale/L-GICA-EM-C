#include <stdio.h>
#include <math.h>

int main(void){
	int i = 0, primeiro = 0, segundo = 1, proximo, x;
	
	printf("Insira a quantidade de numeros a serem impressos na sequencia fibonacci: ");
	scanf("%d", &x);
	
	for(i = 0; i < x; i++){
		printf("%d\n", primeiro);
		proximo = primeiro + segundo;
		primeiro = segundo;
		segundo = proximo;
		
	}
}

