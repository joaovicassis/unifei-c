#include <stdio.h>
#define N 50

int main(int argc, char const *argv[])
{
    char f[50];
    int i;

    printf("Digite a frase: ");
    scanf(" %[^\n]", f);

    i=0;
    while (f[i] != '\0')
    {
        switch (f[i])
        {
        case 'a':
            f[i] = '1';
            break;
        case 'e':
            f[i] = '2';
            break;
        case 'i':
            f[i] = '3';
            break;
        case 'o':
            f[i] = '4';
            break;    
        case 'u':
            f[i] = '5';
            break;        
        default:
            break;
        }
        i++;
    }
    printf("Resultado = %s\n", f);
    return 0;
}
