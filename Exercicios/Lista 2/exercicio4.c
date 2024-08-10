#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;

    printf("informe um numero: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("par");
    }else{
        printf("impar");
    }
    
    return 0;
}
