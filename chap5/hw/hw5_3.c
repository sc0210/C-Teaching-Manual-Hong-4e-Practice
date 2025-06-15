#include <stdio.h>
#include <stdlib.h>

void reset(int *a, int *b, int *num)
{
    *a = 5, *b = 3, *num = 0;
}

int tempConvet(int c)
{
    return 9 / 5 * c + 32;
}

int main(void)
{
    int a, b, num;

    reset(&a, &b, &num);
    num = (a++) + b;
    printf("a=%2d, b=%2d, num=%2d\n", a, b, num);  // 6, 3, 8

    reset(&a, &b, &num);
    num = (++a) + b;
    printf("a=%2d, b=%2d, num=%2d\n", a, b, num);  // 6, 3, 9

    reset(&a, &b, &num);
    num = (a++) + (b++);
    printf("a=%2d, b=%2d, num=%2d\n", a, b, num);  // 6, 4, 8

    reset(&a, &b, &num);
    a += a + (b++);
    printf("a=%2d, b=%2d, num=%2d\n", a, b, num);  // 13, 4, 0

    printf("攝氏溫度=%d, 華氏溫度=%d\n", 32, tempConvet(32));
    system("pause");
    return 0;
}