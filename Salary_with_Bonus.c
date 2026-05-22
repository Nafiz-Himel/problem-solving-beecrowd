#include<stdio.h>

int main()
{
    char s[100];
    double a,b;

    scanf("%[^\n] %lf %lf", s,&a,&b);

    printf("TOTAL = R$ %.2lf\n", a+(b*0.15));
    return 0;
}