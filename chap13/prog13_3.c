/* prog13_3, 全域變數的範例(主程式) */
#include <stdio.h>
#include <stdlib.h>

int cnt;
void count(void);

int main(void)
{
    printf("請輸入cnt的初值: ");
    scanf("%d", &cnt);

    count();
    count();

    cnt++;
    printf("cnt=%d\n", cnt);

    system("pause");
    return 0;
}
