#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m[4][4], i, j, qntMaior = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Informe o valor de M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
        
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (m[i][j] > 10)
            {
                qntMaior++;
            }
            
        }
        
    }

    printf("Quantidade de numeros maiores que 10: %d", qntMaior);
    
    
    return 0;
}
