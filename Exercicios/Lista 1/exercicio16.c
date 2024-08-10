#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;

    printf("Informe o primeiro valor: ");
    scanf("%f", &a);
    
    printf("Informe o segundo valor: ");
    scanf("%f", &b);

    a = a + b;

    printf("Informe o terceiro valor: ");
    scanf("%f", &b);

    b = (a + b) / 3; 

    printf("%f", b);

    return 0;
}
