#include <stdio.h>
int main()
{
    int n;
    int i;
    double j3, j1, j2;
    double media = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%lf %lf %lf", &j1, &j2, &j3);

        media = ((2 * j1) + (3 * j2) + (5 * j3)) / 10;
        printf("%.1lf\n", media);
    }

    return 0;
}