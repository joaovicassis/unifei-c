#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int **matriz = NULL; 
    int i, j, linha, coluna, nmr, ok = 0;
    printf("Informe o numero de linbhas e colunas: ");

    scanf("%d %d", &linha, &coluna);

    matriz = (int **) malloc(linha *sizeof(int *));
    for (size_t i = 0; i < linha; i++)
    {
        matriz = (int *) malloc(coluna *sizeof(int));
    }
    

    if (!matriz)
    {
        printf("falha ao alocar memoria...");
        exit(1);
    }
    
    printf("Informe um valor: ");
    scanf("%d", &nmr);

    printf("Informe os valores da matriz: ");
    for ( i = 0; i < linha; i++)
    {
        for (size_t j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for ( i = 0; i < linha; i++)
    {
        for (size_t j = 0; j < coluna; j++)
        {
            if (matriz[i][j] == nmr)
            {
                ok = 1;
                break;
                
            }
            
        }
    }
    
    if (ok == 1)
    {
        printf("Contem na matriz.");
    }
    
    for (size_t i = 0; i < linha; i++)
    {
        free(matriz[i]);
    }
    
    free(matriz);

    return 0;
}
