#include <stdio.h>

int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int sum = (((m - n + 1) * (n + m)) / 2);

    printf("%lld\n", sum);
    return 0;
}