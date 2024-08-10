#include <stdio.h>

#define MAX 10

int main() {
    int vetor[MAX], x, i;

    for (i = 0; i < MAX; i++) 
    {
        printf("Digite 10 valores:\n");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X:\n");
    scanf("%d", &x);

    for (i = 0; i < MAX; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
