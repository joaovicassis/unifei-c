#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct conta
{
    int num;
    char nome[100];
    float saldo;
}conta;

void apagar();
void inserir();
void listar();
void editar();
int menu();
int main(int argc, char const *argv[])
{
    int op;

    op = menu();

    while (op != 0)
    {
        switch (op)
        {
        case 1:
            inserir();
            break;
        case 2:
            editar();
            break;
        case 3:
            listar();
            break;        
        case 4:
            apagar();
            break;

        default:
            break;
        }

        op = menu();
    }
    

    return 0;
}

void editar(){
    FILE *arq = NULL;
    conta c;
    int pos; 
    int opcao;

    printf("Informe a posicao do registro: ");
    scanf("%d", &pos);

    arq = fopen("banco.dat", "r+b"); //leitura e escrita

    //deslocar o ponteiro para a posição correta
    fseek(arq, (pos - 1) * sizeof(conta), SEEK_SET);
    fread(&c, sizeof(conta), 1, arq);

    printf("Dados atuais:\n");
    printf("Numero da conta = %d\n", c.num);
    printf("Nome do cliente = %s\n", c.nome);
    printf("Saldo da conta = %.2f\n", c.saldo);

    printf("\nDeseja editar: \n");
    printf("[1] - numero\n");
    printf("[2] - nome\n");
    printf("[3] - saldo\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Informe o novo numero da conta: ");
        scanf("%d", &c.num);
        break;
    case 2:
        printf("Informe o novo nome do cliente: ");
        scanf(" %[^\n]", &c.nome);
        break;
    case 3:
        printf("Informe o novo saldo da conta: ");
        scanf(" %f", &c.saldo);
        break;    
    default:
        break;
    }

    //deslocando o ponteiro de volta para posição original
    fseek(arq, (pos - 1) * sizeof(conta), SEEK_SET);
    fwrite(&c, sizeof(conta), 1, arq);

    fclose(arq);
}

void apagar(){
    FILE *arq = NULL;
    int pos;
    conta c;

    c.num = -1;

    printf("Informe a posicao do registro: ");
    scanf("%d", &pos);

    arq = fopen("banco.dat", "r+b");

    fseek(arq, (pos - 1) * sizeof(conta), SEEK_SET);
    fwrite(&c, sizeof(conta), 1, arq);

    fclose(arq);
}

void inserir(){
    FILE *arq = NULL;
    conta c;

    printf("Informe o numero da conta: ");
    scanf("%d", &c.num);

    printf("Informe o nome do cliente: ");
    scanf(" %[^\n]", c.nome);

    printf("Informe o saldo conta: ");
    scanf(" %f", &c.saldo);

    arq = fopen("banco.dat", "ab");

    fwrite(&c, sizeof(conta), 1, arq);

    fclose(arq);
}

void listar(){
    FILE *arq = NULL;
    conta c;

    printf("Num\t\tNome\t\tSaldo\n");

    arq = fopen("banco.dat", "rb");

    fread(&c, sizeof(conta), 1, arq);

    while (!feof(arq))
    {

        if (c.num != -1)
        {
            printf("%d\t\t%s\t\t%.2f\n", c.num, c.nome, c.saldo);
        }

        fread(&c, sizeof(conta), 1, arq);
    }
    

    fclose(arq);
}

int menu(){

    int opcao;

    printf("\n========= Opcoes ==========\n");
    printf("[1] - inserir\n");
    printf("[2] - editar\n");
    printf("[3] - listar\n");
    printf("[4] - excluir\n");
    printf("[0] - sair\n\n");

    scanf("%d", &opcao);
    
    return opcao;
}

