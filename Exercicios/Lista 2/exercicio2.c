#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4;

    printf("informe os 4 numeros: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    if (num1 < num2)
    {
        printf("%d", num1);
    }else if(num2 < num3){
        printf("%d", num2);
    }else if (num3 < num4){
        printf("%d", num3);
    }else{
        printf("%d", num4);
    }
    
    return 0;
}
