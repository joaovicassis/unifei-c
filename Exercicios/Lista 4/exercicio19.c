#include <stdio.h>

#define MAX 10

int main() {
    int numeros_primos[MAX];
    int contador_primos = 0;
    int numero, primo;

    while (contador_primos < MAX) {
        //printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        primo = 1; 
        if (numero <= 1) {
            primo = 0; 
        } else {
            for (int i = 2; i * i <= numero; i++) {
                if (numero % i == 0) {
                    primo = 0; 
                    break;
                }
            }
        }

        if (primo) {
            numeros_primos[contador_primos] = numero;
            contador_primos++;
        }
    }

    for (int i = 0; i < MAX; i++) {
        printf("%d ", numeros_primos[i]);
    }

    return 0;
}
