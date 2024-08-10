// passando a string de joao victor assis para Joao Victor Assis

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char nome[100];
    int i;

    printf("Informe o nome: ");
    scanf("%[^\n]", nome);

    nome[0] = toupper(nome[0]);
    i = 1;
    
    while (nome[i] !=  '\0')
    {
        if (nome[i] == ' ')
        {
            nome[i+1] = toupper(nome[i+1]);
        }
        i++;
    }
    
    printf("Resultado = %s\n", nome);

    return 0;
}
