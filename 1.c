#include <stdio.h>
#include <stdlib.h>

void swap_value(int input1, int input2);
void swap_address(int *input1, int *input2);
void reset(int a, int b);

int main(void)
{
    char str[20] = "Hello World\0";
    printf("%s\n", str);
    // system("pause");
    int a = 100;
    int b = 10;
    reset(a, b);

    printf("a= %d,b=%d\n", a, b);
    swap_address(&a, &b);
    printf("a= %d,b=%d\n", a, b);
    reset(a, b);
    swap_value(a, b);
    printf("a= %d,b=%d\n", a, b);

    return 0;
}

void reset(int a, int b)
{
    a = 100;
    b = 10;
}

void swap_value(int input1, int input2)
{
    int temp = input1;
    input1 = input2;
    input2 = temp;
}

void swap_address(int *input1, int *input2)
{
    int temp = *input1;
    *input1 = *input2;
    *input2 = temp;
}