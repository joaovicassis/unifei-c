#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2;
    int *x = NULL;
    int *y = NULL;

    //para 'apontar' um ponteiro, faz:
    //sem asterisco (no meio do codigo)
    // por exemplo: vamos apontar o 'x'
    //para a variavel 'a'

    //atribuicaco de endereço 
    x = &a; //ponteiro 'x' recebe o endereço de memoria de 'a'

    //atribuicao de conteudo
    y = x;
    *x = 7;

    printf("Conteudo de A: %d\n", a);
    printf("Endereco de A: %p\n", &a);
    printf("Conteudo de X: %d\n", *x);
    printf("X aponta para o endereco: %p\n", x);
    printf("Endereco de X: %p\n", &x);

    return 0;
}
