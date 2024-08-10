#include <stdio.h>

int main() {
    int matriz[3][5];
    int primo, i, j, k, l;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            primo = 1; 
            if (matriz[i][j] <= 1) {
                primo = 0; 
            } else {
                // Verifica se o número é divisível por algum número além de 1 e ele mesmo
                for (k = 2; k * k <= matriz[i][j]; k++) {
                    if (matriz[i][j] % k == 0) {
                        primo = 0; 
                        break;
                    }
                }
            }
            // Se primo ainda for verdadeiro, então o número é primo
            if (primo) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
