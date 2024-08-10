#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char nome[30];
    int idade;
    FILE *p = NULL;

    printf("Informe seu nome e idade: \n");
    scanf("%s %d", nome, &idade);

    p = fopen("arq.txt", "w");

    if (!p)
    {
        printf("Falha ao abrir o arquivo...\n");
        exit(1);
    }

    fprintf(p, "%s %d\n", nome, idade);

    fclose(p);
    
    return 0;
}
