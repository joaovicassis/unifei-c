#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nota1, nota2;
    float media;

    printf("informe as duas notas: ");
    scanf("%d%d", &nota1, &nota2);

    if ((nota1 < 0 || nota2 > 10) || (nota1 > 10 || nota2 < 0))
    {
        printf("notas incorretas");
    }else{
        media = (nota1 + nota2) / 2;
        printf("%.2f", media);
    }
    
    return 0;
}
