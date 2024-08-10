#include <stdio.h>

#define MAX 5

int main() {
    int vetorA[MAX], vetorB[MAX], vetorC[MAX];
    int i;
    
    for (i = 0; i < MAX; i++) {
        printf("Digite 5 inteiros para o vetor A:\n");
        scanf("%d", &vetorA[i]);
    }
    
    for (i = 0; i < MAX; i++) {
        printf("Digite 5 inteiros para o vetor B:\n");
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < MAX; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    for (i = 0; i < MAX; i++) {
        printf("%d ", vetorC[i]);
    }

    return 0;
}
