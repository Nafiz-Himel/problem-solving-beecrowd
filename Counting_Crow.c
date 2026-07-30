#include <stdio.h>
#include <string.h>

int main()
{
    char input[20];
    int sum = 0;
    int screams = 0;

    while (screams < 3)
    {
        gets(input);

        if (strcmp(input, "caw caw") == 0)
        {
            printf("%d\n", sum);
            sum = 0;
            screams++;
        }
        else
        {
            int value = 0;
            if (input[0] == '*')
                value += 4;
            if (input[1] == '*')
                value += 2;
            if (input[2] == '*')
                value += 1;

            sum += value;
        }
    }

    return 0;
}