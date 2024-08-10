#include <stdio.h>
#define MAX 5

int main(int argc, char const *argv[])
{
    int a[MAX], b[MAX], i, j, repete;

    printf("Informe os valores de A: \n");
    for ( i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Informe os valores de B: \n");
    for ( i = 0; i < MAX; i++)
    {
        scanf("%d", &b[i]);
    }    

    printf("Diferenca: \n");

    //diferença do array de A - B
    for ( i = 0; i < MAX; i++)
    {
        repete = 0; 

        for ( j = 0; j < MAX; j++)
        {
            if (a[i] == b[j])
            {
                repete = 1;
            }
        }
        
        if (repete == 0)
            {
                printf("%d ", a[i]);
            }
            
    }
    
    return 0;
}
