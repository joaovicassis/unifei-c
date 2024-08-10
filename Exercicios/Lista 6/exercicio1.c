#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char frase[50];
    int i, contador;

    printf("Informe uma frase: ");
    scanf(" %[^\n]", frase);

    for (i = 0; i < strlen(frase); i++)
    {
        frase[i] = tolower(frase[i]);
    }

    i = 0;

    while (frase[i] != '\0')
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            contador++;
        }

        i++;
    }
    
    printf("quantidade de vogais: %d", contador);
    return 0;
}
