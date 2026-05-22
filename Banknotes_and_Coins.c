#include <stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);

    printf("NOTAS:\n");

    int a = n;
    float num = n - a;

    printf("%d nota(s) de R$ 100.00\n", a / 100);
    a = a % 100;

    printf("%d nota(s) de R$ 50.00\n", a / 50);
    a = a % 50;

    printf("%d nota(s) de R$ 20.00\n", a / 20);
    a = a % 20;

    printf("%d nota(s) de R$ 10.00\n", a / 10);
    a = a % 10;

    printf("%d nota(s) de R$ 5.00\n", a / 5);
    a = a % 5;

    printf("%d nota(s) de R$ 2.00\n", a / 2);
    a = a % 2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", a / 1);

    printf("%d moeda(s) de R$ 0.50\n", (int)(num / 0.50)); // explicit typecast
    if ((int)(num / 0.50) != 0)
        num = (num - (0.50 * (int)(num / 0.50)));

    printf("%d moeda(s) de R$ 0.25\n", (int)(num / 0.25));
    if ((int)(num / 0.25) != 0)
        num = (num - (0.25 * (int)(num / 0.25)));

    printf("%d moeda(s) de R$ 0.10\n", (int)(num / 0.10));
    if ((int)(num / 0.10) != 0)
        num = (num - (0.10 * (int)(num / 0.10)));

    printf("%d moeda(s) de R$ 0.05\n", (int)(num / 0.05));
    if ((int)(num / 0.05) != 0)
        num = (num - (0.05 * (int)(num / 0.05)));

    int numm = (num / 0.01) + 0.005; // fixed precision
    printf("%d moeda(s) de R$ 0.01\n", numm);

    return 0;
}