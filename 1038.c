#include <stdio.h>
int main()
{
    int c, qnt;
    double p;
    scanf("%d %d", &c, &qnt);
    switch (c)
    {
    case 1:
        p = 4.00 * qnt;
        break;
    case 2:
        p = 4.50 * qnt;
        break;
    case 3:
        p = 5.00 * qnt;
        break;
    case 4:
        p = 2.00 * qnt;
        break;
    case 5:
        p = 1.50 * qnt;
        break;
    }
    printf("Total: R$ %.2lf\n", p);

    return 0;
}