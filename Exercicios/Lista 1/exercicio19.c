#include <stdio.h>

int main(int argc, char const *argv[])
{
    int quantPecas, horas, minutos, segundos, tempoTotal;

    printf("Informe quantas pecas serao produzidas: ");
    scanf("%d", &quantPecas);

    tempoTotal = quantPecas * 17;
    horas = tempoTotal / 3600;
    tempoTotal %= 3600; 
    minutos = tempoTotal / 60;
    segundos = tempoTotal % 60;

    printf("%d %d %d", horas, minutos, segundos);
    return 0;
}
