#include <stdio.h>
#include <stdlib.h>

void xor_s(int* x, int* y) {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

int main() {
    int s;
    scanf("%d", &s);

    int* d = calloc(s, sizeof(int));

    for (int idx = 0; idx < s; idx++) {
        scanf("%d", &d[idx]);
    }

    for (int left = 0; left < s / 2; left++) {
        int right = s - left - 1;
        xor_s(&d[left], &d[right]);
    }

    for (int i = 0; i < s; i++) {
        printf("%d ", d[i]);
    }

    free(d);

    return 0;
}
