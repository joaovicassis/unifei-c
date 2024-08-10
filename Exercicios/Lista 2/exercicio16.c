#include <stdio.h>

int main(int argc, char const *argv[])
{
    float altura;
    char sexo;

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu sexo M ou F: ");
    scanf(" %c", &sexo);

    if (sexo == 109 && altura >= 1.75)
    {
        printf("sim");
    }else if (sexo == 102 && altura >= 1.80){
        printf("sim");
    }else{
        printf("nao");
    }
    
    return 0;
}
