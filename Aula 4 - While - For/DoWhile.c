#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double pi = acos(-1);
    double raio, area;

    do
    {
        printf("informe o valor do raio: \n");
        scanf("%lf", &raio);

        if(raio <= 0){
            printf("O valor nao pode ser negativo ou zero\n");
        }
    } while (raio <= 0);
    
    area = pi * raio * raio;

    printf("raio = %lf", area);
    return 0;
}
