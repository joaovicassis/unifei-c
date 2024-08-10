#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num1, dobro;
    float raiz;

    printf("informe um valor: ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        raiz = sqrt(num1);
        printf("%.2f", raiz);
    }else{
        dobro = num1 * num1;
        printf("%d", dobro);
    }
    
    return 0;
}
