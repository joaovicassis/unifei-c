#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x[5][2] = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
