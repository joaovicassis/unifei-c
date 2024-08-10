#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n[5][4] = {0};
    int i, j; 


    for (i = 0; i < 5; i++)
    {
        printf("Informe a matricula do aluno %d: ", i + 1);
        scanf("%f", &n[i][0]);

        printf("Informe a nota 1 do aluno %d: ");
        scanf("%f", &n[i][1]);

        printf("Informe a nota 2 do aluno %d: ");
        scanf("%f", &n[i][2]);

        n[i][3] = (n[i][1] + n[i][2]) / 2.0;
    }
    
    printf("Mat\tN1\tN2\t");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.1f\t", n[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
