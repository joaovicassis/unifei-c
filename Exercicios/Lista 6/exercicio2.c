#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char frase[50];
    int i;
    int contA = 0, contE = 0, contI = 0, contU = 0, contO = 0;

    printf("Informe uma frase: ");
    scanf(" %[^\n]", frase);

    for (i = 0; i < strlen(frase); i++)
    {
        frase[i] = tolower(frase[i]);
    }

    i = 0;

    while (frase[i] != '\0')
    {
        if (frase[i] == 'a')
        {
            contA++;
        }

        if (frase[i] == 'e')
        {
            contE++;
        }
        
        if (frase[i] == 'i')
        {
            contI++;
        }
        
        if (frase[i] == 'o')
        {
            contO++;
        }
        
        if (frase[i] == 'u')
        {
            contU++;
        }
        
        
        i++;
    }
    
    printf("A = %d\n", contA);
    printf("E = %d\n", contE);
    printf("I = %d\n", contI);
    printf("o = %d\n", contO);
    printf("u = %d\n", contU);

    return 0;
}
