int main(int argc, char const *argv[])
{
    int v1, v2, v3;

    printf("Informe o primeiro valor: ");
    scanf("%d", &v1);

    printf("Informe o segundo valor: ");
    scanf("%d", &v2);

    v3 = v1;
    v1 = v2;
    v2 = v3;

    printf("%d %d", v1, v2);
    return 0;
}
