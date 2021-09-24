#include <stdio.h>
int main()
{
    float var;
    int pos = 0;
    int i = 0;
    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &var);
        if (var > 0)
        {
            pos = pos + 1;
        }
    }
    printf("%d valores positivos\n", pos);
    return 0;
}