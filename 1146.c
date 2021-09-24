#include <stdio.h>
int main()
{
    int i;
    int j;
    scanf("%d", &j);
    while (j != 0)
    {
        printf("1");
        for (i = 2; i <= j; i++)
        {
            if (j == 0)
            {
                break;
            }
            printf(" %d", i);
        }
        printf("\n");
        scanf("%d", &j);
    }
    return 0;
}