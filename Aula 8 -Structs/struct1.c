// distancia entre pontos no espaço
#include <stdio.h>
#include <math.h>

typedef struct ponto
{
    double x, y, z;

}ponto;


int main(int argc, char const *argv[])
{
    ponto p1, p2;
    double dist;

    printf("Digite as coordenadas (x, y, z) do ponto 1: ");
    scanf("%lf%lf%lf", &p1.x, &p1.y, &p1.y);

    printf("Digite as coordenadas (x, y, z) do ponto 2: ");
    scanf("%lf%lf%lf", &p2.x, &p2.y, &p2.y);

    dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));

    printf("Distancia = %lf", dist);

    return 0;
}
