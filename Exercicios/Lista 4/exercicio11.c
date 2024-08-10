    #include <stdio.h>

    int main(int argc, char const *argv[])
    {
        int v[10], i;

        for (size_t i = 0; i < 10; i++)
        {
            scanf("%d", &v[i]);
        }
        
        int menor = v[0], menor2 = v[0], menor3 = v[0];

        for (size_t i = 0; i < 10; i++)
        {
            if (v[i] < menor)
            {
                menor3 = menor2;
                menor2 = menor;
                menor = v[i];
            }else if (v[i] < menor2 && v[i] != menor)
            {
                menor3 = menor2;
                menor2 = v[i];
            }else if (v[i] < menor3 && v[i] != menor2 && v[i] != menor)
            {
                menor3 = v[i];
            }
        }

        printf("%d %d %d", menor, menor2, menor3);

        return 0;
    }
