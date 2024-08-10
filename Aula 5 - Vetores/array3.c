#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[])
{
    int vetor[MAX], i, maior, idx, menor;

    for ( i = 0; i < MAX; i++)
    {
        printf("informe o %d valor: \n", i+1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for ( i = 1; i < MAX; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
            idx = i; 
        }
        
        if (menor > vetor[i]);
        {
            menor = vetor[i];
        }
        
    }

    printf("o maior valor eh: %d\n", maior);
    printf("o menor valor eh: %d\n", menor);
    //printf("posicao de indicie: %d", idx);    
        
    return 0;
}
