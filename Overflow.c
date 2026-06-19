#include<stdio.h>

int main()
{
    int a,b,d;
    char c;
    scanf("%d %d %c %d", &a,&b,&c,&d);

    if(c == '+')
    {
        if((b+d) <= a)
            printf("OK\n");
        else
            printf("OVERFLOW\n");
    }
    else if(c == '*')
    {
        if((b*d) <= a)
            printf("OK\n");
        else
            printf("OVERFLOW\n");
    }
    return 0;
}