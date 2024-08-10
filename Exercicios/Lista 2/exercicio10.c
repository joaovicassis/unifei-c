#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, delta, x1, x2;

    printf("Informe os valores de A, B e C: ");
    scanf("%f%f%f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        if (x1 < x2)
        {
            printf("%f %f", x1, x2);
        }else{
            printf("%f %f", x2, x1);
        }

    }else if (delta == 0){
        x1 = -b / (2 * a);
        printf("%f\n", x1);
    }else {
        printf("sem raizes reais");
    }
    
    return 0;
}
