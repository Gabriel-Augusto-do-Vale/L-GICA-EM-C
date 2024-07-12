#include <stdio.h>

#define TAMANHO 20

void bubbleSort(int vetor[], int tamanho) {
    int i, j;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {

                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i;
    int vetor[TAMANHO];

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, TAMANHO);

    printf("\nVetor em ordem crescente:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
