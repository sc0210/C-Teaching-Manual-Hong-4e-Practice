/* prog9_20.c, 印出字元及字串的長度 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch = 'a';
    char str1[] = "a";
    // 另一種宣告方法: char st1={'a', '\0'}，最後一個為字元換行結數字元'\0'
    char str2[] = "Sweet Home";

    printf("字元ch佔了 %d個位元組\n", (int) sizeof(ch));
    printf("字元str1佔了 %d個位元組\n", (int) sizeof(str1));
    printf("字元str2佔了 %d個位元組\n", (int) sizeof(str2));

    system("pause");
    return 0;
}
