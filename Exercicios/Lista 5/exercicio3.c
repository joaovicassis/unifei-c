#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m[4][5], linha, coluna, i, j;
    int maior;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Informe o valor de M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    } 

    maior = m[0][0];
    for ( i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (m[i][j] > maior)
            {
                maior = m[i][j];
                linha = i;
                coluna = j;
            }
            
        }
        
    }
    
    printf("%d %d %d", maior, linha, coluna);

    return 0;
}
