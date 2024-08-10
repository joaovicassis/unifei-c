#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ladoA, ladoB, areaTotal, potLampada; 

    printf("informe o comprimento do local: ");
    scanf("%d", &ladoA);

    printf("informe a largura do local: ");
    scanf("%d", &ladoB);

    areaTotal = ladoA * ladoB; 
    potLampada = areaTotal * 18;

    printf("%d %d", areaTotal, potLampada);
    return 0;
}
