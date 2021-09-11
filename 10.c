#include <stdio.h>
int main()
{
    int distancia;
    double litros;
    double consumo;
    scanf("%d", &distancia);
    scanf("%lf", &litros);
    consumo = distancia / litros;
    printf("%.3lf km/l", consumo);

    return 0;
}