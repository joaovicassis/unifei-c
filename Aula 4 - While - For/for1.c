#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int soma = 0;
    
    for (i = 0; i <= 100; i += 2){
        soma  += i;
    }
    
    printf("resposta = %d", soma);
    return 0;
}
