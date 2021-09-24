#include <stdio.h>
int main()
{
    int n, soma = 0;
    double media, qnt = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
            break;
        else
        {
            soma += n;
            qnt++;
        }
    }
    media = soma / qnt;
    printf("%.2lf\n", media);
    return 0;
}