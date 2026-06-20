#include <stdio.h>
int main()
{
    int n,m,flag = 0;
    scanf("%d", &n);
    while(scanf("%d",&m))
    {
        if(n<m)
        {
            n = m;
            flag = 1;
        }
        else if(n>m)
        {
            n=m;
            flag = 2;
        }
    }

    if(flag == 1)
        printf("C\n");
    else if(flag == 2)
        printf("D\n");
    else
    return 0;
}