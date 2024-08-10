#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[])
{
    int v[MAX], i, pares;

    for ( i = 0; i < MAX; i++)
    {
        printf("Informe 10 valores: ");
        scanf("%d", &v[i]);
    }

    for ( i = 0; i < MAX; i++)
    {
        if (v[i] % 2 == 0)
        {
            pares++;
        }
        
    }
    
    printf("%d", pares);
    
    return 0;
}
