#include <stdio.h>

int main()
{
    for (int i = 0; i < 39; i++)
        printf("-");
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|");
        for (int i = 0; i < 37; i++)
            printf(" ");
        printf("|\n");
    }
    for (int i = 0; i < 39; i++)
        printf("-");
    printf("\n");
    return 0;
}