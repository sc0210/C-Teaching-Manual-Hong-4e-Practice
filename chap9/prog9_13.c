/* prog9_13.c, 印出變數的位址 */
#include <stdio.h>
#include <stdlib.h>
void func(int);

int main(void)
{
    int a = 13;
    printf("在main()中，a=%d,a的位址=%p\n", a, &a);
    func(a);

    system("pause");
    return 0;
}

void func(int a)
{
    printf("\n在func()中，a=%d,a的位址=%p\n", a, &a);
}