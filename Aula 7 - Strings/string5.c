#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char str[100] = "12 5.7";
    int a;
    float b;

    //conversao de string para numero
    sscanf(str, "%d %f", &a, &b);    //"A" e "B" agora sao tipos numericos
    printf("A = %d\n", a);
    printf("B = %f\n", b);

    printf("A + 1 = %d\n", a + 1);
    printf("B + 1= %f\n", b + 1);


    //=====================================================
    

    char str3[100] = "30";
    int x;
    printf("Usanto atoi");

    x = atoi(str3); //string para int
    printf("X = %d\n", x);
    printf("X * 2 = %d\n", x * 2);

    //=====================================================

    char str4[100] = "";

    printf("STR4 = %s\n", str4);

    sprintf(str4, "%d\n", x);

    printf("STR4 = %s\n", str4);

    return 0;
}
