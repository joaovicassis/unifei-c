#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c; 
    
    printf("Digite um caracter: ");
    scanf(" %c", &c);
    printf ("Caracter digitado: %c", c);
    printf ("Valor do caracter digitado: %d", c);
    
    return 0;
}
