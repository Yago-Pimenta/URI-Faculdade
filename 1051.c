#include <stdio.h>

int main()
{
    double entrada, imposto;

    scanf("%lf", &entrada);

    if (entrada <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (entrada > 2000 && entrada <= 3000)
    {
        entrada = entrada - 2000;
        imposto = 0.08 * entrada;
        printf("R$ %.2lf\n", imposto);
    }
    else if (entrada > 3000 && entrada <= 4500)
    {
        entrada = entrada - 3000;
        imposto = ((0.18 * entrada) + (1000 * 0.08));
        printf("R$ %.2lf\n", imposto);
    }
    else
    {
        entrada = entrada - 4500;
        imposto = ((0.28 * entrada) + (1000 * 0.08) + (1500 * 0.18));

        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}
