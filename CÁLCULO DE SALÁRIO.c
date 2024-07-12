#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char nome;
	float salario, vendas, porcentagem, salariototal;
	printf("Insira o nome do colaborador: \n");
	scanf("%c", &nome);
	printf("Insira o salario fixo do colaborador: \n");
	scanf("%f", &salario);
	printf("Insira o valor em vendas realizada pelo colaborador: \n");
	scanf("%f", &vendas);
	
	porcentagem = (vendas / 100) * 15;
	salariototal = porcentagem + salario;
	
	printf("COLABORADOR: %c\n", nome);
	printf("SALARIO FIXO: %f\n", salario);
	printf("VALOR DE VENDAS: %f\n", vendas);
	printf("TOTAL: %f\n", salariototal);
}
