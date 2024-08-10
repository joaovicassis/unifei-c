#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[])
{
    int v[MAX], b[MAX], i, j;

    for ( i = 0; i < MAX; i++)
    {
        //printf("Informe 10 valores: \n");
        scanf("%d", &v[i]);
    }    

    for ( i = 0; i < MAX; i++)
    {
        b[i] = v[i] * v[i];
    }

    for ( i = 0; i < MAX; i++)
    {
        printf("%d ", b[i]);
    }
    
    
        
    return 0;
}
