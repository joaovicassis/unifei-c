#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;

    printf("Informe um numero: ");
    scanf("%d", &num1);

    if (num1 % 11 == 0 )
    {
        printf("sim");
    }else{
        printf("nao");
    }
    
    return 0;
}
