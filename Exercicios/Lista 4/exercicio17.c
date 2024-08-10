#include <stdio.h>

#define MAX 8

int main() {
    int matriculas[MAX];
    float alturas[MAX];
    int i, maisBaixo = 0, maisAlto = 0;
    
    for (i = 0; i < MAX; i++) {
        printf("Digite os numeros de matricula dos alunos: ");
        scanf("%d", &matriculas[i]);
    }
    
    for (i = 0; i < MAX; i++) {
        printf("Digite as alturas dos alunos: ");
        scanf("%f", &alturas[i]);
    }

    for (i = 1; i < MAX; i++) {
        if (alturas[i] < alturas[maisBaixo]) {
            maisBaixo = i;
        }
    }

    for (i = 1; i < MAX; i++) {
        if (alturas[i] > alturas[maisAlto]) {
            maisAlto = i;
        }
    }

 
    printf("%d %.2f\n", matriculas[maisBaixo], alturas[maisBaixo]);
    printf("%d %.2f\n", matriculas[maisAlto], alturas[maisAlto]);

    return 0;
}
