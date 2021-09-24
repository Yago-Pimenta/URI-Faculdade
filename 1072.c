#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int in = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &j);
        if (j >= 10 & j <= 20)
        {
            in = in + 1;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", n - in);

    return 0;
}