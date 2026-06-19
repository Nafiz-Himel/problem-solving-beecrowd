#include <stdio.h>

int main() {
    int v0, v1, v2, v3, v4, v5, v6, v7;
    int v8, v9, v10, v11, v12, v13, v14, v15;

    v0=0;  v1=1;  v2=2;  v3=3;
    v4=4;  v5=5;  v6=6;  v7=7;
    v8=8;  v9=9;  v10=10; v11=11;
    v12=12; v13=13; v14=14; v15=15;

    printf("---------------------------------------\n");
    printf("| decimal   |   octal   | Hexadecimal |\n");
    printf("---------------------------------------\n");

    printf("|%10d |%10o |%12X |\n", v0,  v0,  v0);
    printf("|%10d |%10o |%12X |\n", v1,  v1,  v1);
    printf("|%10d |%10o |%12X |\n", v2,  v2,  v2);
    printf("|%10d |%10o |%12X |\n", v3,  v3,  v3);
    printf("|%10d |%10o |%12X |\n", v4,  v4,  v4);
    printf("|%10d |%10o |%12X |\n", v5,  v5,  v5);
    printf("|%10d |%10o |%12X |\n", v6,  v6,  v6);
    printf("|%10d |%10o |%12X |\n", v7,  v7,  v7);
    printf("|%10d |%10o |%12X |\n", v8,  v8,  v8);
    printf("|%10d |%10o |%12X |\n", v9,  v9,  v9);
    printf("|%10d |%10o |%12X |\n", v10, v10, v10);
    printf("|%10d |%10o |%12X |\n", v11, v11, v11);
    printf("|%10d |%10o |%12X |\n", v12, v12, v12);
    printf("|%10d |%10o |%12X |\n", v13, v13, v13);
    printf("|%10d |%10o |%12X |\n", v14, v14, v14);
    printf("|%10d |%10o |%12X |\n", v15, v15, v15);

    printf("---------------------------------------\n");

    return 0;
}