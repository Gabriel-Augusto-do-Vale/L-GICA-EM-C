#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
	int glicose;
	printf("Informe a quantidade de glicose no sangue");
	scanf("%d", &glicose);
	
	if(glicose<=100)
		printf("NORMAL");
	else if((glicose>100) & (glicose<140))
		printf("ELEVADA");
	else
		printf("DIABETES");
}
