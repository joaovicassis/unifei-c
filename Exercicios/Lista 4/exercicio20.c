#include <stdio.h>
#include <math.h>

#define MAX 10

int main() {
    int numeros_quadrados_perfeitos[MAX];
    int quadradosPer = 0;
    int numero;

    while (quadradosPer < MAX) {
        //printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        float raiz_quadrada = sqrt(numero);
        if (raiz_quadrada == (int)raiz_quadrada) {
            numeros_quadrados_perfeitos[quadradosPer] = numero;
            quadradosPer++;

            if (quadradosPer == MAX) {
                break; 
            }
        }
    }

    for (int i = 0; i < MAX; i++) {
        printf("%d ", numeros_quadrados_perfeitos[i]);
    }

    return 0;
}
