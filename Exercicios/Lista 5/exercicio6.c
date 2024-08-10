#include <stdio.h>

int main() {
    int matrizA[3][3];
    int matrizB[4][5];
    int encontrado, i, j, k, l;


    for (int i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Verificação e impressão dos elementos de A que não estão em B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            encontrado = 0; // Flag para indicar se o elemento foi encontrado em B
            for (k = 0; k < 4; k++) {
                for (l = 0; l < 5; l++) {
                    if (matrizA[i][j] == matrizB[k][l]) {
                        encontrado = 1; // Elemento encontrado em B
                        break;
                    }
                }
                if (encontrado) {
                    break;
                }
            }
            // Se o elemento não foi encontrado em B, imprime
            if (!encontrado) {
                printf("%d ", matrizA[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
