#include <stdio.h>
int main()
{
    char ch[20];
    scanf("%s",ch);

    int len = strlen(ch);

    while(len--)
    {
        printf("%c",ch[len]);
    }
    printf("\n");
    return 0;
}