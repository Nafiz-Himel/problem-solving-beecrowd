#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char ch[10005];

    if (scanf("%d", &t) == 1) {
        while (t--) {
            scanf("%s", ch);
            printf("%.2f\n", strlen(ch) * 0.01);
        }
    }

    return 0;
}