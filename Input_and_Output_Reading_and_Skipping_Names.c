#include <stdio.h>

int main() {
    char c;
    
    for (int i = 1; i <= 10; i++) {
        
        while (scanf("%c", &c) != EOF && c != '\n') {
            
            if (i == 3 || i == 7 || i == 9) {
                printf("%c", c);
            }
        }
        
        if (i == 3 || i == 7 || i == 9) {
            printf("\n");
        }
    }
    
    return 0;
}