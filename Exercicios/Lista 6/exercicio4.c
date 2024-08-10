#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char frase[50];
    int i;

    printf("Informe uma frase: ");
    scanf(" %[^\n]", frase);

    for (i = strlen(frase) - 1; i >= 0; i--)
    {
        printf("%c", frase[i]);
    }
    
    return 0;
}
