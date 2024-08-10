#include <stdio.h>

int main(int argc, char const *argv[])
{
    float real;
    float dolar;
    float valorConvertido;

    printf("Insira o valor em R$ a ser convertido: ");
    scanf("%f", &real);

    printf("Insira a cotacao do dolar: ");
    scanf("%f", &dolar);


    valorConvertido = real * dolar;

    printf("O valor convertido para dolar eh de: %.2f", valorConvertido);

    return 0;
}
