#include <stdio.h>

int main()
{
    int x[5][5] = {0};
    int i, j;

    for ( i = 0; i < 5; i++)
    {
        x[i][4-i] = 1;
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
