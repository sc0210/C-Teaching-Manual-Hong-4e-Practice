#include <stdio.h>
#include <stdlib.h>
#define COL 3
#define ROW 2

void search(int[][COL], int *);

int main(void)
{
    int i, j;
    int A[ROW][COL] = {{1, 2, 3}, {5, 6, 8}};
    int B[ROW][COL] = {{3, 0, 2}, {3, 5, 7}};
    int C[ROW][COL] = {0};

    printf("1. Matrix A,B,A+B=\n");
    for (int j = 0; j < ROW; j++) {
        for (int i = 0; i < COL; i++) {
            printf("%3d ", *(*(A + j) + i));
        }
        printf("\t");
        for (int i = 0; i < COL; i++) {
            printf("%3d ", *(*(B + j) + i));
        }
        printf("\t");
        for (int i = 0; i < COL; i++) {
            *(*(C + j) + i) = *(*(A + j) + i) + *(*(B + j) + i);
            printf("%3d ", *(*(C + j) + i));
        }
        printf("\n");
    }


    int maxValA = 0, maxValB = 0, maxValC = 0;
    search(A, &maxValA);
    search(B, &maxValB);
    search(C, &maxValC);
    printf("2. After seaching...\n");
    printf("the maxVal of Matrix A= %d, Matrix B= %d, Matrix C= %d\n", maxValA,
           maxValB, maxValC);

    system("pause");
    return 0;
}

void search(int arr[ROW][COL], int *maxVal)
{
    int CurrMax = 0;
    for (int j = 0; j < ROW; j++) {
        for (int i = 0; i < COL; i++) {
            if (*(*(arr + j) + i) > CurrMax) {
                CurrMax = *(*(arr + j) + i);
            }
            // printf("%3d ", *(*(array + j) + i) + *(*(B + j) + i));
        }
    }
    *maxVal = CurrMax;
};
