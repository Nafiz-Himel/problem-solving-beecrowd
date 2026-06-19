#include <stdio.h>
int main()
{
    int t, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0;
    scanf("%d", &t);

    while (t--)
    {
        int m;
        scanf("%d", &m);

        if (m % 2 == 0)
            count_2++;
        if (m % 3 == 0)
            count_3++;
        if (m % 4 == 0)
            count_4++;
        if (m % 5 == 0)
            count_5++;
    }

    printf("%d Multiplo(s) de 2\n", count_2);
    printf("%d Multiplo(s) de 3\n", count_3);
    printf("%d Multiplo(s) de 4\n", count_4);
    printf("%d Multiplo(s) de 5\n", count_5);

    return 0;
}