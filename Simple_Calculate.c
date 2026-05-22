#include <stdio.h>

int main()
{
    int i = 2;
    double result;
    while (i > 0)
    {
        int a, b;
        float c;

        scanf("%d %d %f", &a, &b, &c);

        result += b * c;
        i--;
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", result);

    return 0;
}