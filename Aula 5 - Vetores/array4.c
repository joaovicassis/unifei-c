#include <stdio.h>
#define MAX 6

int main(int argc, char const *argv[])
{
    int a[MAX], b[MAX], i, j;

    printf("digite os 6 valores do vetor A: \n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("digite os 6 valores do vetor B: \n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &b[i]);
    }   

    for (i = 0; i < MAX; i++)
    {
        
        for (j = 0; j < MAX; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d \n", a[i]);
            }
            
        }
        
    }
    
    return 0;
}
