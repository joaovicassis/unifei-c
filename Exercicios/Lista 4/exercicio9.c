#include <stdio.h>
#define MAX 6

int main(int argc, char const *argv[])
{
    int v[MAX], i, maior, menor, posMaior, posMenor;

    for ( i = 0; i < MAX; i++)
    {
        printf("Informe 6 valores: ");
        scanf("%d", &v[i]);
    }

    menor = v[0];
    maior = v[0];

    for (i = 1; i < MAX; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
            posMaior = i;
        }
        
        if (v[i] < menor)
        {
            menor = v[i];
            posMenor = i;
        }
        
    }

    printf("%d %d", posMaior, posMenor);
    
    return 0;
}
