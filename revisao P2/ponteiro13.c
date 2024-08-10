#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int nmrsUser[15];
    int loteria[15];
    int i,j, cont= 0 ;
    int *p = NULL;


    printf("Informe 15 numeros entre 1 e 25: \n");
    for ( i = 0; i < 15; i++)
    {
        scanf("%d", &nmrsUser[i]);
    }
    

    srand(time(0));
    for ( i = 0; i < 15; i++)
    {
        loteria[i] = (rand() % 25) + 1;
    }

    for (size_t i = 0; i < 15; i++)
    {
        for ( j = i; j < 15; j++)
        {
            if (nmrsUser[i] == loteria[j])
            {
                cont++;
            }
            
        }
        
    }

    p = (int *)malloc(cont* sizeof(int));
    
    for ( i = 0; i < 15; i++)
    {
        for ( j = i; j < 15; j++)
        {
            if (nmrsUser[i] == loteria[j])
            {
                *(p + i) = nmrsUser[i];
            }
            
        }
        
    }

    for ( i = 0; i < cont; i++)
    {
        printf("%d", *(p +i ));
    }
    
    
    
    return 0;
}
