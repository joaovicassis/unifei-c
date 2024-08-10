#include <stdio.h>

void trocaValores(int *val1, int *val2);

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Informe dois valores: \n");
    scanf("%d %d", &a, &b);

    //trocar os valores das variaveis 'a' e 'b' entre si.

    printf("Main (Antes): \n");
    printf("A = %d \n", a);
    printf("B = %d \n", b);

    trocaValores(&a, &b);

    printf("Main (Depois): \n");
    printf("A = %d \n", a);
    printf("B = %d \n", b);

    return 0;
}

void trocaValores(int *val1, int *val2){
    int aux;

    printf("Troca (antes): \n");
    printf("A = %d \n", *val1);
    printf("B = %d \n", *val2);

    aux = *val1;
    *val1 = *val2;
    *val2 = aux;

    printf("Troca (depois): \n");
    printf("A = %d \n", *val1);
    printf("B = %d \n", *val2);
}
