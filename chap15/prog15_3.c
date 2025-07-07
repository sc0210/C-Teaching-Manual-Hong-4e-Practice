/* prog15.3, 左移運算子「<<」的使用範例 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
void show_binary(int);

int main(void)
{
    int a;
    a = (89 << 1);
    printf("89二進位的值為: ");
    show_binary(89);
    printf("左移一個位元後: ");
    show_binary(a);
    printf("左移一個位元後的十進位值為: %d\n", a);

    system("pause");
    return 0;
}

void show_binary(int num)
{
    int i, b[SIZE] = {0};
    for (int i = 1; i <= SIZE; i++) {
        b[SIZE - i] = num % 2;
        num = num / 2;
    }
    for (int i = 0; i < SIZE; i++) {
        printf("%d", b[i]);
    }
    printf("\n");
}