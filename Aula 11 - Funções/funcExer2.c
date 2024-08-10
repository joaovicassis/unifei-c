#include <stdio.h>
#include <stdlib.h>

int* aloca(int n);
void alocaPorReferencia(int **v, int n);
void leitura(int *v, int n);
void ordena(int *v, int n);
void imprime(int *v, int n);

int main(int argc, char const *argv[])
{
    int n; 
    int *v = NULL;

    printf("Informe o valor de N: \n");
    scanf("%d", &n);

    //v = aloca(n);
    alocaPorReferencia(&v, n);
    leitura(v, n);
    ordena(v, n);
    imprime(v, n);

    return 0;
}
void alocaPorReferencia(int **v, int n){
    *v = (int *)malloc(n * sizeof(int));
}

int* aloca(int n){
    int *p = (int*)malloc(n * sizeof(int));

    if (!p){
        printf("Falha na alocacao...");
        exit(1);
    }
    
    return p;
}

void leitura(int *v, int n){
    int i;
    for (size_t i = 0; i < n; i++)
    {
        printf("Informe v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

void ordena(int *v, int n){
    int trocou = 1;
    int i, aux;

    while (trocou == 1)
    {
        trocou = 0;

        for (size_t i = 1; i < n; i++)
        {
            if (v[i-1] > v[i])
            {
                aux = v[i-1];
                v[i-1] = v[i];
                v[i] = aux;
                trocou = 1;
            }
            
        }
        
    }
    
}

void imprime(int *v, int n){
    int i;

    for (size_t i = 0; i < n; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
}