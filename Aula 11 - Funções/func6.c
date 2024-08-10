#include <stdio.h>

int fib(int n);
int main(int argc, char const *argv[])
{
    int x = 5;
    printf("%d", fib(x));
    return 0;
}

int fib(int n){
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    return fib(n-1) + fib(n-2);
}
