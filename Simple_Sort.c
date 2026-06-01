#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
    {
        printf("%d\n", a);
        if (b < c)
        {
            printf("%d\n%d\n\n%d\n%d\n%d\n", b, c, a, b, c);
        }
        else
        {
            printf("%d\n%d\n\n%d\n%d\n%d\n", c, b, a, b, c);
        }
    }

    else if (b < a && b < c)
    {
        printf("%d\n", b);
        if (a < c)
        {
            printf("%d\n%d\n\n%d\n%d\n%d\n", a, c, a, b, c);
        }
        else
        {
            printf("%d\n%d\n\n%d\n%d\n%d\n", c, a, a, b, c);
        }
    }

    else if (c < a && c < b)
    {
        printf("%d\n", c);
        if (a < b)
        {
            printf("%d\n%d\n\n%d\n%d\n%d\n", a, b, a, b, c);
        }
        else
        {
            printf("%d\n%d\n\n%d\n%d\n%d\n", b, a, a, b, c);
        }
    }

    else
    {
        printf("%d\n", c);
        if (a < b)
        {
            printf("%d\n%d\n\n%d\n%d\n%d\n", a, b, a, b, c);
        }
        else
        {
            printf("%d\n%d\n\n%d\n%d\n%d\n", b, a, a, b, c);
        }
    }

    return 0;
}