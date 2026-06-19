#include <stdio.h>
int main()
{
    int n, m, sum = 0;
    scanf("%d %d", &n, &m);

    for (int i = m + 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}