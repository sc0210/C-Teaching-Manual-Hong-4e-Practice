/* prog4_19, 修正 prog4_18 的錯誤*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    char ch;

    printf("請輸入一個整數(num): ");
    scanf("%d", &num);
    printf("請輸入一個字元(ch): ");
    scanf(" %c", &ch);
    printf("num=%d, ASCII of '%c'=%d\n", num, ch, ch);

    system("pause");
    return 0;
}