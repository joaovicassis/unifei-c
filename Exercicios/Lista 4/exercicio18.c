#include <stdio.h>
#include <math.h>

#define MAX 10

int main() {
    float vetor[MAX], desvioPadrao;
    float media = 0.0, somaQuadrados = 0.0;
    int i;
    
    for (i = 0; i < MAX; i++) {
        printf("Digite 10 valores: ");
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }

    // Calculando a média dos elementos do vetor
    media /= MAX;

    // Calculando a soma dos quadrados das diferenças entre cada elemento do vetor e a média
    for (i = 0; i < MAX; i++) {
        somaQuadrados += pow(vetor[i] - media, 2);
    }

    // Calculando o desvio padrão 
    desvioPadrao = sqrt(somaQuadrados / (MAX - 1));

    printf("%.1f\n", desvioPadrao);

    return 0;
}
