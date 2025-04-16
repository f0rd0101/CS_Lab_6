#include <stdio.h>

#define M 4
#define N 5

int main() {
    int X[M][N] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    for (int i = 0; i < M && i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++) {
            sum += X[j][i];
        }
        X[i][i] = sum;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", X[i][j]);
        }
        printf("\n");
    }

    return 0;
}
