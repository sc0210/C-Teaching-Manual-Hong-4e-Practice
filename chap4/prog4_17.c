/* prog4_17, 讀取輸入緩衝區內殘留的資料 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int in1;
    char in2[10];

    printf("請輸入一個數字:\n");
    scanf("%d", &in1);
    printf("輸入的數字為:%d\n\n", in1);

    printf("請輸入一個字串:\n");
    scanf("%s", in2);
    printf("輸入的字串為:%s\n", in2);

    system("pause");
    return 0;
}