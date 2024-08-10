#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numero;
    float raizQuarta;
    float raizCubica;
    float somaRaizes;

    printf("informe um numero: ");
    scanf("%d", &numero);

    raizCubica = cbrt(numero);
    raizQuarta = pow(numero, 1.0/4.0);

    somaRaizes = raizCubica + raizQuarta;

    printf("A soma das raizes eh: %.2f", somaRaizes);

    return 0;
}
