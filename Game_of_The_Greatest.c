#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n))
    {
        if (n != 0)
        {
            int right = 0, left = 0;
            while (n--)
            {
                int a, b;
                scanf("%d %d", &a, &b);
                if (a > b)
                    right++;
                else if (b > a)
                    left++;
            }
            printf("%d %d\n", right, left);
            right = 0, left = 0;
        }
        else
            break;
    }
    return 0;
}