#include <stdio.h>
#define MAX 10
#define VALOR_MAX 100

int main(int argc, char const *argv[])
{
    int v[MAX], i, x[VALOR_MAX] = {0};

    for ( i = 0; i < MAX; i++)
    {
        printf("Informe 10 valores: ");
        scanf("%d", &v[i]);
    }

    for ( i = 0; i < MAX; i++)
    {
        if (x[v[i]] == 0)
        {
            printf("%d ", v[i]);
            x[v[i]] = 1;
        }
        
    }
    
    return 0;
}
