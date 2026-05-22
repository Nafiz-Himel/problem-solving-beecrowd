#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int years = n / 365;
    int months = (n - years * 365) / 30;
    int days = n - (years * 365 + months * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    return 0;
}