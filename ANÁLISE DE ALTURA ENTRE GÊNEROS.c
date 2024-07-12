#include <stdio.h>

int main() {
    float altura, soma_altura_mulheres = 0, media_altura_mulheres = 0;
    float maior_altura = 0, menor_altura = 0;
    int quantidade_homens = 0, quantidade_mulheres = 0, i;

    for (i = 0; i < 3; i++) {
        printf("Informe a altura em metros: ");
        scanf("%f", &altura);

        char sexo[10];
        printf("Informe o sexo (mulher ou homem): ");
        scanf(" %c", &sexo[10]);

        if (i == 0) {
            maior_altura = menor_altura = altura;
        } else {
            if (altura > maior_altura) {
                maior_altura = altura;
            }

            if (altura < menor_altura) {
                menor_altura = altura;
            }
        }

        if (sexo[0] == 'H' || sexo[0] == 'h') {
            quantidade_homens++;
        } else if (sexo[0] == 'M' || sexo[0] == 'm') {
            quantidade_mulheres++;
            soma_altura_mulheres += altura;
        }
    }

    if (quantidade_mulheres > 0) {
        media_altura_mulheres = soma_altura_mulheres / quantidade_mulheres;
    }

    printf("Maior altura: %.2f metros\n", maior_altura);
    printf("Menor altura: %.2f metros\n", menor_altura);
    printf("Média de altura das mulheres: %.2f metros\n", media_altura_mulheres);
    printf("Quantidade de homens: %d\n", quantidade_homens);

    return 0;
}

