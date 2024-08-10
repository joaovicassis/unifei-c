#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    char nome[100];
    int idade;
}pessoa;


int main(int argc, char const *argv[])
{
    int a;
    float b;
    int c[5];
    int i;
    pessoa d;

    FILE *p = NULL;

    p = fopen("arq.dat", "rb");

    fread(&a, sizeof(int), 1, p);
    fread(&b, sizeof(float), 1, p);
    fread(c, sizeof(int), 5, p);
    fread(&d, sizeof(pessoa), 1, p);

    printf("inteiro = %d\n", a);
    printf("real = %f\n", b);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");
    printf("Nome = %s     Idade = %d\n", d.nome, d.idade);
    
    fclose(p);

    return 0;
}
