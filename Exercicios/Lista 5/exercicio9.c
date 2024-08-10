#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificação das linhas
    for (i = 0; i < 3; i++) {
        if (matriz[i][0] == 1 && matriz[i][1] == 1 && matriz[i][2] == 1) {
            printf("sim\n");
            return 0;
        }
    }

    // Verificação das colunas
    for (j = 0; j < 3; j++) {
        if (matriz[0][j] == 1 && matriz[1][j] == 1 && matriz[2][j] == 1) {
            printf("sim\n");
            return 0;
        }
    }

    // Verificação da diagonal principal
    if (matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1) {
        printf("sim\n");
        return 0;
    }

    // Verificação da diagonal secundária
    if (matriz[0][2] == 1 && matriz[1][1] == 1 && matriz[2][0] == 1) {
        printf("sim\n");
        return 0;
    }

    // Se nenhuma das condições acima foi satisfeita, as marcações de "1" não venceram
    printf("nao\n");

    return 0;
}
