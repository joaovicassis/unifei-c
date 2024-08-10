#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ano; 

    printf("Informe um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("sim");
    }else{
        printf("nao");
    }
    
    return 0;
}
