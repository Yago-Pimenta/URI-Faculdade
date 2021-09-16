// calcula o volume da esfera
#include <stdio.h>
#define PI 3.14159
int main()
{
    double raio, volume;
    scanf("%lf", &raio);
    volume = PI * raio * raio * raio * (4.0 / 3);
    printf("VOLUME = %.3lf", volume);

    return 0;
}