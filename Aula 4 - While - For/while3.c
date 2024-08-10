#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int potencia = 1;
    int expoente = 0;

    while (potencia <= 10000){
        potencia = potencia * 5;
        expoente++;
    }
     
    printf("%lld\n", potencia);
    printf("%d", expoente);

    return 0;
}