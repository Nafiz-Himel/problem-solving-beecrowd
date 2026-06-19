#include <stdio.h>
int main()
{
    int n,j=1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if(i==0)
        printf("I hate ");
        
        if(i>1)
        {
            printf("that I love ");
            printf("that I hate ");
        }
        
    }
    printf("it \n");
    return 0;
}