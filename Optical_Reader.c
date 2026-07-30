#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) && n != 0)
    {
        while (n--)
        {
            int mark;
            int kalo_count = 0;
            int selected_option = -1;

            for (int i = 0; i < 5; i++)
            {
                scanf("%d", &mark);

                if (mark <= 127)
                {
                    kalo_count++;
                    selected_option = i;
                }
            }

            if (kalo_count == 1)
            {
                printf("%c\n", 'A' + selected_option);
            }
            else
            {
                printf("*\n");
            }
        }
    }

    return 0;
}