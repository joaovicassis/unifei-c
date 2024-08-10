#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, j; 
    float e = 0;  
    long long int fatorial;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++){
        fatorial = 1;

        for ( j = 2; j <= i; j++){
            fatorial = fatorial * j;
        }
        
        e = e + 1.0 / fatorial;
    }
    
    printf("%f", e);

    return 0;
}
