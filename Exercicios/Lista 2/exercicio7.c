#include <stdio.h>

int main(int argc, char const *argv[])
{
    float preco, precoFinal;
    int estado;

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);

    printf("Informe o estado: 1 MG, 2 SP, 3 RJ, 4 ES: ");
    scanf("%d", &estado);

    if (estado == 1)
    {
        precoFinal = preco + (preco * 0.12);
        printf("%.2f", precoFinal); 
    }else if(estado == 2){
        precoFinal = preco + (preco * 0.07);
        printf("%.2f", precoFinal); 
    }else if(estado == 3){
        precoFinal = preco + (preco * 0.15);
        printf("%.2f", precoFinal); 
    }else if(estado == 4){
        precoFinal = preco + (preco * 0.08);
        printf("%.2f", precoFinal); 
    }
    
    return 0;
}
