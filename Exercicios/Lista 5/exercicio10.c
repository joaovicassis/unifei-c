#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N para a matriz NxN: ");
    scanf("%d", &N);

    int matriz[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma_referencia = 0;
    for (int j = 0; j < N; j++) {
        soma_referencia += matriz[0][j]; 
    }

    for (int i = 0; i < N; i++) {
        int soma_linha = 0;
        for (int j = 0; j < N; j++) {
            soma_linha += matriz[i][j];
        }
        if (soma_linha != soma_referencia) {
            printf("nao\n");
            return 0;
        }
    }

    for (int j = 0; j < N; j++) {
        int soma_coluna = 0;
        for (int i = 0; i < N; i++) {
            soma_coluna += matriz[i][j];
        }
        if (soma_coluna != soma_referencia) {
            printf("nao\n");
            return 0;
        }
    }

    int soma_diagonal_principal = 0;
    for (int i = 0; i < N; i++) {
        soma_diagonal_principal += matriz[i][i];
    }
    if (soma_diagonal_principal != soma_referencia) {
        printf("nao\n");
        return 0;
    }

    int soma_diagonal_secundaria = 0;
    for (int i = 0; i < N; i++) {
        soma_diagonal_secundaria += matriz[i][N - i - 1];
    }
    if (soma_diagonal_secundaria != soma_referencia) {
        printf("nao\n");
        return 0;
    }
    printf("sim\n");

    return 0;
}
