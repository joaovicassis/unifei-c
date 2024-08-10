#include <stdio.h>

int main(int argc, char const *argv[])
{
    int diasAlugado;
    int kmRodado;
    float primeiraAgen;
    float segundaAgen;

    printf("Informe a quantidade de KMs que sera rodado: ");
    scanf("%d", &kmRodado);

    printf("Informe a quantidade de dias que o carro sera alugado: ");
    scanf("%d", &diasAlugado);

    primeiraAgen = (diasAlugado * 62) + (kmRodado * 1.4);
    segundaAgen = (diasAlugado * 80) + (kmRodado * 1.2);

    printf("Valor primeira agencia: R$%.2f\t Valor segunda agencia: R$%.2f", primeiraAgen, segundaAgen);

    return 0;
}
