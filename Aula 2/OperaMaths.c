#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double c1, c2;
    double hip;

    printf ("Digite os valores dos catetos :\n");
    scanf("%lf%lf", &c1, &c2);

    hip = sqrt(c1 * c1 + c2 * c2);

    printf("O valor da hipotenusa eh de: %.3lf", hip);
    return 0;
}
