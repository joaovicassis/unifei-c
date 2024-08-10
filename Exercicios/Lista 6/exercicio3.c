#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char frase[50];
    int i, cont;

    printf("Informe uma frase: ");
    scanf(" %[^\n]", frase);

    for ( i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ')
        {
            cont++;
        }
    }
    
    printf("%d", cont);
    return 0;
}
