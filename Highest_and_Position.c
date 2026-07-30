#include <stdio.h>

int main()
{
    int max = -1, num = 0;
    int i = 1;
    while (i <= 100)
    {
        int n;
        scanf("%d", &n);
        if (max < n)
        {
            max = n;
            num = i;
        }
        i++;
    }
    printf("%d\n%d\n", max, num);
    return 0;
}