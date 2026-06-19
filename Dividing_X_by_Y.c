#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        float n, m;
        scanf("%f %f", &n, &m);

        if (n != 0 && m != 0)
        {
            printf("%.1f\n", (n / m));
        }
        else if (m == 0)
            printf("divisao impossivel\n");
        else
            printf("0.0\n");
    }
    return 0;
}