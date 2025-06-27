/* prog11_13 列舉型態的使用 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    enum color {
        red,   /* red 的預設值為 0 */
        green, /* green 的預設值為 1 */
        blue   /* blue 的預設值為 2 */
    };

    enum color shirt;
    /* 宣告列舉型態的變數 shirt */

    printf("sizeof(shirt)=%d\n", sizeof(shirt));
    printf("red=%d\n", red);
    printf("green=%d\n", green);
    printf("blue=%d\n", blue);

    shirt = green;
    if (shirt == green) {
        printf("您選擇了綠色的衣服\n");
    } else {
        printf("您選擇了非綠色的衣服\n");
    }

    system("pause");
    return 0;
}
