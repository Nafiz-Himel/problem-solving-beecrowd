#include <stdio.h>

int main() {
    char ch1[105], ch2[105], ch3[105];

    while (gets(ch1) != NULL && gets(ch2) != NULL && gets(ch3) != NULL) {
        
        printf("%s%s%s\n", ch1, ch2, ch3);

        printf("%s%s%s\n", ch2, ch3, ch1);

        printf("%s%s%s\n", ch3, ch1, ch2);

        printf("%.10s%.10s%.10s\n", ch1, ch2, ch3);
    }

    return 0;
}