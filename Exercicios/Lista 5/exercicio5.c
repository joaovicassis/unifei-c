#include <stdio.h>

int main() {
    int matrizA[2][4];
    int matrizB[4][3];
    int i, j, k, l;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            int elementoA = matrizA[i][j];
            // Verifica se o elemento está presente na matriz B
            for (k = 0; k < 4; k++) {
                for (l = 0; l < 3; l++) {
                    if (elementoA == matrizB[k][l]) {
                        printf("%d ", elementoA);
                    }
                }
            }
        }
    }
    printf("\n");

    return 0;
}
