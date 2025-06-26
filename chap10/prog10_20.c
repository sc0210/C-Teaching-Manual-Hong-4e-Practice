/* prog10_20 指標陣列 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char *ptr[3] = {"Tom", "Lily", "James Lee"};  // 存放三個指標陣列
    for (int i = 0; i < 3; i++) {
        puts(ptr[i]);
    }

    system("pause");
    return 0;
}
