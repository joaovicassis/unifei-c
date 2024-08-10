#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c;

    printf("informe as medidas dos lados do triangulo: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("equilatero");
    }else if(a == b || a == c || b == c){
        printf("isosceles");
    }else {
        printf("escaleno");
    }
    
    return 0;
}
