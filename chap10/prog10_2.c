/* prog10_2 指標變數的宣告 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr, num = 20;

    ptr = &num;
    printf("num=%d, &num=%p\n", num, &num);
    printf("*ptr=%d, ptr=%p, &ptr=%d\n", *ptr, ptr, &ptr);

    system("pause");
    return 0;
}