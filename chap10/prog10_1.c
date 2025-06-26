/* prog10_1 印出變數於記憶體內的位址 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b = 5; /* 宣告變數a與b，但變數a沒有設定出值 */
    double c = 3.14;
    printf("a=%4d, sizeof(a)=%d, address of a=%p\n", a, sizeof(a), &a);
    printf("b=%4d, sizeof(a)=%d, address of a=%p\n", b, sizeof(b), &b);
    printf("c=%4.2f, sizeof(a)=%d, address of a=%p\n", c, sizeof(c), &c);

    system("pause");
    return 0;
}