#include<stdio.h>

int main()
{
    long long int n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==-1)
            break;

        if (n == 0) {
            printf("0\n");
            continue;
        }

        while(n != 0)
        {
            printf("%lld",((n%3)*10)+(n%3));
            n = n/3;
        }
        printf("\n");
    }
    return 0;
}