#include <stdio.h>
int main()
{
    int vetor[3];
    int auxiliar;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int j = 0; j < 3; j++)
    {
        for (int z = j + 1; z < 3; z++)
        {
            if (vetor[j] > vetor[z])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[z];
                vetor[z] = auxiliar;
            }
        }
    }
    for (int f = 0; f < 3; f++)
    {
        printf("%d\n", vetor[f]);
    }

    return 0;
}