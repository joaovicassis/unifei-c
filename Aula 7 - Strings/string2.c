#include <stdio.h>
#define N 50
int main(int argc, char const *argv[])
{
    char a[N], b[N];
    int i, tam, cont = 0;

    printf("Digite a frase: ");
    scanf(" %[^\n]", a);

    //descobrindo tamanho da string
    tam = 0;
    while (a[tam] != '\0')
    {
        tam++;
    }

    //vendo quantidade de letras sem espaco
    for (size_t i = 0; i < tam; i++)
    {
        if (a[i] != ' ')
        {
            cont++;
        }
        
    }
    
    printf("A frase possui %d caracteres: \n", tam);

    //copiar A para B
    for (i = 0; i <= tam; i++)
    {
        b[i] = a[i];
    }
    
    printf("String A: %s\n", a);
    printf("String B: %s\n", b);
    printf("tamanho sem espcao: %d\n", cont);
    return 0;
}
