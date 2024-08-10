#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valorA, valorB, resultado; 

    printf("informe o primeiro valor: ");
    scanf("%d", &valorA);

    printf("informe o segundo valor: ");
    scanf("%d", &valorB);

    resultado = valorA % valorB;

    printf("%d", resultado);

    return 0;
}
