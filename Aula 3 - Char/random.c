#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int x;

    srand(time(NULL));
    x =  -5 + rand() % 16;

    printf("O numero sorteado eh: %d", x);

    return 0;
}
