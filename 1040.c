#include <stdio.h>
int main()
{
    double n1, n2, n3, n4, media, rec;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0)) / 10.0;
    printf("Media: %.1lf\n", media);
    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5.0 & media < 7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &rec);
        printf("Nota do exame: %.1lf\n", rec);

        media = (media + rec) / 2;
        if (media >= 5.0)
        {
            printf("Aluno aprovado.\n");

            printf("Media final: %.1lf\n", media);
        }
        else
        {
            printf("Aluno reprovado.\n");

            printf("Media final: %.1lf\n", media);
        }
    }

    return 0;
}