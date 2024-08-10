#include <stdio.h>

int main(int argc, char const *argv[])
{
    int anos, meses, dias, diasTotal;

    printf("Informe quantos dias voce ja viveu: ");
    scanf("%d", &diasTotal);

    anos = diasTotal / 365;
    meses = (diasTotal % 365) / 30;
    dias = (diasTotal % 365) % 30;


    printf("Sua idade eh: %d anos, %d meses e %d dias", anos, meses, dias);
    return 0;
}
