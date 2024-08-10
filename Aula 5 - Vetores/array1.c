#include <stdio.h>
#define MAX 8

int main(int argc, char const *argv[])
{
    float notas[MAX];
    float media, soma = 0;
    int i;

    for ( i = 0; i < MAX; i++)
    {
        printf("Informe o valor do aluno %d :\n", i+1);
        scanf("%f", &notas[i]);
    }
    
    for ( i = 0; i < MAX; i++)
    {
        soma = soma + notas[i];
    }
    
    media = soma / MAX;

    for ( i = 0; i < MAX; i++)
    {
        if (notas[i] > media)
        {
            printf("nota do aluno %d: %.2f\n", i+1, notas[i]);
        }
        
    }
    
    
    return 0;
}
