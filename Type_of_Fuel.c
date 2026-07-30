#include <stdio.h>

int main()
{
    int al = 0, gas = 0, die = 0;

    while (1)
    {
        int n;
        scanf("%d", &n);

        if (n == 1)
            al += 1;
        else if (n == 2)
            gas += 1;
        else if (n == 3)
            die += 1;
        else if (n == 4)
            break;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al, gas, die);
    return 0;
}