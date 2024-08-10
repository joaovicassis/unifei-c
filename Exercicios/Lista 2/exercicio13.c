#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade; 

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >= 4 && idade <= 5)
    {
        printf("Fraldinha");
    }else if (idade >= 6 && idade <= 12 ){
        printf("Infantil");
    }else if(idade >= 13 && idade <= 18){
        printf("Juvenil");
    }else {
        printf("Adulto");
    }
    
    return 0;
}

