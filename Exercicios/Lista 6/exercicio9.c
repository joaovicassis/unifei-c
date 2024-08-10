#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char frase[50], c[];
    int i, k, idc;

    printf("Informe uma frase: ");
    scanf(" %[^\n]", frase);

    printf("Informe um valor inteiro: ");
    scanf("%d", &i);

    printf("Informe um caracter: ");
    scanf(" %c", c[]);

    idc = 0;
    for ( k = i; i <= strlen(frase) ; k++)
    {
        if (frase[i] == c)
        {
            idc = i;
            break;
        }
    }
    
    printf("%d", idc);
    
    return 0;
}
