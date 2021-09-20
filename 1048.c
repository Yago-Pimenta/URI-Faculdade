#include <stdio.h>

int main()
{
    double salario, percentual, novo;
    scanf("%lf", &salario);

    if (salario <= 400)
    {
        novo = salario * (1.15);
        percentual = novo + (-salario);
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", percentual);
        printf("Em percentual: 15 %%\n");
    }
    else if (salario > 400 & salario <= 800)
    {
        novo = salario * 1.12;
        percentual = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", percentual);
        printf("Em percentual: 12 %%\n");
    }
    else if (salario > 800 & salario <= 1200)
    {
        novo = salario * 1.10;
        percentual = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", percentual);
        printf("Em percentual: 10 %%\n");
    }
    else if (salario > 1200 & salario <= 2000)
    {
        novo = salario * 1.07;
        percentual = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", percentual);
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        novo = salario * 1.04;
        percentual = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", percentual);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
