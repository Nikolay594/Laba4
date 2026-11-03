#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    printf("%s", ((A % 2) != (B % 2)) ? "YES" : "NO");
    return 0;
}
