#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1050];

    while (gets(str) != NULL) {
        if (str[0] == '*') {
            break;
        }

        char first = tolower(str[0]);
        int is_tautogram = 1;
        int len = strlen(str);

        for (int i = 0; i < len; i++) {
            if (str[i] == ' ') {
                if (tolower(str[i + 1]) != first) {
                    is_tautogram = 0;
                    break;
                }
            }
        }

        if (is_tautogram) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}