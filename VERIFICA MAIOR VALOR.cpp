#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
	int dis1, dis2, dis3;
	printf("Informe a primeira distancia do dardo: \n");
	scanf("%d", &dis1);
	printf("Informe a segunda distancia do dardo: \n");
	scanf("%d", &dis2);
	printf("Informe a terceira distancia do dardo: \n");
	scanf("%d", &dis3);
	
	if((dis1 > dis2) && (dis1 > dis3))
		printf("MAIOR DISTANCIA: %d\n", dis1);
	else if((dis2 > dis1) && (dis2 > dis3))
		printf("MAIOR DISTANCIA: %d\n", dis2);
	else
		printf("MAIOR DISTANCIA: %d\n", dis3);
}

