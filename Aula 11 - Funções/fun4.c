#include <stdio.h>

void quadrado(float *area, float *perimetro, float lado);

int main(int argc, char const *argv[])
{
    float lado, area, perimetro; 

    printf("Informe o valor do lado do quadrado: \n");
    scanf("%f", &lado);

    quadrado(&area, &perimetro, lado);

    printf("Area = %f\n", area);
    printf("Perimtro = %f", perimetro);

    return 0;
}

void quadrado(float *area, float *perimetro, float lado){
    *area = lado * lado;
    *perimetro = 4 * lado;
}
