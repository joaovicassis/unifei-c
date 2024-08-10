#include <stdio.h>


long long int fatorial(long long int number);
int main(int argc, char const *argv[])
{
    int n = 30;

    printf("%lld", fatorial(n));

    return 0;
}

long long int fatorial(long long int number){
    if (number == 0) return 1;
    return number * fatorial(number - 1);
}