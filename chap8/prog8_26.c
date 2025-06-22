/* prog8_26.c, 使用巨集常見的錯誤 */
#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) X *X
void func(void);

int main(void)
{
    int n;
    printf("Input an integer\n");
    scanf("%d", &n);
    printf("%d*%d=%d\n", n + 1, n + 1, SQUARE(n + 1));
    system("pause");
    return 0;
}
