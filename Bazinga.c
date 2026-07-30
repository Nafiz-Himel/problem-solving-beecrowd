#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char s[20], r[20];

    if (scanf("%d", &t) == 1) {
        for (int i = 1; i <= t; i++) {
            scanf("%s %s", s, r);

            if (strcmp(s, r) == 0) {
                printf("Caso #%d: De novo!\n", i);
            }
            else if (
                (strcmp(s, "tesoura") == 0 && (strcmp(r, "papel") == 0 || strcmp(r, "lagarto") == 0)) ||
                (strcmp(s, "papel") == 0 && (strcmp(r, "pedra") == 0 || strcmp(r, "Spock") == 0)) ||
                (strcmp(s, "pedra") == 0 && (strcmp(r, "lagarto") == 0 || strcmp(r, "tesoura") == 0)) ||
                (strcmp(s, "lagarto") == 0 && (strcmp(r, "Spock") == 0 || strcmp(r, "papel") == 0)) ||
                (strcmp(s, "Spock") == 0 && (strcmp(r, "tesoura") == 0 || strcmp(r, "pedra") == 0))
            ) {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }
    }

    return 0;
}