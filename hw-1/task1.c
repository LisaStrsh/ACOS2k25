#include <stdio.h>

void exch(int* f, int* s) {
    *f ^= *s;
    *s ^= *f;
    *f ^= *s;
}

int main() {
    int num1, num2;
    scnf("%d %d", &num1, &num2);

    exch(&num1, &num2);

    printf("%d %d", num1, num2);

    return 0;
}
