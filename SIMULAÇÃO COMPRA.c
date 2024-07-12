#include <stdio.h>

int main() {
    int codigoProduto;
    float precoProduto;
    int quantidade;
    char cartaoCredito[20];
    char cpf[12];

    printf("Informe o código do produto: ");
    scanf("%d", &codigoProduto);

    printf("Informe o preço do produto: ");
    scanf("%f", &precoProduto);

    printf("Informe a quantidade desejada: ");
    scanf("%d", &quantidade);

    printf("Digite o número do cartão de crédito: ");
    scanf("%s", cartaoCredito);

    printf("Digite o CPF: ");
    scanf("%s", cpf);

    float valorTotal = precoProduto * quantidade;

    printf("\nDetalhes do pedido:\n");
    printf("Código do produto: %d\n", codigoProduto);
    printf("Preço do produto: R$%.2f\n", precoProduto);
    printf("Quantidade: %d\n", quantidade);
    printf("Valor total a pagar: R$%.2f\n", valorTotal);

    char confirmacao[3];
    printf("\nDigite 'OK' para confirmar a compra: ");
    scanf("%s", confirmacao);

    if (strcmp(confirmacao, "OK") == 0) {
        printf("Compra confirmada\n");
    } else {
        printf("Compra cancelada\n");
    }

    return 0;
}

