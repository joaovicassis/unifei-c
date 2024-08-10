#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m[3][5], i, j, qntPares = 0, qntImpares = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Informe o valor de M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
        
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (m[i][j] % 2 == 0)
            {
                qntPares++;
            }
            
            if (m[i][j] % 2 != 0)
            {
                qntImpares++;
            }
        }
        
    }

    printf("%d %d", qntPares, qntImpares);
    
    
    return 0;
}
