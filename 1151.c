#include <stdio.h>
void fibbonacci(int limite)
{
    int a = 1;
    int b = 1;
    int aux = 0;
    int n = 0;
    printf("0");
    printf(" 1");
    while (n < limite - 2)
    {
        aux = b;
        b = a + b;
        a = aux;

        printf(" %d", a);
        n += 1;
    }
    printf("\n");
}
int main()
{
    int x;
    scanf("%d", &x);
    fibbonacci(x);
    return 0;
}