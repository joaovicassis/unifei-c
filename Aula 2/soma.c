#include <stdio.h>

int main(int argc, char const *argv[])
{
    int primeiroNumero;
    int segundoNumero; 
    int resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

    resultado = primeiroNumero + segundoNumero;

    printf("O resultado da soma eh: %d", resultado);
    return 0;
}
