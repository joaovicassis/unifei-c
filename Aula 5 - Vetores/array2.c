#include <stdio.h>
#define MAX 8

int main(int argc, char const *argv[])
{
    int valores[MAX], i;

    for ( i = 0; i < MAX; i++)
    {
        printf("Informe o %d numeros: \n", i+1);
        scanf("%d", &valores[i]);
    }
    
    for ( i = 0; i < MAX; i++)
    {
        if (valores[i] % 2 == 0)
        {
            printf("%d ", valores[i]);
        }
        
    }
    
    return 0;
}
