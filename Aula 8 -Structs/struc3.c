//vetor struct aluno
#include <stdio.h>
#include <string.h>
#define N 5

typedef struct aluno
{
    int matricula;
    char nome[50];
}aluno;

int main(int argc, char const *argv[])
{
    aluno v[N];
    int i, opcao, matri;
    char nome[50];

    
    for ( i = 0; i <= N; i++)
    {
        printf("Informe a matricula e o nome do aluno %d: \n", i+1);
        scanf(" %d %s", &v[i].matricula, v[i].nome);    
    }

    printf("Opcoes:\n");
    printf("1 - pesquisar por matricula\n");
    printf("2 - pesquisar por nome\n");
    printf("9 - sair.\n");
    scanf(" %d", &opcao);

    while (opcao != 0)
    {
        if (opcao == 1)
        {
            printf("Informe a matricula a ser pesquisada: \n");
            scanf(" %d", &matri);

            for (size_t i = 0; i <= N; i++)
            {
                if (v[i].matricula == matri)
                {
                    printf("Matricula encontrado\n");
                    printf("Matricula: %d\n", v[i].matricula);
                    printf("Nome: %s\n", v[i].nome);
                    break;
                }
            }
            if (i == N)
            {
                printf("Matricula nao encontrada!\n");
            }            
        }else if (opcao == 2)
        {
            printf("Informe um nome a ser pesquisada: \n");
            scanf(" %s", nome);

            if (strcmp(v[i].nome, nome) == 0)
            {
                printf("Nome encontrado\n");
                printf("Matricula: %d\n", v[i].matricula);
                printf("Nome: %s\n", v[i].nome);
                break;
            }

            if (i == N) //nome nao encontrado
            {
                printf("Matricula nao encontrada!\n");
            }
        } 

        //menu
        printf("\n");
        printf("Opcoes:\n");
        printf("1 - pesquisar por matricula\n");
        printf("2 - pesquisar por nome\n");
        printf("9 - sair.");
        scanf("%d", &opcao);
    }

    return 0;
}
