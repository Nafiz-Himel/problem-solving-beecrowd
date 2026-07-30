#include <stdio.h>
#include <string.h>

int main() {
    int C, force;
    char name[50];

    if (scanf("%d", &C) == 1) {
        while (C--) {
            scanf("%s %d", name, &force);

            if (strcmp(name, "Thor") == 0) {
                printf("Y\n");
            } else {
                printf("N\n");
            }
        }
    }

    return 0;
}