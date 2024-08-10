#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float *p = NULL;

    //alocando memoria para 5 floats
    p = (float *)malloc(5 * sizeof(float));

    if (p == NULL) //SO nao soltou memoria 
    {
        exit(1);
    }
    
    //usa-se o espaco alocado de forma similar a um vetor 
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%f", &p[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("p[%d] = %.2f\n", i, p[i]);
    }

    //liberando a memoria alocada

    free(p);
    
    return 0;
}
