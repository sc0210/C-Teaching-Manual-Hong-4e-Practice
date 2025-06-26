/* prog10_9 將a與b值互換(錯誤示範) */
#include <stdio.h>
#include <stdlib.h>
void swap(int, int);

int main(void)
{
    int a = 5, b = 10;

    printf("交換前...");
    printf("a=%d,b=%d\n", a, b);

    swap(a, b);

    printf("交換後...");
    printf("a=%d,b=%d\n", a, b);

    system("pause");
    return 0;
}

void swap(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}