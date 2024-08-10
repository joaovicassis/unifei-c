#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v[6], i;

    for ( i = 0; i < 6; i++)
    {
        //printf("Informe %d valores: \n", i + 1);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d ", v[i]);
    }
    
    
    return 0;
}
