#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(int argc, char const *argv[])
{
    float volume, altura, raio;
    float pi = 3.14159265358979323846;


    printf("Informe o raio do cilindro(cm): ");
    scanf("%f", &raio);

    printf("Informe a altura do cilindro(cm): ");
    scanf("%f", &altura);

    volume = pi * pow(raio, 2) * altura;

    printf("O volume do cilindro eh de: %.2f", volume);
    return 0;
}
