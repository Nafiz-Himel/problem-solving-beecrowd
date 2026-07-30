#include <stdio.h>

int main()
{
    long long int n;
    while (scanf("%lld", &n) == 1)
    {
        if (n == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }
    return 0;
}