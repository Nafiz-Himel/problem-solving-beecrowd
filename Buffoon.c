#include <stdio.h>

int main() {
    int n, carlos_votes, other_votes;
    
    int yes = 1; 
    
    scanf("%d %d", &n, &carlos_votes);

    for (int i = 1; i < n; i++) {
        scanf("%d", &other_votes);
        
        if (other_votes > carlos_votes) {
            yes = 0;
        }
    }

    if (yes == 1) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}