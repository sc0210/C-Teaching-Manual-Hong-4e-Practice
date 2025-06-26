/* prog9_19.c, 尋找二維陣列的最大值與最小值 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define COL 3
void search(int a[][COL], int b[]);

int main(void)
{
    int a[ROW][COL] = {{26, 5, 7}, {10, 3, 47}, {6, 76, 8}, {40, 4, 32}};

    int b[2];
    printf("二維陣列內的內容:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%02d ", a[i][j]);
        }
        printf("\n");
    }

    search(a, b);
    printf("陣列的最大值=%02d\n", b[0]);
    printf("陣列的最小值=%02d\n", b[1]);

    system("pause");
    return 0;
}

void search(int arr[][COL], int b[])
{
    int max, min;
    max = min = arr[0][0];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            max = arr[i][j] > max ? arr[i][j] : max;
            min = arr[i][j] < min ? arr[i][j] : min;
        }
    }
    b[0] = max, b[1] = min;
};
