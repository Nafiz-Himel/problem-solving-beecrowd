#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n > 1)
        {
            int prime = 1;
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if (prime == 1)
            {
                int every_prime = 0;
                while (n != 0)
                {
                    int m = n % 10;

                    if (m == 2 || m == 3 || m == 5 || m == 7)
                        every_prime = 1;
                    else
                    {
                        every_prime = 0;
                        break;
                    }

                    n = n / 10;
                }

                if (every_prime == 1)
                {
                    printf("Super\n");
                }
                else
                {
                    printf("Primo\n");
                }
            }
            else
                printf("Nada\n");
        }
        else
            printf("Nada\n");
    }
    return 0;
}