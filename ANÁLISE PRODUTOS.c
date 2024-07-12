#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int codigo[10], i = 0;
    float preco[10], preco1 = 0, preco2 = 0, preco3 = 0;
    int codigo1 = 0, codigo2 = 0, codigo3 = 0;

    for (i = 0; i < 10; i++) {
        printf("\nEscreva respectivamente o numero do codigo e o preco do %d produto:\n", i + 1);
        
        scanf("%d %f", &codigo[i], &preco[i]);
        
        if(preco[i] > preco1) {
            preco3 = preco2;
            preco2 = preco1;
            preco1 = preco[i];
            codigo3 = codigo2;
            codigo2 = codigo1;
            codigo1 = codigo[i];
        } 
		else if(preco[i] > preco2) {
            preco3 = preco2;
            preco2 = preco[i];
            codigo3 = codigo2;
            codigo2 = codigo[i];
        } 
		else if(preco[i] > preco3) {
            preco3 = preco[i];
            codigo3 = codigo[i];
        }
    }

    printf("\nMaior preco (Codigo: %d): %.2f\n", codigo1, preco1);
    printf("Segundo maior preco (Codigo: %d): %.2f\n", codigo2, preco2);
    printf("Terceiro maior preco (Codigo: %d): %.2f\n", codigo3, preco3);

    return 0;
}
