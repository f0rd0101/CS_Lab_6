#include <stdio.h>

#define M 4

int main() {
    int X[M][M] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15,16}
    };

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            if (i > j) {
                X[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%4d", X[i][j]);
        }
        printf("\n");
    }

    return 0;
}
