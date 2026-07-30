#include <stdio.h>

int main()
{
    int n, min = 10001, pos;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);

        if (ar[i] < min)
        {
            min = ar[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", min, pos);

    return 0;
}