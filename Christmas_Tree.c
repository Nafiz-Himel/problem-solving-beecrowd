#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= n / 2 + 1; i++)
        {
            for (int j = n / 2; j >= i; j--)
            {
                printf(" ");
            }

            for (int k = 1; k <= i * 2 - 1; k++)
            {
                printf("*");
            }
            printf("\n");
        }

        for (int k = 1; k < 3; k++)
        {
            for (int i = n / 2; i >= k; i--)
            {
                printf(" ");
            }
            for (int i = 1; i <= k * 2 - 1; i++)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("\n");
    }
    return 0;
}