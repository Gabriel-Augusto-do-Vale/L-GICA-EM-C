#include <stdio.h>
#include <stdlib.h>



int main(void){
	float nota1, nota2, total;

printf("Digite a primeira nota: \n");
scanf("%f", &nota1);
printf("Digite a segunda nota: \n");
scanf("%f", &nota2);

total = nota1 + nota2;

printf("NOTA FINAL = %f\n", total);

if(total > 60)
	printf("APROVADO");
else
	printf("REPROVADO");

}



