#include <stdio.h>
int main()
{
    int i = 1;
    int j;
    scanf("%d", &j);
    for (i; i < 100; i++)
    {
        if (i % j == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}