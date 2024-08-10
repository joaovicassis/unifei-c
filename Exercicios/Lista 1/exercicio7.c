#include <stdio.h>

int main(int argc, char const *argv[])
{
    double precoFabrica, precoFinal, valorDistri, valorImposto;

    printf("Informe o custo de fabricacao do veiculo: ");
    scanf("%lf", &precoFabrica);

    valorImposto = precoFabrica * 0.45;
    valorDistri = precoFabrica * 0.28;

    precoFinal = precoFabrica + valorDistri + valorImposto; 

    printf("O valor final do veiculo eh de: %.2lf", precoFinal);
    return 0;
}
