#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int ar[t];
    ar[0] = 0;
    ar[1] = 1;
    for (int i = 2; i < t; i++)
    {
        ar[i] = ar[i - 2] + ar[i - 1];
    }

    for (int i = 0; i < t; i++)
    {
        if(i==t-1)
            printf("%d\n",ar[i]);
        else
            printf("%d ", ar[i]);
    }
    return 0;
}