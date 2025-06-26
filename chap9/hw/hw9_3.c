#include <stdio.h>
#include <stdlib.h>
#define COLOR 3
#define HIGH 4
#define WIDTH 5
void show(int A[][HIGH][WIDTH]);
void op1(int A[][HIGH][WIDTH]);
void op2(int A[][HIGH][WIDTH]);

int main()
{
    int R[HIGH][WIDTH] = {{247, 67, 32, 187, 240},
                          {122, 41, 21, 16, 154},
                          {52, 41, 21, 16, 154},
                          {27, 22, 35, 154, 75}};
    int G[HIGH][WIDTH] = {{14, 145, 132, 25, 40},
                          {212, 221, 121, 54, 14},
                          {132, 235, 178, 19, 14},
                          {122, 122, 133, 54, 47}};
    int B[HIGH][WIDTH] = {{17, 44, 32, 127, 240},
                          {22, 231, 21, 156, 124},
                          {32, 35, 78, 21, 194},
                          {127, 22, 33, 54, 45}};

    int A[COLOR][HIGH][WIDTH];

    for (int i = 0; i < HIGH; ++i)
        for (int j = 0; j < WIDTH; ++j) {
            A[0][i][j] = R[i][j];
            A[1][i][j] = G[i][j];
            A[2][i][j] = B[i][j];
        }

    printf("\nOriginal Matrix:\n");
    show(A);

    op1(A);
    printf("\nAfter operation 1: R+30:\n");
    show(A);

    op2(A);
    printf("\nAfter operation 2: G-30:\n");
    show(A);



    return 0;
}

void show(int A[][HIGH][WIDTH])
{
    for (int j = 0; j < HIGH; j++) {
        for (int k = 0; k < WIDTH; k++) {
            printf("%3d ", A[0][j][k]);
        }
        printf("\t");
        for (int k = 0; k < WIDTH; k++) {
            printf("%3d ", A[1][j][k]);
        }
        printf("\t");
        for (int k = 0; k < WIDTH; k++) {
            printf("%3d ", A[2][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}

void op1(int A[][HIGH][WIDTH])
{
    for (int i = 0; i < 1; i++) {
        // R+30, if excess 255 than set to 255
        // i = 0 , R
        for (int j = 0; j < HIGH; j++) {
            for (int k = 0; k < WIDTH; k++) {
                A[i][j][k] += 30;
                A[i][j][k] = A[i][j][k] > 255 ? 255 : A[i][j][k];
            }
        }
    }
}

void op2(int A[][HIGH][WIDTH])
{
    for (int i = 1; i < 2; i++) {
        // G-30, if under 0 than set to 0
        // i = 0 , R
        for (int j = 0; j < HIGH; j++) {
            for (int k = 0; k < WIDTH; k++) {
                A[i][j][k] -= 30;
                A[i][j][k] = A[i][j][k] < 0 ? 0 : A[i][j][k];
            }
        }
    }
}