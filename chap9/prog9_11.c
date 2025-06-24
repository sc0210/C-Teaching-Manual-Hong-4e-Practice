/* prog9_11.c, 三維陣列與初值的設定 */
#include <stdio.h>
#include <stdlib.h>
#define max(a, b) (((a) > (b)) ? (a) : (b))

int main(void)
{
    int A[2][4][3] = {{{21, 32, 65}, {78, 94, 76}, {79, 44, 65}, {89, 54, 73}},
                      {{32, 56, 89}, {43, 23, 32}, {32, 56, 78}, {94, 78, 45}}};

    int i, j, k, CurrMax = A[0][0][0];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 3; k++)
                CurrMax = max(CurrMax, A[i][j][k]);
    printf("max=%d\n", CurrMax);

    system("pause");
    return 0;
}