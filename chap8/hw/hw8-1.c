#include <stdio.h>
#include <stdlib.h>

void kitty(void);
void kitty_(int k);

int main(void)
{
    printf("1.\n");
    kitty();
    printf("\n2.\n");
    kitty_(5);

    system("pause");
    return 0;
}

void kitty(void)
{
    char msg[13] = "Hello Kitty\0";
    printf("%s\n", msg);
}

void kitty_(int k)
{
    for (int i = 0; i < k; i++) {
        kitty();
    }
}