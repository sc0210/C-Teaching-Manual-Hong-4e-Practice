/* prog11_14 列舉型態的使用範例 */
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char key;
    enum color {
        red = 114,   /* 將列舉常數 red 設定為 114 ，即字母 r 的 ASCII 碼*/
        green = 103, /* 將列舉常數 green 設定為 103 ，即字母 g 的 ASCII 碼*/
        blue = 98    /* 將列舉常數 blue 設定為 98 ，即字母 b 的 ASCII 碼*/
    } shirt;


    do {
        printf("請輸入r, g 或 b: ");
        scanf("%c", &key);
        fflush(stdin);
    } while ((key != red) && (key != green) && (key != blue));

    shirt = key;

    switch (shirt) {
    case red:
        printf("您選擇了紅色\n");
        break;
    case blue:
        printf("您選擇了藍色\n");
        break;
    case green:
        printf("您選擇了綠色\n");
        break;
    }


    system("pause");
    return 0;
}
