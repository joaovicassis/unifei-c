#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(int argc, char const *argv[])
{
    double angulo, radiano, seno, cosseno, tangente;

    printf("Informe o valor do angulo em graus: ");
    scanf("%lf", &angulo);


    radiano = angulo * M_PI / 180;

    seno = sin(radiano);
    cosseno = cos(radiano);
    tangente = tan(radiano);

    printf("Seno: %.2lf\t Cosseno: %.2lf\t Tangente: %.2lf", seno, cosseno, tangente);
    
    return 0;
}
