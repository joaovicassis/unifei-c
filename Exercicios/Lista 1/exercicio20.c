 #include <stdio.h>
 
 int main(int argc, char const *argv[])
 {
    int quantAulas;
    float ganhoTotal, gastoMaterial, saldoFinal;

    printf("Informe quantas aulas foram ministradas: ");
    scanf("%d", &quantAulas);

    ganhoTotal = quantAulas * 50.00;
    gastoMaterial = ganhoTotal * 0.15;
    saldoFinal = ganhoTotal - gastoMaterial;

    printf("%.2f\n", ganhoTotal);
    printf("%.2f\n", gastoMaterial);
    printf("%.2f\n", saldoFinal);

    return 0;
 }
 