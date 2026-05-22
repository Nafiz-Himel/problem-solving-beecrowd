#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", 0.5 * a * c, 3.14159 * c * c, ((a + b) / 2) * c, b * b, a * b);
    return 0;
}