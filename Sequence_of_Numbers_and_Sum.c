#include <stdio.h>

int main() {
    int m, n;
    
    while (scanf("%d %d", &m, &n) == 2) 
    {
        
        if (m <= 0 || n <= 0) {
            break;
        }
        
        int small, big;
        
        if (m < n) {
            small = m;
            big = n;
        } else {
            small = n;
            big = m;
        }
        
        int sum = 0;
        for (int i = small; i <= big; i++) {
            printf("%d ", i);
            sum += i;
        }
        
        printf("Sum=%d\n", sum);
    }
    
    return 0;
}