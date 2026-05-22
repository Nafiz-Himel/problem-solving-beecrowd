#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maiorAB = (a + b + abs(a - b)) / 2;

    printf("%d eh o maior\n", (maiorAB + c + abs(maiorAB - c)) / 2);
    return 0;
}