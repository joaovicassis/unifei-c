#include <stdio.h>

int main(int argc, char const *argv[])
{
    int base, altura;
    float area; 
    
    do
    {
        printf("informe o valor da base: ");
        scanf("%d", &base);

        printf("informe o valor da altura: ");
        scanf("%d", &altura);
    } while (base <= 0 || altura <=0);

    area = (base * altura) / 2.0;
    
    printf("valor da area eh: %f", area);
   
    return 0;
}
