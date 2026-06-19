#include <stdio.h>

int main()
{
    for (int i = 0; i < 39; i++)
    {
        printf("-");
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("|");

        if (i == 0)
        {
            printf("x = 35");
            for (int j = 0; j < 31; j++)
                printf(" ");
            printf("|\n");
        }
        else if (i == 2)
        {
            for (int j = 0; j < 15; j++)
                printf(" ");
            printf("x = 35");
            for (int k = 0; k < 16; k++)
                printf(" ");
            printf("|\n");
        }
        else if (i == 4)
        {

            for (int j = 0; j < 31; j++)
                printf(" ");
            printf("x = 35|\n");
        }
        else
        {
            for (int i = 0; i < 37; i++)
                printf(" ");
            printf("|\n");
        }
    }
    for (int i = 0; i < 39; i++)
    {
        printf("-");
    }
    printf("\n");

    return 0;
}