#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int n, cont = 0;
    float *numeros;
    float media, soma = 0, soma_resultados = 0;
    float maior, menor, amplitude;

    printf("Quantos numeros voce ira usar?: ");
    scanf("%d", &n);

    numeros = (float *)malloc(n * sizeof(float));

    while (cont < n) {
        printf("Insira o numero %d: ", cont + 1);
        scanf("%f", &numeros[cont]);

        soma += numeros[cont];
        cont++;
    }

    media = soma / n;
    printf("A media dos numeros digitados eh: %f\n", media);

    printf("Resultado da operacao (a - media)^2 para cada numero:\n");
    cont = 0;

    while (cont < n) {
        float resultado = pow(numeros[cont] - media, 2);
        printf("Resultado %d: %f\n", cont + 1, resultado);

        soma_resultados += resultado;
        cont++;
    }
	
	printf("\n");

    float resultado_final = soma_resultados / n;
    printf("Frequencia absoluta: %f\n", soma);

    float desvio_padrao = sqrt(resultado_final);
    printf("Desvio padrao: %f\n", desvio_padrao);
	
	maior = numeros[0];
	menor = numeros[0];
	cont = 1;
	
	while (cont < n) {
        if (numeros[cont] > maior) {
            maior = numeros[cont];
        }
		
        if (numeros[cont] < menor) {
            menor = numeros[cont];
        }
		
        cont++;
    }
	
	amplitude = maior - menor;
    printf("Amplitude: %f\n", amplitude);
    printf("\n");
    printf("\nResolucao escrita:\n");
    printf("\n");
    printf("DESVIO PADRAO: \n v( ");
    
    for (cont = 0; cont < n; cont++) {
        printf("(%.2f - %.2f)^2", numeros[cont], media);
        
        if (cont < n - 1) {
            printf(" + ");
        }
    }
    
    printf(" ) / %d = %f\n", n, desvio_padrao);
    printf("\n");
    printf("FREQUENCIA ABSOLUTA: ");
    printf("\n");
    
    for (cont = 0; cont < n; cont++) {
        printf("%.2f", numeros[cont]);
        
        if (cont < n - 1) {
            printf(" + ");
        }
    }
    printf(" = %f\n", soma);
    printf("\n");
    printf("AMPLITUDE: \n%.2f - %.2f = %f\n\n", maior, menor, amplitude);
    printf("\n");
    
    free(numeros);

    return 0;
}
