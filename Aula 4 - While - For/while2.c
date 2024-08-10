#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    float soma = 0; 

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    i = 0;

    while (i <= n )
    {
        soma = soma + 1.0/i;
        i++;
    }
    
    printf("o resultado eh: %f\n", soma);

    return 0;
}
