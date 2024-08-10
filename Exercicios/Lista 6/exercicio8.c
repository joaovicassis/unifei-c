#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char frase[50];
    int i, j, k;

    printf("Informe uma frase: ");
    scanf(" %[^\n]", frase);

    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &i, &j);

    for ( k = i; k <= j; k++)
    {
        printf("%c", frase[k]);
    }
    
    return 0;
}
