#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char frase[50], fraseInversa[50];
    int i, j = 0, palindromo = 1;

    printf("Informe uma frase: ");
    scanf(" %[^\n]", frase);

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] != ' ')
        {
            fraseInversa[j] = tolower(frase[i]);
            j++;
        }
    }

    fraseInversa[j] = '\0';

    for (i = 0; i < strlen(fraseInversa) / 2; i++) {
        if (fraseInversa[i] != fraseInversa[strlen(fraseInversa) - 1 - i]) {
            palindromo = 0; // Não é um palíndromo
            break;
        }
    }
    
    if (palindromo)
    {
        printf("sim");
    }else{
        printf("nao");
    }
    
    
    return 0;
}
