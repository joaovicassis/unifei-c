#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *f = NULL;

    //abrir o arquivo
    f = fopen("teste.txt", "w");

    //testar se o arquivo foi aberto
    if (!f)
    {
        printf("Falha ao abrir arquivo! \n");
        exit(1);
    }
    
    //aqui o arquivo esta aberto
    printf("Arquivo aberto com sucesso...\n");

    //fecha arquivo
    fclose(f);
    return 0;
}
