#include <stdio.h>
#include <stdlib.h>

void xor_r(int* x, int* y) {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

int main() {
    int* s = NULL;
    int input, count = 0, pos = 0;

    scanf("%d", &input);
    while (input != 0) {
        s = realloc(s, (++count) * sizeof(int));
        s[pos++] = input;
        scanf("%d", &input);
    }

    for (int left = 0; left < count / 2; left++) {
        int right = count - left - 1;
        xor_r(&s[left], &s[right]);
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", s[i]);
    }

    free(s);

    return 0;
}
