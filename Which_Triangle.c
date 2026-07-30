#include <stdio.h>

int main() {
    long long A, B, C;
    if (scanf("%lld %lld %lld", &A, &B, &C) != 3) return 0;

    if (A + B > C && A + C > B && B + C > A) {
        
        if (A == B && B == C) {
            printf("Valido-Equilatero\n");
        } else if (A == B || B == C || A == C) {
            printf("Valido-Isoceles\n");
        } else {
            printf("Valido-Escaleno\n");
        }

        if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B) {
            printf("Retangulo: S\n");
        } else {
            printf("Retangulo: N\n");
        }

    } else {
        printf("Invalido\n");
    }

    return 0;
}