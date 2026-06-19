#include <stdio.h>
int main()
{
    int t, count_c = 0, count_r = 0, count_s = 0, total = 0;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        char c;
        scanf("%d %c", &n, &c);

        total += n;
        if (c == 'C')
            count_c += n;
        else if (c == 'R')
            count_r += n;
        else if (c == 'S')
            count_s += n;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", count_c);
    printf("Total de ratos: %d\n", count_r);
    printf("Total de sapos: %d\n", count_s);

    printf("Percentual de coelhos: %.2f %%\n", (count_c * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (count_r * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (count_s * 100.0) / total);
    return 0;
}