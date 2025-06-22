/* prog8_18.c, 區域靜態變數使用的範例 */
#include <stdio.h>
#include <stdlib.h>

void func(void);

int main(void)
{
    func();
    func();
    func();
    system("pause");
    return 0;
}

void func(void)
{
    static int a = 100;
    printf("In func(), a=%d\n", a);
    a += 200;
}
