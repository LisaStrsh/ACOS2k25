#include <stdio.h>
#include <stdlib.h>

void flip(int* val1, int* val2) {
    *val1 ^= *val2;
    *val2 ^= *val1;
    *val1 ^= *val2;
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int** matrix = calloc(rows, sizeof(int*));
    for (int r = 0; r < rows; r++) {
        matrix[r] = calloc(cols, sizeof(int));
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            scanf("%d", &matrix[r][c]);
        }
    }

    int** rotated = calloc(cols, sizeof(int*));
    for (int c = 0; c < cols; c++) {
        rotated[c] = calloc(rows, sizeof(int));
    }

    for (int c = 0; c < cols; c++) {
        for (int r = 0; r < rows; r++) {
            rotated[c][r] = matrix[r][c];
        }
    }

    for (int c = 0; c < cols; c++) {
        for (int r = 0; r < rows; r++) {
            printf("%d ", rotated[c][r]);
        }
        printf("\n");
    }

    for (int r = 0; r < rows; r++) {
        free(matrix[r]);
    }
    free(matrix);

    for (int c = 0; c < cols; c++) {
        free(rotated[c]);
    }
    free(rotated);

    return 0;
}
