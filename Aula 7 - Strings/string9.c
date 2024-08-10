//STRCPM = COMPARA STRINGS

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[100] = "terca-feira";
    char b[100] = "sexta-fera";
    char c[100] = "terca-feira";

    if (strcmp(a,b) == 0)
    {
        printf("Strings A e B sao iguais!\n");
    }
    if (strcmp(a,c) == 0)
    {
        printf("String A e C sao iguais!\n");
    }
    if (strcmp(a,b) < 0)
    {
        printf("String A vem primeiro que B!\n");
    }else{
        printf("String B vem primeiro que A!\n");
    }
    
    
    return 0;
}
