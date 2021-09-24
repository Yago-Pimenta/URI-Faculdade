#include <stdio.h>
int main()
{
    int i;
    int n;
    int maior = 0;
    int j;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
            j = i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", j);
    return 0;
}