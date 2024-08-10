#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char frase[50], copFrase[50];
    int i, j = 0;

    printf("Informe uma frase: ");
    scanf(" %[^\n]", frase);

   for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] != ' ')
        {
            copFrase[j] = frase[i];
            j++;
        }
    }

    copFrase[j] = '\0';
    
    printf("%s", copFrase);
    return 0;
}
