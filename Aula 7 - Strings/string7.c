#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char frase[100];
    int i;

    printf("Informe a frase em MINUSCULO: ");
    scanf("%[^\n]", frase);

    for (size_t i = 0; i < strlen(frase); i++)
    {
        frase[i] = toupper(frase[i]);
    }
    
    printf("Resultado: %s\n", frase);
    return 0;
}
