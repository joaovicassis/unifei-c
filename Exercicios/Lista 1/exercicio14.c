#include <stdio.h>

int main(int argc, char const *argv[])
{
    float diaria, diariaAtt, descDiaria, taxaFatPadrao, taxaFatPromo, difFat;
    int quantQuartos = 80;

    printf("Informe o valor da diaria: ");
    scanf("%f", &diaria);

    descDiaria = diaria * 25 / 100;
    diariaAtt = diaria - descDiaria; 

    taxaFatPromo = diariaAtt * (quantQuartos * 0.8);
    taxaFatPadrao = diaria * (quantQuartos * 0.5);

    difFat = taxaFatPromo - taxaFatPadrao;

    printf("%.2f\n", diariaAtt);
    printf("%.2f\n", taxaFatPromo);
    printf("%.2f\n", taxaFatPadrao);
    printf("%.2f\n", difFat);
    return 0;
}
