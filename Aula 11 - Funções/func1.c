#include <stdio.h>

int CalculaMDC(int x, int y);
int main(int argc, char const *argv[])
{
    int mdc;

    mdc = CalculaMDC(40, 60);

    printf("%d", mdc);
 
    return 0;
}

int CalculaMDC(int x, int y){
    int menor, resp;
    int i;

    menor = x;
    if (x < y) menor = y;

    for (i = 1; i <= menor; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            resp = i; 
        }
    }

    return resp;
}
