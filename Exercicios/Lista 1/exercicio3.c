#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int quantGotas;
    float peso;

    printf("informe o peso da crianca: ");
    scanf("%f", &peso);

    quantGotas = (int)ceil(peso * 2.5);

    printf("A quantidade de gotas indicadas para esse peso eh: %d", quantGotas);
    return 0;
}
