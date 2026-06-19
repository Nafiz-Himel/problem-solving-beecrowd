#include <stdio.h>
int main()
{
    int n, m, temp;
    scanf("%d %d", &n, &m);

    if (n > m)
    {
        temp = n;
        n = m;
        m = temp;
    }

    for (int i = n + 1; i < m; i++)
    {
        if (i % 5 == 3 || i % 5 == 2)
            printf("%d\n", i);
    }
    return 0;
}