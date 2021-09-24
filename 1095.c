#include <stdio.h>

int main()
{
    int x, y;
    x = 1;
    y = 60;

    for (x = 1, y = 60; y <= 60; x += 3, y -= 5)
    {
        printf("I=%d J=%d\n", x, y);
        if (y == 0)
            break;
    }

    return 0;
}