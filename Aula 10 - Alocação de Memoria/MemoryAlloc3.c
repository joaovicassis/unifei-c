#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int **p = NULL;
    int i;

    p = (int **)malloc(4 * sizeof(int *));
    
    for (i = 0; i < 4; i++)
    {
        p[i] = (int *)malloc(5 * sizeof(int));
    }

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("%p ", &p[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
