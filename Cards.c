#include <stdio.h>

int main()
{
    int n, m, flag_d = 0, flag_c = 0, flag = 0;

    scanf("%d %d", &n, &m);

    if (n > m)
    {
        int x, y;
        while (scanf("%d %d", &x, &y))
        {
            if (x > y)
            {
                flag_d = 1;
            }
            else
            {
                flag = 1;
                flag_d = 0;
                break;
            }
        }
    }
    else if (n < m)
    {
        int x, y;
        while (scanf("%d %d", &x, &y))
        {
            if (x > y)
            {
                flag_c = 1;
            }
            else
            {
                flag = 1;
                flag_c = 0;
                break;
            }
        }
    }
    else
    {
        printf("N\n");
    }

    if (flag_c == 1)
        printf("C\n");
    else if (flag_d == 1)
        printf("D\n");
    else if(flag == 1)
        printf("N\n");
    return 0;
}