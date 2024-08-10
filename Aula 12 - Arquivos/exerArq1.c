#include <stdio.h>
#include <stdlib.h>

typedef struct conta
{
    char nome[100];
    int nmrConta;
    float saldo;
}conta;


int main(int argc, char const *argv[])
{
    conta c;
    FILE *p = NULL;

    printf("Informe o numero da conta: \n");
    scanf("%d", &c.nmrConta);

    p = fopen("banco.txt", "w");

    if (!p)
    {
        printf("Falha ao abrir o arquivo...\n");
    }
    

    while (c.nmrConta != 0)
    {
        printf("Informe o nome do cliente: \n");
        scanf(" %[^\n]", c.nome);

        printf("Informe o saldo da conta: \n");
        scanf(" %f", &c.saldo);

        fprintf(p, "%d\t%s\t%f\n", c.nmrConta, c.nome, c.saldo);

        printf("Informe o numero da conta: \n");
        scanf("%d", &c.nmrConta);

    }
    
    fclose(p);

    return 0;
}
