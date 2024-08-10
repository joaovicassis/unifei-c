#include <stdio.h>
#include <stdlib.h>

typedef struct conta
{
    char nome[100];
    int nmrConta;
    float saldo;
} conta;

int main(int argc, char const *argv[])
{
    conta c;
    FILE *p = NULL;

    p = fopen("banco.txt", "r");

    if (!p)
    {
        printf("Falha ao abrir arquivo...\n");
        exit(1);
    }

    fscanf(p, "%d %[^\t] %f", &c.nmrConta, &c.nome, &c.saldo);

    while (!feof(p))
    {
        printf("Conta = %d\n", c.nmrConta);
        printf("Nome = %s\n", c.nome);
        printf("Saldo = %f\n\n", c.saldo);
        fscanf(p, "%d %[^\t] %f", &c.nmrConta, &c.nome, &c.saldo);
    }
    fclose(p);
    return 0;
}
