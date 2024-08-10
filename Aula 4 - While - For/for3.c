#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i; 
    long long int fatorial = 1;

    for ( i = 1; i <= 5; i++)
    {
        fatorial *= i;
    }
    
    printf("%lld", fatorial);
    return 0;
}
