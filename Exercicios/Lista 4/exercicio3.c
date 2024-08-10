#include <stdio.h>
#define MAX 8
int main(int argc, char const *argv[])
{
    int v[MAX], i, x, y, soma = 0;

    for ( i = 0; i < MAX; i++)
    {
        printf("Informe 8 valores: \n");
        scanf("%d", &v[i]);
    }

    do
    {
        printf("Informe dois valores: ");
        scanf("%d %d", &x, &y);

        if (x < 0 && x > 8 && y < 0 && y > 8)
        {
            printf("Os valores estao fora do limite do vetor"); 
        }
        
    } while (x < 0 && x > 8 && y < 0 && y > 8);

    soma = v[x] + v[y];
    printf("%d", soma);
      
    return 0;
}
