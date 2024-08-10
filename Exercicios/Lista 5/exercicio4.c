#include <stdio.h>

int main() {
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3]
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Criação da matriz C com os maiores valores de cada posição de A e B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrizA[i][j] > matrizB[i][j]) {
                matrizC[i][j] = matrizA[i][j];
            } else {
                matrizC[i][j] = matrizB[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
