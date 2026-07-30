#include <stdio.h>
#include <limits.h>

int main() {
    int t, person = 1, flag = INT_MAX;
    if (scanf("%d", &t) != 1) return 0;

    for (int i = 1; i <= t; i++) {
        int j;
        scanf("%d", &j);
        
        if (j < flag) {
            flag = j;
            person = i;
        }
    }
    
    printf("%d\n", person);
    return 0;
}