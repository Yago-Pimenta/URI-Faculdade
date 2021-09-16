// Cedulas
#include <stdio.h>
int main()
{
    int n, v100, v50, v20, v10, v5, v2, v1;
    scanf("%d", &n);
    v100 = n / 100;
    v50 = (n - (100 * v100)) / 50;
    v20 = (n - ((100 * v100) + (50 * v50))) / 20;
    v10 = (n - ((100 * v100) + (50 * v50) + (20 * v20))) / 10;
    v5 = (n - ((100 * v100) + (50 * v50) + (20 * v20) + (v10 * 10))) / 5;
    v2 = (n - ((100 * v100) + (50 * v50) + (20 * v20) + (v10 * 10) + (v5 * 5))) / 2;
    v1 = (n - ((100 * v100) + (50 * v50) + (20 * v20) + (v10 * 10) + (v5 * 5) + (v2 * 2))) / 1;
    printf("%d nota(s) de R$ 100,00\n", v100);
    printf("%d nota(s) de R$ 50,00\n", v50);
    printf("%d nota(s) de R$ 20,00\n", v20);
    printf("%d nota(s) de R$ 10,00\n", v10);
    printf("%d nota(s) de R$ 5,00\n", v5);
    printf("%d nota(s) de R$ 2,00\n", v2);
    printf("%d nota(s) de R$ 1,00\n", v1);
    return 0;
}