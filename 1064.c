#include <stdio.h>
int main()
{

    float var;
    float media = 0;
    int pos = 0;
    int i = 0;
    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &var);

        if (var > 0)
        {
            pos += 1;
            media += var;
        }
    }
    printf("%d valores positivos\n", pos);
    printf("%.1f\n", media / pos);
    return 0;
}
