// carros da mesma marca e/ou cor
#include <stdio.h>
#include <string.h> //strcmp

typedef struct carro
{
    char placa[8];
    char marca[20];
    char modelo[20];
    char cor[20];
}carro;


int main(int argc, char const *argv[])
{
    carro c1, c2;

    printf("Digite os dados do carro 1: ");

    printf("Placa: ");
    scanf("%s", c1.placa);

    printf("Marca: ");
    scanf(" %s", c1.marca);

    printf("Modelo: ");
    scanf(" %s", c1.modelo);

    printf("Cor: ");
    scanf(" %s", c1.cor);
//------------------------------------------------------------------
    printf("Digite os dados do carro 2: ");
    
    printf("Placa: ");
    scanf(" %s", c2.placa);

    printf("Marca: ");
    scanf(" %s", c2.marca);

    printf("Modelo: ");
    scanf(" %s", c2.modelo);

    printf("Cor: ");
    scanf(" %s", c2.cor);

    if (strcmp(c1.marca, c2.marca) == 0)
    {
        printf("Mesma marca!\n");
    }
    
    if (strcmp(c1.cor, c2.cor) == 0)
    {
        printf("Mesma cor!");
    }

    return 0;
}
