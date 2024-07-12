#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, i = 0, y;
    
    printf("Insira o ano que voce esta usando esse aplicativo: \n");
    scamf("%d", &y);
    printf("Insira quantas pessoas irao colocar a idade: \n");
    scanf("%d", &x);
    
    int ano[x], idade[x], soma;
    float media;
    
    printf("Insira o ano de nascimento das pessoas: \n");
    for(i; i < x; i++){
    	scanf("%d", &ano[i]);
    	idade[i] = 2023 - ano[i];
    	soma += idade[i];
	}
	media = soma / x;
	printf("Media de idade do grupo: %.2f", media);}
