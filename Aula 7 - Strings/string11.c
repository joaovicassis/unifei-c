//STRCAT = CONCATENA DUAS STRINGS

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[100] = "hoje";
    char b[100] = " eh";
    char c[100] = " ter-feira";
    char d[100] = "";

    strcat(d, a);
    strcat(d, b);
    strcat(d, c);
    strcat(d, "!!!");

    printf("%s\n", d);

    return 0;
}    