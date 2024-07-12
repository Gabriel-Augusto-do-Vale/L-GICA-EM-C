#include <stdio.h>


int main(void){
	float var1, var2, MEDIA;
	printf("Insira a primeira nota: \n");
	scanf("%f", &var1);
	printf("Insira a segunda nota: \n");
	scanf("%f", &var2);
	
	MEDIA = (var1 + var2) / 2;
	
	printf("MEDIA = %f\n", MEDIA);
}

