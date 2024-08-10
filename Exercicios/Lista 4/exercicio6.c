#include <stdio.h>
#define MAX 6

int main(int argc, char const *argv[])
{
    int v[MAX], i;

    for (i = 0; i < MAX; i++)
    {
        printf("Informe 6 valores: ");
        scanf("%d", &v[i]);
    }

    //imprimindo vetor ao contrario
    for ( i = MAX - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
    
    return 0;
}
