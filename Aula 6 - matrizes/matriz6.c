//multiplicacao de matrizes
#include <stdio.h>
#define M 3
#define N 4
#define P 1

int main(int argc, char const *argv[])
{
    float qtd[M][N] = { 3, 6, 1, 3, 4, 4, 2, 2, 0, 1, 1, 6 };    
    float rs[N][P] = {3.0, 2.8, 3.2, 2.2};
    float resp[M][P] = {0};
    int i, j, k; 


    //multiplicação de matriz
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < P; j++)
        {
            for (size_t k = 0; k < N; k++)
            {
                resp[i][j] += (qtd[i][k] * rs[k][j]);
            }
            
        }
        
    }

    for (size_t i = 0; i < M; i++)
    {
        printf("%.2f\n", resp[i][0]);
    }
    
    return 0;
}
