#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	float salario, nsalario, diferenca, porcentagem;
	scanf("%f", &salario);
	
	if (salario <=400){
		porcentagem = (salario / 100) * 15;
		nsalario = salario + porcentagem;
		diferenca = nsalario - salario;
		printf("Novo salario: %.2f \n", nsalario);
		printf("Reajuste ganho: %.2f \n", diferenca);
		printf("Em percentual: 15%");
	}
	else if ((salario <=800) && (salario > 400)){
		porcentagem = (salario / 100) * 12;
		nsalario = salario + porcentagem;
		diferenca = nsalario - salario;
		printf("Novo salario: %.2f \n", nsalario);
		printf("Reajuste ganho: %.2f \n", diferenca);
		printf("Em percentual: 12%");
	}
	else if ((salario <=1200) && (salario > 800)){
		porcentagem = (salario / 100) * 10;
		nsalario = salario + porcentagem;
		diferenca = nsalario - salario;
		printf("Novo salario: %.2f \n", nsalario);
		printf("Reajuste ganho: %.2f \n", diferenca);
		printf("Em percentual: 10%");
	}
	else if ((salario <=2000) && (salario > 1200)){
		porcentagem = (salario / 100) * 7;
		nsalario = salario + porcentagem;
		diferenca = nsalario - salario;
		printf("Novo salario: %.2f \n", nsalario);
		printf("Reajuste ganho: %.2f \n", diferenca);
		printf("Em percentual: 7%");	
	}
	else if (salario > 2000){
		porcentagem = (salario / 100) * 4;
		nsalario = salario + porcentagem;
		diferenca = nsalario - salario;
		printf("Novo salario: %.2f \n", nsalario);
		printf("Reajuste ganho: %.2f \n", diferenca);
		printf("Em percentual: 4%");
	}
}

