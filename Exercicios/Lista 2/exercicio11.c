#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tempoServico, idade; 

    printf("Informe suas idade: ");
    scanf("%d", &idade);
    
    printf("Informe o tempo de servico: ");
    scanf("%d", &tempoServico);

    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25))
    {
        printf("sim");
    }else{
        printf("nao");
    }
    
    return 0;
}
