#include <stdio.h>

#define MAX 10

int main() {
    int ni[MAX];
    int numero, contador_impares = 0;

    while (1) {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            ni[contador_impares] = numero;
            contador_impares++;

            if (contador_impares == MAX) {
                break; 
            }
        }
    }

    for (int i = 0; i < MAX; i++) {
        printf("%d ", ni[i]);
    }

    return 0;
}
