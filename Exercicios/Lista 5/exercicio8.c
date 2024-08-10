#include <stdio.h>

int main() {
    int matriz[4][4];
    int maior = matriz[0][0];
    int segundoMaio;
    int linha_maior = 0;
    int coluna_maior = 0;
    int i, j;


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }



    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    segundoMaior = matriz[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > segundoMaior && matriz[i][j] != maior) {
                segundoMaior = matriz[i][j];
            }
        }
    }

    printf("%d %d %d\n", segundoMaior, linha_maior + 1, coluna_maior + 1);

    return 0;
}
