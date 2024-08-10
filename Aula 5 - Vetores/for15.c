#include <stdio.h>

int main() {
    int N;
    float soma = 0;
    int numerador = 1;
    int denominador = 1;
    int sinal = 1;

    //printf("Informe N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += (float)(numerador * sinal) / denominador; 
        numerador += 2;
        denominador ++;
        if (i % 2 == 0)
        {
            sinal *= -1; 
        }
        
    }

    
    printf("%.2f\n", soma);

    return 0;
}

