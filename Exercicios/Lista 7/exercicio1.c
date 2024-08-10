#include <stdio.h>

typedef struct data
{
    char nome[100];
    int idade;
    char endereco[150];
}data;

int main(int argc, char const *argv[])
{
    data infos;

    printf("Informe seu nome: \n");
    scanf(" %[^\n]", infos.nome);

    printf("Informe sua idade: \n");
    scanf("%d", &infos.idade);

    printf("Informe seu endereco: \n");
    scanf(" %[^\n]", infos.endereco);

    printf("Nome: %s\n", infos.nome);
    printf("Idade: %d\n", infos.idade);
    printf("Endereco: %s\n", infos.endereco);


    return 0;
}

