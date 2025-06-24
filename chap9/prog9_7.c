/* prog9_7.c, 陣列的便藉檢查 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void)
{
    int score[MAX];
    int i = 0, num;
    float sum = 0.0;

    printf("請輸入成績，要結束請輸入0:\n");
    do {
        if (i >= MAX) {
            printf("陣列空間已使用完畢!!\n");
            i++; /* 因為第23行 num=i-1而先行加一調整 */
            break;
        }
        printf("請輸入成績: ");
        scanf("%d", &score[i]);

    } while (score[i++] > 0); /* 輸入成績，輸入為0時結束 */

    num = i - 1;

    for (int i = 0; i < num; i++)
        sum += score[i];
    printf("平均成績為 %.2f\n", (float) sum / num);

    system("pause");
    return 0;
}