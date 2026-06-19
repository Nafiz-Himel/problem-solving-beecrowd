#include <stdio.h>
int main()
{
    int n, m, sum = 0, count = 0;
    scanf("%d", &n);

    while (scanf("%d", &m))
    {
        if (m > n)
        {
            break;
        }
    }

    for (int i = n; sum <= m; i++)
    {
        sum += i;
        count++;
    }
    printf("%d\n", count);
    return 0;
}