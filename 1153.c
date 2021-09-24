#include <stdio.h>

int main()
{
    int numero, resultado;

    scanf("%d", &numero);

    int fatorial(int x);
    resultado = fatorial(numero);
    printf("%d\n", resultado);
    return 0;
}
int fatorial(int x)
{
    int resultado;
    if (x == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = x * fatorial(x - 1);
    }
    return resultado;
}
