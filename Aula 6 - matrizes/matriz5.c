//sorteio de bingo usando matrizes e C 
#include <stdio.h>
#define MAXM 3
#define MAXV 15

int main(int argc, char const *argv[])
{
    int m[MAXM][MAXV];
    int v[MAXV], i, j, k;

    //leitura da matriz
    for ( i = 0; i < MAXM; i++)
    {
        for (j = 0; j < MAXM; j++)
        {
            printf("Digite m[%d][%d]", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    //leitura do vetor
    for (k = 0; k < MAXV; k++)
    {
        printf("Informe o valor de v[]: \n");
        scanf("%d", &v[k]);
    }
    

    for ( i = 0; i < MAXM; i++)
    {
        for ( j = 0; j < MAXM; k++)
        {
            for ( k = 0; k < MAXV; k++)
            {
                if (m[i][j] == v[k])
                {
                    printf("%d \n", v[k]);
                }
            }
        }
    }
    
    return 0;
}
