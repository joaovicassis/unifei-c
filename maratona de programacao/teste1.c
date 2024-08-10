#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int N, count = 0;
    int ok = 0;

    printf("Informe o valor de N: ");
    scanf("%d", &N);

    while (!ok)
    {
        if (N < 2 || N > pow(10, 4))
        {
            printf("Valores invalidos!");
            ok = 0;
            printf("Informe o valor de N: ");
            scanf("%d", &N);
        }
        else
        {
            ok = 1;
        }
    }

    char letra[N];
    int tam[N];

    for (size_t i = 0; i < N; i++)
    {
        printf("Informe o tamanho do pe: ");
        scanf("%d", &tam[i]);

        printf("Informe o lado do pe: ");
        scanf(" %c", &letra[i]);

        for (int j = 0; j < N; j++)
        {
            if (tam[i] == tam[j] && toupper(letra[i]) != toupper(letra[j]))
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}
