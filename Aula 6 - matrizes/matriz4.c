#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, i, j; 
    
    printf("Informe as dimensoes M e N: ");
    scanf("%d %d", &m, &n);

    int a[m][n], at[n][m];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Digite o valor de A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            at[i][j] = a[j][i];
        }
        
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", at[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
