#include <stdio.h>
int main()
{
    int a, b;
    char c;

    float coelho = 0;
    float rato = 0;
    float sapo = 0;
    int n;
    float total = 0;
    float percentual_c, percentual_r, percentual_s;
    scanf("%d", &n);
    for (a = n; a > 0; a--)
    {
        scanf("%d %c", &b, &c);
        if (c == 'C')
        {
            coelho = coelho + b;
        }
        else if (c == 'R')
        {
            rato = rato + b;
        }
        else if (c == 'S')
        {
            sapo = sapo + b;
        }
        total = total + b;
    }
    percentual_c = (coelho / total) * 100.0;
    percentual_r = (rato / total) * 100.0;
    percentual_s = (sapo / total) * 100.0;
    printf("Total: %.f cobaias\n", total);
    printf("Total de coelhos: %.f\n", coelho);
    printf("Total de ratos: %.f\n", rato);
    printf("Total de sapos: %.f\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", percentual_c);
    printf("Percentual de ratos: %.2f %%\n", percentual_r);
    printf("Percentual de sapos: %.2f %%\n", percentual_s);

    return 0;
}