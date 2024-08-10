#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa
{
    char nome[100];
    int idade;
}pessoa;


int main(int argc, char const *argv[])
{
    FILE *f = NULL;
    int a = 4;
    float pi = 3.14;
    int vet[5] = {2, 4, 6, 8, 10};
    pessoa p;


    p.idade = 19;
    strcpy(p.nome, "ana");

    //criando arquivo binario
    f = fopen("arq.dat", "wb");

    if (!f) printf("Falha ao abrir arquivo...");
    
    fwrite(&a, sizeof(a), 1, f); //a =4
    fwrite(&pi, sizeof(pi), 1, f); //pi = 3.14
    fwrite(vet, sizeof(int), 5, f);// vetor vet[5]
    fwrite(&p, sizeof(p), 1, f); // struct p

    fclose(f);
    return 0;
}
