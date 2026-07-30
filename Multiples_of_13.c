#include <stdio.h>

int main()
{
    int x, y;
    long long int sum = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    
    while (x <= y)
    {
        if (x % 13 != 0)
            sum += x;
        x++;
    }
    printf("%lld\n", sum);

    return 0;
}