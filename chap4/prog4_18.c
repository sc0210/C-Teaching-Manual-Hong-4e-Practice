/* prog4_18, 讀取到錯誤的字元*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    char ch;

    printf("請輸入一個整數: ");
    scanf("%d", &num);
    printf("請輸入一個字元: ");
    scanf("%c", &ch);
    printf("num=%d, ASCII of ch=%d\n", num, ch);

    system("pause");
    return 0;
}