#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, soma = 0;
    int sinal = 1;

    printf("Informe o valor de N; ");
    scanf("%d", &n);

    for ( i = 1; i <= (2 * n -1); i ++){
        soma = soma + sinal * i;
        sinal = -sinal; 
    }
    
    printf("resposta: %d", soma);
    return 0;
}
