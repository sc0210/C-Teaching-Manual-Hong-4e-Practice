/* prog9_10.c, 矩陣的相加 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define COL 3
#define ROW 2

int main(void)
{
    int i, j;
    int A[ROW][COL] = {{1, 2, 3}, {5, 6, 8}};
    int B[ROW][COL] = {{3, 0, 2}, {3, 5, 7}};

    printf("Matrix A+B=\n");
    for (int j = 0; j < ROW; j++) {
        for (int i = 0; i < COL; i++) {
            printf("%3d ", A[j][i] += B[j][i]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}