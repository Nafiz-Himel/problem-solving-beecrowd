#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n))
    {
        if (n != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i == n)
                    printf("%d\n", i);
                else
                    printf("%d ", i);
            }
        }
        else
            break;
    }
    return 0;
}