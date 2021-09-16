// Cedulas e moedas
#include <stdio.h>
#include <math.h>
int main()
{
    double n, auxiliar;
    int v100, v50, v20, v10, v5, v2, v1;
    int v05, v025, v010, v005, v001;
    scanf("%lf", &n);
    printf("%.2lf\n", n);
    v100 = n / 100;
    v50 = (n - (100 * v100)) / 50;
    v20 = (n - ((100 * v100) + (50 * v50))) / 20;
    v10 = (n - ((100 * v100) + (50 * v50) + (20 * v20))) / 10;
    v5 = (n - ((100 * v100) + (50 * v50) + (20 * v20) + (v10 * 10))) / 5;
    v2 = (n - ((100 * v100) + (50 * v50) + (20 * v20) + (v10 * 10) + (v5 * 5))) / 2;
    v1 = (n - ((100 * v100) + (50 * v50) + (20 * v20) + (v10 * 10) + (v5 * 5) + (v2 * 2))) / 1;
    auxiliar = (n - ((100 * v100) + (50 * v50) + (20 * v20) + (v10 * 10) + (v5 * 5) + (v2 * 2) + (v1 * 1)));
    v05 = auxiliar / 0.50;
    v05 = floor(v05);
    v025 = (auxiliar - (v05 * 0.5)) / 0.25;
    v025 = floor(v025);
    v010 = (auxiliar - ((v05 * 0.5) + (v025 * 0.25))) / 0.1;
    v010 = floor(v010);
    v005 = (auxiliar - ((v05 * 0.5) + (v025 * 0.25) + (v010 * 0.1))) / 0.05;
    v005 = floor(v005);
    v001 = (auxiliar - ((v05 * 0.5) + (v025 * 0.25) + (v010 * 0.1) + (v005 * 0.05))) / 0.01;
    v001 = floor(v001);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", v100);
    printf("%d nota(s) de R$ 50.00\n", v50);
    printf("%d nota(s) de R$ 20.00\n", v20);
    printf("%d nota(s) de R$ 10.00\n", v10);
    printf("%d nota(s) de R$ 5.00\n", v5);
    printf("%d nota(s) de R$ 2.00\n", v2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", v1);
    printf("%d moeda(s) de R$ 0.50\n", v05);
    printf("%d moeda(s) de R$ 0.25\n", v025);
    printf("%d moeda(s) de R$ 0.10\n", v010);
    printf("%d moeda(s) de R$ 0.05\n", v005);
    printf("%d moeda(s) de R$ 0.01\n", v001);
    return 0;
}