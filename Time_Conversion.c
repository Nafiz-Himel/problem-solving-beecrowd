#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int hours = a / 3600;
    int minute = abs(a - (hours * 3600)) / 60;
    int seconds = abs(a - (hours * 3600 + minute * 60));

    printf("%d:%d:%d\n", hours, minute, seconds);
    return 0;
}