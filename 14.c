//idade em dias e passa para anos meses dias
#include <stdio.h>
int main()
{
    int idade, ano, meses, dias;
    scanf("%d", &idade);
    ano = idade / 365.0;
    meses = (idade - 365 * ano) / 30;
    dias = idade - ((meses * 30) + (ano * 365));
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}