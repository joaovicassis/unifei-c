#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float ladoA, ladoB, ladoC, area, s; // "s" é o valor referente ao Semiperimetro

    printf("Informe a medida do lado A do triangulo: ");
    scanf("%f", &ladoA);

    printf("Informe a medida do lado B do triangulo: ");
    scanf("%f", &ladoB);

    printf("Informe a medida do lado C do triangulo: ");
    scanf("%f", &ladoC);

    s = (ladoA + ladoB + ladoC) / 2;

    area = sqrt(s*(s - ladoA) * (s - ladoB) * (s - ladoC)); 

    printf("A area total do triangulo eh de: %.1f", area);     

    return 0;
}
