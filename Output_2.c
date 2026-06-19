#include <stdio.h>

int main()
{
    // printf("---------------------------------------\n");

    // printf("|        Roberto                      |\n");

    // printf("|                                     |\n");

    // printf("|        5786                         |\n");

    // printf("|                                     |\n");

    // printf("|        UNIFEI                       |\n");

    // printf("---------------------------------------\n");

    for (int i = 0; i < 39; i++)
        printf("-");
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("|");

        if (i == 0)
        {
            for (int j = 0; j < 8; j++)
                printf(" ");
            printf("Roberto");
            for (int j = 0; j < 22; j++)
                printf(" ");
        }
        else if (i == 2)
        {
            for (int j = 0; j < 8; j++)
                printf(" ");
            printf("5786");
            for (int j = 0; j < 25; j++)
                printf(" ");
        }
        else if (i == 4)
        {
            for (int j = 0; j < 8; j++)
                printf(" ");
            printf("UNIFEI");
            for (int j = 0; j < 23; j++)
                printf(" ");
        }
        else
        {
            for (int j = 0; j < 37; j++)
                printf(" ");
        }

        printf("|\n");
    }

    for (int i = 0; i < 39; i++)
        printf("-");
    printf("\n");

    return 0;
}