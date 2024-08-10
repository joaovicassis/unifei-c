#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char t[1000];
    int i, j, ok;
    int tt, ts, tsl, contA = 0;

    scanf("%s", t);

    tt = strlen(t);

    while (t[i] != '\0')
    {
        if (t[i] == 'a') contA++;
        i++;
        
    }

    tsl = (tt - contA)/2;

    ts = tt - tsl;

    printf("TT = %d\n", tt);
    printf("Ts = %d\n", ts);
    printf("TSL = %d\n", tsl);

    j = ts;
    i = 0;
    
    while (t[i] == 'a') i++;

    ok = 1; //supoe que existe 'S'
    while (i < ts)
    {
        if (t[i] != t[j])
        {
            ok = 0;
            break;
        }
        j++;
        i++;

        while (t[i] == 'a') i++
        
    }
    
    if (ok)
    {
        t[ts] = '\0';
        printf("%s", t);
    }else{
        printf("-1");
    }
    
    
    return 0;
}
