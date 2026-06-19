#include <stdio.h>

int main()
{
    double s;
    scanf("%lf", &s);

    if (s >= 0 && s <= 400.00)
    {
        printf("Novo salario: %.2lf\n", ((s * (15.00 / 100)) + s));
        printf("Reajuste ganho: %.2lf\n", (s * (15.00 / 100)));
        printf("Em percentual: 15 %%\n");
    }
    else if (s <= 800.00)
    {
        printf("Novo salario: %.2lf\n", ((s * (12.00 / 100)) + s));
        printf("Reajuste ganho: %.2lf\n", (s * (12.00 / 100)));
        printf("Em percentual: 12 %%\n");
    }
    else if (s <= 1200.00)
    {
        printf("Novo salario: %.2lf\n", ((s * (10.00 / 100)) + s));
        printf("Reajuste ganho: %.2lf\n", (s * (10.00 / 100)));
        printf("Em percentual: 10 %%\n");
    }
    else if (s <= 2000.00)
    {
        printf("Novo salario: %.2lf\n", ((s * (7.00 / 100)) + s));
        printf("Reajuste ganho: %.2lf\n", (s * (7.00 / 100)));
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        printf("Novo salario: %.2lf\n", ((s * (4.00 / 100)) + s));
        printf("Reajuste ganho: %.2lf\n", (s * (4.00 / 100)));
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}