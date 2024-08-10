#include <stdio.h>

int main() {
    float diametroBola, alturaCaixa, larguraCaixa, profundidadeCaixa;

    
    printf("Digite o diametro da bola: ");
    scanf("%f", &diametroBola);
    
    printf("Digite a altura da caixa: ");
    scanf("%f", &alturaCaixa);

    printf("Digite a largura da caixa: ");
    scanf("%f", &larguraCaixa);
     
    printf("Digite a profundidade da caixa: ");
    scanf("%f", &profundidadeCaixa);

    
    if (diametroBola < alturaCaixa && diametroBola < larguraCaixa && diametroBola < profundidadeCaixa) {
        printf("sim\n"); 
    } else {
        printf("nao\n"); 
    }

    return 0;
}

