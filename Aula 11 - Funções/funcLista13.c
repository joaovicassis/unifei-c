#include <stdio.h>

typedef struct Ponto
{
    int x, y;
}Ponto;

int contido(Ponto v1, Ponto v2, Ponto p);

int main(int argc, char const *argv[])
{
    
    return 0;
}

int contido(Ponto v1, Ponto v2, Ponto p){
    if (p.x > v1.x && p.x < v2.x)
    {
        return 1;
    }
    
}