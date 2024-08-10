#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valorProduto;
    int porcenDesconto;
    float valorDesconto;

    printf("Informe o valor total do produto: ");
    scanf("%f", &valorProduto);

    printf("Informe a porcentagem de desconto: ");
    scanf("%d", &porcenDesconto);

    valorDesconto = valorProduto * porcenDesconto/100;

    printf("Valor do produto a vista: R$%.2f\t desconto: R$%.2f", valorProduto, valorDesconto);

    return 0;
}
