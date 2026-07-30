#include <stdio.h>
#include <string.h>

int main() {
    int t;

    while (scanf("%d", &t) == 1 && t != 0) {
        int total_vitamin = 0;

        for (int i = 0; i < t; i++) {
            int amount;
            char food[100];

            scanf("%d ", &amount);
            gets(food); 

            if (strcmp(food, "suco de laranja") == 0) {
                total_vitamin += amount * 120;
            } else if (strcmp(food, "morango fresco") == 0) {
                total_vitamin += amount * 85;
            } else if (strcmp(food, "mamao") == 0) {
                total_vitamin += amount * 85;
            } else if (strcmp(food, "goiaba vermelha") == 0) {
                total_vitamin += amount * 70;
            } else if (strcmp(food, "manga") == 0) {
                total_vitamin += amount * 56;
            } else if (strcmp(food, "laranja") == 0) {
                total_vitamin += amount * 50;
            } else if (strcmp(food, "brocolis") == 0) {
                total_vitamin += amount * 34;
            }
        }

        if (total_vitamin > 130) {
            printf("Menos %d mg\n", total_vitamin - 130);
        } else if (total_vitamin < 110) {
            printf("Mais %d mg\n", 110 - total_vitamin);
        } else {
            printf("%d mg\n", total_vitamin);
        }
    }

    return 0;
}