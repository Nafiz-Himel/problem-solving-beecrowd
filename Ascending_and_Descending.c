#include <stdio.h>

int main()
{
    while (1)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        if (n == m)
            break;

        if (n > m)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }
    return 0;
}