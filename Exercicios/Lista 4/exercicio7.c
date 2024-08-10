#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[])
{
    int v[MAX], i, soma = 0;
    float media;

    for ( i = 0; i < MAX; i++)
    {
        printf("Informe 10 notas: ");
        scanf("%d", &v[i]);
    }

    for ( i = 0; i < MAX; i++)
    {
        soma = soma + v[i];
    }
    
    media = (float)soma / MAX;
    printf("%.2f", media);

    return 0;
}
