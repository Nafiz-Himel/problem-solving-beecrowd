#include <stdio.h>

int main() {
    int N;
    char text[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    if (scanf("%d", &N) == 1) {
        for (int i = 0; i < N; i++) {
            printf("%c", text[i]);
        }
        printf("\n");
    }

    return 0;
}