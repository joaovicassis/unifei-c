// funcao para verificar anagramas

#include <stdio.h>
#include <string.h>
#define MAX 30

int anagrama(char string1[MAX], char string2[MAX]);
void ordena(char stri[MAX]);

int main(int argc, char const *argv[])
{
    char stri1[MAX], stri2[MAX];

    printf("Informe as duas strings: \n");
    scanf("%s %s", stri1, stri2);

    anagrama(stri1, stri2);

    return 0;
}

int anagrama(char string1[MAX], char string2[MAX])
{
    ordena(string1);
    ordena(string2);

    if (strcmp(string1, string2) == 0)
    {
        return 1;
    }else{
        return 0;
    }
    
}

// funcao que ordena as letras da palavra
void ordena(char stri[MAX])
{
    int tam = strlen(stri);
    int trocou = 1;  
    int i, aux;

    while (trocou == 1)
    {
        trocou = 0;
        
        for (i = 1; i < tam; i++)
        {
            if (a[i - 1] > a[i])
            {
                aux = a[i-1];
                a[i-1] = a[i];
            }
        }
    }
}    