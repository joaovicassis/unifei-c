//STRCPY = COPIA UMA STRING PARA OUTRA

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[100] = "terca-feira";
    char b[100] = "sexta-fera";
    char c[100];

    strcpy(b, a); //destino, origem
    strcpy(c, "joao victor");
    printf("%s\n", b);
    printf("%s\n", c);

    return 0;
}    