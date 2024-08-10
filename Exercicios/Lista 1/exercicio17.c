#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cargaHoraria, horasFalta, porcenFaltas;

    printf("Informe a caga horaria total da disciplina: ");
    scanf("%d", &cargaHoraria);

    printf("Informe a quantidade de horas falta: ");
    scanf("%d", &horasFalta);

    porcenFaltas = 100 * (int)horasFalta / cargaHoraria; 

    printf("%d", porcenFaltas);

    return 0;
}
