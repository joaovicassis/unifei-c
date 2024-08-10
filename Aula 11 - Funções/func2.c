#include <stdio.h>

void funcao(int a);

int main(int argc, char const *argv[])
{
    int a = 1;

    printf("a no main: %d\n", a);
    funcao(a);
    printf("a no main: %d\n", a);     
    return 0;
}

void funcao(int a){
    a = 3; 
    printf("A dentro da funcao: %d\n", a);
}
