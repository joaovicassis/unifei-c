#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1; 

    printf("Informe um numero: ");
    scanf("%d", &num1);

    if (num1 % 3 == 0 && num1 % 5 == 0) {
        printf("nao divisivel\n");
    } else if (num1 % 3 == 0) {
        printf("divisivel por 3\n");
    } else if (num1 % 5 == 0) {
        printf("divisivel por 5\n");
    } else {
        printf("nao divisivel\n");
    }

    return 0;
}
