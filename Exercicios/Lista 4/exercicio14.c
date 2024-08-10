#include <stdio.h>

#define MAX 6

int main() {
    int vA[MAX], vB[MAX];
    int i, j;
    int encontrado;

    
    for (i = 0; i < MAX; i++) 
    {
        printf("Digite 6 valores: ");
        scanf("%d", &vA[i]);
    }

    
    for (i = 0; i < MAX; i++) 
    {
        printf("Digite 6 valores para o vetor B: ");
        scanf("%d", &vB[i]);
    }

    for (i = 0; i < MAX; i++) 
    {
        encontrado = 0;
        for (j = 0; j < MAX; j++) {
            if (vA[i] == vB[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            printf("%d ", vA[i]);
        }
    }

    return 0;
}
