#include <stdio.h>
#define MAX 6
int main() {
    int v[MAX];
    int i, maior, segundo_maior, temp;

    
    for (i = 0; i < MAX; i++) {
        printf("Digite 6 valores: ");
        scanf("%d", &v[i]);
    }

    maior = v[0];
    segundo_maior = v[1];

    if (segundo_maior > maior) {
        temp = maior;
        maior = segundo_maior;
        segundo_maior = temp;
    }

    
    for (i = 2; i < MAX; i++) {
        if (v[i] > maior) {
            segundo_maior = maior;
            maior = v[i];
        } else if (v[i] > segundo_maior && v[i] != maior) {
            segundo_maior = v[i];
        }
    }

    printf("%d %d\n", maior, segundo_maior);

    return 0;
}
