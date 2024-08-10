#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[])
{
    int negativos = 0;
    float v[MAX], soma = 0.0;

    for (size_t i = 0; i < MAX; i++)
    {
        printf("Informe 10 valores: ");
        scanf("%f", &v[i]);
    }

    for (size_t i = 0; i < MAX; i++)
    {
        if (v[i] < 0)
        {
            negativos++;
        }else{
            soma += v[i];
        }
        
    }

    printf("%d %.2f", negativos, soma);
    
        
    return 0;
}
