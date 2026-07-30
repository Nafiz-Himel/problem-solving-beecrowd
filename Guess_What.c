#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    while(n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int min_dist = 101; 
        int winner_pos = 1;

        for(int i = 1; i <= a; i++)
        {
            int c;
            scanf("%d", &c);

            int current_dist = abs(b - c);

            if(current_dist < min_dist)
            {
                min_dist = current_dist; 
                winner_pos = i;          
            }
        }

        printf("%d\n", winner_pos);
    }
    return 0;
}