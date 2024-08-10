#include <stdio.h>

void esvaziar(int *flores);
int main(int argc, char const *argv[])
{
    int flores = 5;

    esvaziar(&flores);

    return 0;
}

void esvaziar(int *flores){
    printf("O vazo possui %d flores \n", *flores);
    
    if (*flores > 0)
    {
        *flores = *flores - 1;

        esvaziar(flores);
    }
    
}