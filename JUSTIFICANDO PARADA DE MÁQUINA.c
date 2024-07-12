#include <stdio.h>
#include <stdlib.h>

int main (void){
	int horas, minutos, segundos;
	int justificativa;
	
	printf("Qual foi o tempo de parada (HORAS, MINUTOS, SEGUNDOS)? ");
	scanf("%d %d %d", &horas, &minutos, &segundos);
	printf("Qual o motivo da parada? \n");
	printf("1 = Setup\n");
	printf("2 = Intervalo\n");
	printf("3 = Manutencao\n");
	printf("4 = Metrologia\n");
	printf("5 = Ferramentaria\n");
	scanf("%d", &justificativa);
	
	switch (justificativa){
		case 1:
			printf("Tempo de parada: %d ", horas);
			printf("HORAS");
			printf(" %d ", minutos);
			printf("MINUTOS");
			printf(" %d ", segundos);
			printf("SEGUNDOS\n");
			printf("Motivo de parada: Setup");
		break;
		
		case 2:
			printf("Tempo de parada: %d ", horas);
			printf("HORAS");
			printf(" %d ", minutos);
			printf("MINUTOS");
			printf(" %d ", segundos);
			printf("SEGUNDOS");
			printf("Motivo de parada: Intervalo");
		break;
		
		case 3:
			printf("Tempo de parada: %d ", horas);
			printf("HORAS");
			printf(" %d ", minutos);
			printf("MINUTOS");
			printf(" %d ", segundos);
			printf("SEGUNDOS");
			printf("Motivo de parada: Manutencao");
		break;
		
		case 4:
			printf("Tempo de parada: %d ", horas);
			printf("HORAS");
			printf(" %d ", minutos);
			printf("MINUTOS");
			printf(" %d ", segundos);
			printf("SEGUNDOS");
			printf("Motivo de parada: Metrologia");
		break;
		
		case 5:
			printf("Tempo de parada: %d ", horas);
			printf("HORAS");
			printf(" %d ", minutos);
			printf("MINUTOS");
			printf(" %d ", segundos);
			printf("SEGUNDOS");
			printf("Motivo de parada: Ferramentaria");
		break;
		
		default:
			printf("Opcao nao disponivel");
	}
	
}
