#include <stdio.h>
int main()
{
    long long int a, b;
    while (scanf("%lld %lld", &a, &b))
    {
        if (a != 0 && b != 0)
            printf("%lld\n", a * b);
        else
            break;
    }
    return 0;
}