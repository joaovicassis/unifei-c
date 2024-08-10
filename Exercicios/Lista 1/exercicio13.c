#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double raio, volume;
    double pi = 3.14159265358979323846;

    printf("Informe o raio da esfera: ");
    scanf("%lf", &raio);

    volume = 4 * pi * pow(raio, 3) / 3;

    printf ("o volume da esfera eh de: %.6lf", volume);
    return 0;
}