/* prog9_18.c, bubble sort revision */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
void bubble_sort(int[]);
void swap(int *a, int *b);
void show(int[]);

int main(void)
{
    int A[SIZE];

    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % 100;
    }

    printf("Before sorting: ");
    show(A);

    bubble_sort(A);

    printf("After sorting: ");
    show(A);

    system("pause");
    return 0;
}

void bubble_sort(int arr[])
{
    int flag = 0;
    for (int i = 1; (i < SIZE) && (!flag); i++) {
        flag = 1;
        for (int j = 0; j < SIZE - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // printf("\n before: %d,%d ", arr[j], arr[j + 1]);
                swap(&arr[j], &arr[j + 1]);
                flag = 0;
                // printf("\n after: %d,%d ", arr[j], arr[j + 1]);
            }
        }
    }
}

// void swap(int *a, int *b)
// {
//     printf("\nbefore:\naddr=%p, val=%d\t", a, *a);
//     printf("addr=%p, val=%d\n", b, *b);
//     int *tmp = a;
//     a = b;
//     b = tmp;
//     printf("\nafter:\naddr=%p, val=%d\t", a, *a);
//     printf("addr=%p, val=%d\n", b, *b);
// }

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void show(int arr[])
{
    for (int i = 0; i < SIZE; i++) {
        printf("%3d ", arr[i]);
    }
    printf("\n");
}