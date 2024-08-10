#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char fraseA[50], fraseB[50];
    int tamA = 0, tamB = 0, difFrases = 0;

    printf("Informe a primeira frase: ");
    scanf(" %[^\n]", fraseA); 

    printf("Informe a segunda frase: ");
    scanf(" %[^\n]", fraseB);

    tamA = strlen(fraseA);
    tamB = strlen(fraseB);

    if (tamA > tamB)
    {
        difFrases = tamA - tamB;
        printf("A frase 1 possui %d caracteres a mais que a frase 2.", difFrases);
    }
    if (tamA < tamB)
    {
        difFrases = tamB - tamA;
        printf("A frase 1 possui %d caracteres a menos que a frase 2.", difFrases);
    }

    return 0;
}
