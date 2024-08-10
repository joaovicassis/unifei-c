#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float *p = NULL;
    float *i = NULL;

    //alocando memoria para 5 floats
    p = (float *)malloc(5 * sizeof(float));

    if (p == NULL) //SO nao soltou memoria 
    {
        exit(1);
    }
    
    //manipulando memoria dinamica apenas com ponteiros:
    for ( i = p; i < p + 5 ; i++)
    {
        scanf("%f", i);
    }

    for ( i = p; i < p + 5; i++)
    {
        printf(">> %.2f\n", *i);
    }
    
    //liberando a memoria alocada

    free(p);
    
    return 0;
}
