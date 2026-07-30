#include <stdio.h>
#include <string.h>

int main() {
    char s[1010];

    while (scanf("%s", s) != EOF) {
        int count[10] = {0};

        for (int i = 0; s[i] != '\0'; i++) {
            count[s[i] - '0']++;
        }

        int max_freq = -1;
        int ans = 0;

        for (int i = 0; i <= 9; i++) {
            if (count[i] >= max_freq) {
                max_freq = count[i];
                ans = i;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}