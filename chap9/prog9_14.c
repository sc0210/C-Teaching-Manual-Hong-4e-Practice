/* prog9_14.c, 印出陣列的位址 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void func(int arr[]);

int main(void)
{
    int i, A[SIZE] = {20, 8, 13};
    printf("在main()中，陣列A元素的位址為\n");
    for (int i = 0; i < SIZE; i++)
        printf("A[%d]=%2d,位址為%p\n", i, A[i], &A[i]);
    func(A);

    system("pause");
    return 0;
}

void func(int arr[])
{
    int i;
    printf("\n在func()中，陣列arr元素的位址為\n");
    for (int i = 0; i < SIZE; i++)
        printf("arr[%d]=%2d,位址為%p\n", i, arr[i], &arr[i]);
}