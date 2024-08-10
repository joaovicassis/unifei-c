#include <stdio.h>

int main(int argc, char const *argv[])
{
    int anos, meses, dias, diasTotal;

    printf("Informe sua idade em anos: ");
    scanf("%d", &anos);

    printf("Informe sua idade em meses: ");
    scanf("%d", &meses);
    
    printf("Informe sua idade em dias: ");
    scanf("%d", &dias);

    diasTotal = (anos * 365) + (meses * 30) + dias;

    printf("Quantidade de dias ja vividos: %d", diasTotal);
    return 0;
}
