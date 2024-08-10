#include <stdio.h>

int main(int argc, char const *argv[])
{
    int salario, porcentagem;
    float prestacao;

    printf("informe seu salario: ");
    scanf("%d", &salario);

    printf("Informe o valor da prestacao: ");
    scanf("%f", &prestacao);

    porcentagem = (prestacao / salario) * 100;

    if (porcentagem >= 20)
    {
        printf("emprestimo nao concedido");
    }else{
        printf("emprestimo concedido");
    }
    
    return 0;
}
