/* prog9_1.c, 一維陣列的基本操作 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, score[4];

    // 初始化方法一(離散)
    score[0] = 78;
    score[1] = 55;
    // score[2] = 92; // 若未宣告，會列印出殘值
    score[3] = 80;

    // 初始化方法二 (連續)
    int score2[5] = {78, 55, 92, 80};

    for (int i = 0; i <= 3; i++) {
        printf("score[%d]=%d\n", i, score[i]);
    }

    system("pause");
    return 0;
}