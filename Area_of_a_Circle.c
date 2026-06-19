#include <stdio.h>

int main()
{
    double r;
    scanf("%lf", &r);

    double n = 3.14159;

    double result = n * r * r;

    printf("A=%.4lf\n", result);

    return 0;
}