#include <stdio.h>

int main(int argc, char const *argv[])
{
    float pesoIdeal, altura;
    char sexo;

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu sexo, M ou F: ");
    scanf(" %c", &sexo);

    if (sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58; 
    }else if(sexo == 'f' ){
        pesoIdeal = (62.1 * altura) - 44.7;
    }else {
        printf("sexo invalido");
    }

    printf("%f", pesoIdeal);
    
    return 0;
}
