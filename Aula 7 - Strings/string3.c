#include <stdio.h>
#define N 50

int main(int argc, char const *argv[])
{
    char frase[N];
    int i;

    printf("Informe uma frase: \n");
    scanf(" %[^\n]", frase);

    i=0;
    while (frase[i] != '\0')
    {
        if (frase[i] != 'a' && frase[i] != 'e'&& frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u')
        {
            printf("%c", frase[i]);
        }
        i++;
    }
    
    printf("\n");
    return 0;
}
