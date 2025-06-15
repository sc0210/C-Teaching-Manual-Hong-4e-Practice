#include <stdio.h>

int main(void)
{
    int in_num;

    printf("請隨意輸入一個數字\n");
    scanf_s("%d", &in_num);
    printf("你輸入的數字為:%d", in_num);
}