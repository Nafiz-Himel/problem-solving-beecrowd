#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("A = %d, B = %d, C = %d\n", a, b, c);
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    if (a < 0)
        printf("A = %-0.9d, B = %-0.10d, C = %-0.10d\n", a, b, c);
    else
        printf("A = %-0.10d, B = %-0.10d, C = %-0.10d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);
    return 0;
}