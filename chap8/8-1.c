#include <stdio.h>

void kitty(void);
void kitty_(int k);

int main(void)
{
    kitty();
    printf("\n");
    kitty_(5);
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