#include <stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int n = 0;
    int k = 0;
    int soma = 0;

    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        scanf("%d", &n);
        for (k = 1; k < n; k++)
        {
            if (n % k == 0)
            {
                soma = soma + k;
            }
        }

        if (soma == n)
        {
            printf("%d eh perfeito\n", n);
        }
        else if (soma != n)
        {
            printf("%d nao eh perfeito\n", n);
        }
        soma = 0;
    }
}