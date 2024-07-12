#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x, i = 0, alunosA = 0, alunosR = 0;
	int media = 7;
	
	printf("Insira quantos alunos a turma possue: ");
	scanf("%d", &x);
	
	float nota[x];
	
	printf("Insira as notas dos %d alunos: ", x);
	
	for(i; i < x; i++){
		scanf("%f", &nota[i]);
		
		if(nota[i] >= media){
			alunosA++;
		}
		else{
			alunosR++;
		}
	}
	printf("\nQUANTIDADE DE ALUNOS ACIMA DA MEDIA (media = 7): %d\n", alunosA);
	printf("QUANTIDADE DE ALUNOS ABAIXO DA MEDIA (media = 7): %d\n", alunosR);
}
