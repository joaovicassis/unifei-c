#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char c1 = 'a';
    char c2 = 'a';

    //isUpper
    if (isupper(c1))
    {
        printf("%c eh maiusculo! 1\n");
    }
    if (isupper(c2))
    {
        printf("%c eh maiusculo! 2\n");
    }

    //toUpper
    printf("c1 = %c\n", c1);
    printf("%c\n", toupper(c1));
    return 0;
}
