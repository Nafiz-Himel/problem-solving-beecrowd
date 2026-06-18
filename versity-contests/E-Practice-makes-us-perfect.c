#include <stdio.h>
int main()
{
    int a, b, c, d, count = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >= 10)
        count++;
    if (b >= 10)
        count++;
    if (c >= 10)
        count++;
    if (d >= 10)
        count++;
    printf("%d\n", count);
    return 0;
}