#include <stdio.h>
#include <stdlib.h>

typedef struct conta
{
    int num;
    char nome[100];
    float saldo;
}conta;

void apagar();
void inserir();
int menu();
void listar();

int main(int argc, char const *argv[])
{
    int opcao;

    opcao = menu();

    while (opcao != 0)
    {
        switch (opcao)
        {
        case 1:
            listar();
            break;
        case 2:
            inserir();
            break;
        case 3:
            apagar();
            break;

        default:
            break;
        }

        opcao = menu();
    }
    
    return 0;
}

void apagar(){
    FILE *p = NULL;

    p = fopen("bank.txt", "w");
    fclose(p);
}

void inserir(){
    conta Conta;
    FILE *p = NULL;

    printf("Informe o numero da conta: \n");
    scanf("%d", &Conta.num);

    printf("Informe o nome do cliente: \n");
    scanf(" %[^\n]", Conta.nome);

    printf("Informe o saldo do cliente: \n");
    scanf(" %f", &Conta.saldo);

    p = fopen("bank.txt", "a");

    if (!p)
    {
        printf("Falha ao abrir o arquivo...\n");
        exit(1);
    }
    
    fprintf(p, " %d\t%s\t%f\n", Conta.num, Conta.nome, Conta.saldo);

    fclose(p);
}

void listar(){
    FILE *p = NULL;
    conta Conta;

    p = fopen("bank.txt", "r");

    if (!p)
    {
        printf("Falha ao abrir o arquivo...\n");
        exit(1);
    }

    fscanf(p, "%d %[^\t] %f", &Conta.num, Conta.nome, &Conta.saldo);

    while (!feof(p)) //enquanto nao chegou ao fim do arquivo
    {
        printf("%d\t", Conta.num);
        printf("%s\t", Conta.nome);
        printf("%f\n", Conta.saldo);
        fscanf(p, " %d %[^\t] %f", &Conta.num, Conta.nome, &Conta.saldo);
    }

    fclose(p);
}

int menu(){
    int op;

    printf("=========OPCOES=========\n");
    printf("[1] - Listar\n");
    printf("[2] - Inserir\n");
    printf("[3] - Apagar\n");
    printf("[0] - Sair\n");

    scanf("%d", &op);

    return op;
}
