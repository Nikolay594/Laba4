#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    if ((A % 2 == 0 && B % 2 != 0) ||
        (A % 2 != 0 && B % 2 == 0))
        printf("YES");
    else
        printf("NO");

    return 0;
}