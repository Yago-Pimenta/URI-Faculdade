#include <stdio.h>
int main()
{
    int x;
    int z = 0;
    scanf("%d", &x);
    while (x >= z)
    {
        scanf("%d", &z);
    }
    int i;
    int qnt = 0;
    int soma = 0;
    for (i = x + 1; x <= z; x++)
    {
        soma = soma + i;

        qnt = qnt + 1;
        if (soma >= z)
        {
            break;
        }
    }
    printf("%d\n", qnt);

    return 0;
}