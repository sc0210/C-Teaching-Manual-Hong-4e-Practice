#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int ans1 = 12 / 3 + 4 * 10 + 12 * 2;                  // 68
    int ans2 = 12 + 5 * 12 - 5 * 6 / 4;                   // 65
    int ans3 = 5 - 2 * 7 + 56 - 12 * 12 - 6 * 3 / 4 + 1;  //-100

    printf("12 / 3 + 4 * 10 + 12 * 2 = %d\n", ans1);
    printf("12 + 5 * 12 - 5 * 6 / 4 = %d\n", ans2);
    printf("5 - 2 * 7 + 56 - 12 * 12 - 6 * 3 / 4 + 1 = %d\n", ans3);

    system("pause");
    return 0;
}