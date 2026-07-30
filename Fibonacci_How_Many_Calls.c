#include <stdio.h>

int calls = 0; 

int fib(int n) {
    calls++; 
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a;
        scanf("%d", &a);

        calls = 0;
        int result = fib(a);

        printf("fib(%d) = %d calls = %d\n", a, calls - 1, result);
    }

    return 0;
}