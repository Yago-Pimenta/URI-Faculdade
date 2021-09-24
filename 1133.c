#include <stdio.h>
int main()
{
    int x, y;
    int i;
    int maior, menor;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        maior = x;
        menor = y;
    }
    else
    {
        menor = x;
        maior = y;
    }
    for (i = menor + 1; i < maior; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}