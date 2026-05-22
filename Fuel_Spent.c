#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    printf("%.3lf\n", (a * b) / 12);
    return 0;
}