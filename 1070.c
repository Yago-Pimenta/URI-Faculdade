#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int i;
    for (i = n; i <= n + 11; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}