#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, soma = 0;

    printf("informe o valor de N: ");
    scanf("%d", &n);

    i = 1;

    while (i <= n)
    {
        soma = soma + i;
        i++; 
    }

    printf("resposta = %d\n", soma);
    
    return 0;
}
