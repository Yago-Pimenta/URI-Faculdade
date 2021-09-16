//gasto com combustivel
#include <stdio.h>
int main()
{
    int horas, vm;
    double gasto;
    scanf("%d", &horas);
    scanf("%d", &vm);
    gasto = horas * vm / 12.0;
    printf("%.3lf\n", gasto);
    return 0;
}