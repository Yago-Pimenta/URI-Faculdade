#include <stdio.h>

int main()
{
    int i;
    int j;
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {

        printf("%d %d %d\n", j, j * j, j * j * j);
    }

    return 0;
}
