#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[])
{
    int v[10], maior, menor;

    for (size_t i = 0; i < MAX; i++)
    {
        printf("Informe 10 valores: ");
        scanf("%d", &v[i]);
    }
    
    menor = v[0];
    maior = v[0];

    for (size_t i = 1; i < MAX; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
        
        if (v[i] < menor)
        {
            menor = v[i];
        }
        
    }
    
    printf("%d %d", maior, menor);

    return 0;
}
