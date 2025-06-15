/* prog4_22, 使用 getchar() 函數及 putchar() 函數*/
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    printf("請輸入一個字元: ");
    ch = getche(); /* 利用 getche() 載入字元 */
    printf("您輸入的字元是: %c\n", ch);

    printf("請輸入一個字元: ");
    ch = getch(); /* 利用 getch() 載入字元 */
    printf("您輸入的字元是: %c\n", ch);

    system("pause");
    return 0;
}