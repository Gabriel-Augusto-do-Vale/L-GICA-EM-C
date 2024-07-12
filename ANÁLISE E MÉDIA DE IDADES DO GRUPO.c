#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int anoatual, mesatual, x, i = 0, ano[x], mes[x], idade[x], soma = 0;
    float media;

    printf("Insira o ano e o mes (numero do mes) que voce esta usando esse programa:\n");
    printf("ANO: ");
    scanf("%d", &anoatual);
    printf("MES: ");
    scanf("%d", &mesatual);

    printf("\nInsira quantas pessoas vao colocar o ano de nascimento:\n");
    scanf("%d", &x);

    printf("\nInsira os anos e os meses de nascimento:\n");

    for (i = 0; i < x; i++) {
        printf("Ano de nascimento da %d pessoa: ", i + 1);
        scanf("%d", &ano[i]);
        printf("Mes de nascimento da %d pessoa: ", i + 1);
        scanf("%d", &mes[i]);
        if (mes[i] >= mesatual) {
            idade[i] = anoatual - ano[i];
            soma += idade[i];
        } else if (mes[i] < mesatual) {
            idade[i] = anoatual - 1 - ano[i];
            soma += idade[i];
        }
    }

    media = (float)soma / x;
    printf("Media de idade do grupo: %.2f\n", media);

}
