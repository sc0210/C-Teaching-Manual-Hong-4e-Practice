#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]=%d\n", i + 1, arr[i]);
    }

    return 0;
}