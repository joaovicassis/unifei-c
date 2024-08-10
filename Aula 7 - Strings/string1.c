#include <stdio.h>

int main(int argc, char const *argv[])
{
    char palavra[50];
    char frase[50];

    printf("Informe uma palavra: \n");
    scanf("%s", palavra);

    printf("Informe uma frase: \n");
    scanf(" %[^\n]", frase);


    printf("%s\n", palavra);
    printf("%s", frase);
    return 0;
}
