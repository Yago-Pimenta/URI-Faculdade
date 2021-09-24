#include <stdio.h>
int main()
{
    double soma = 0;
    double a = 1;
    double b = 1;
    for (b = 1; b <= 100; b++)
    {
        soma = soma + (a / b);
    }
    printf("%.2lf\n", soma);
    return 0;
}