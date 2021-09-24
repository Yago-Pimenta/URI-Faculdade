#include <stdio.h>
int main()
{
    int x, n = 0;
    int soma = 0;
    while (1)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }
        else
        {
            if (x % 2 == 0)
            {
                soma = soma + (x + x + 8) * 2.5;
                printf("%d\n", soma);
            }
            else
            {
                x = x + 1;
                soma = soma + (x + x + 8) * 2.5;
                printf("%d\n", soma);
            }
        }
        soma = 0;
    }

    return 0;
}