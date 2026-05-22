#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    printf("VOLUME = %.3lf\n", (4 * 3.14159 * a * a * a) / 3.0);
    return 0;
}