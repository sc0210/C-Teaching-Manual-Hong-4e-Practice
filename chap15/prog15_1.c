/* prog15.1, 將十進位整數以二進位來表示 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
void show_binary(int);
int main(void)
{
    printf("89 的二進為為: ");
    show_binary(89);

    printf("89 的八進為為: %o\n", 89);
    printf("89 的十六進為為: %x\n", 89);

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