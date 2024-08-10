#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char nome[30];
    int idade;
    FILE *p = NULL;

    p = fopen("arq.txt", "r");

    if (!p)
    {
        printf("Falha ao abrir arquivo...\n");
        exit(1);
    }

    fscanf(p, "%s %d", nome, &idade);
    
    fclose(p); 

    printf("Nome lido: %s\n", nome);
    printf("Idade lida: %d", idade);

    return 0;
}
