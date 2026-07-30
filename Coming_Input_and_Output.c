#include <stdio.h>

int main() {
    char ch[110];

    while (scanf(" %[^\n]", ch) != EOF) {
        for (int i = 0; ch[i] != '\0'; i++) {
            if (ch[i] == ',') {
                printf("\n");
            } else {
                printf("%c", ch[i]);
            }
        }
        printf("\n");
    }

    return 0;
}