#include <stdio.h>

int main()
{
    //ordenando em ordem decrescente
    double a, b, c, aux;
    double v[3];

    scanf("%lf %lf %lf", &a, &b, &c);
    v[0] = a;
    v[1] = b;
    v[2] = c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
    a = v[2];
    b = v[1];
    c = v[0];

    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((a * a) == (b * b) + (c * c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if ((a * a) > (b * b) + (c * c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
        if (a == b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a == b | a == c | b == c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if ((a * a) < (b * b) + (c * c))
    {
        printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ((a == b | a == c | b == c & (a != b | a != c | b != c)))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}