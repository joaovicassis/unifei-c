#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;

    printf("informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("informe o segundo numero: ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("%d", num1);
    }else {
        printf("%d", &num2);
    }
    
    return 0;
}
