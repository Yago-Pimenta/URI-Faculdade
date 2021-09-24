#include <stdio.h>
int main()
{
    int i;
    int n;
    int pares = 0;
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            pares = pares + 1;
        }
    }
    printf("%d valores pares\n", pares);

    return 0;
}