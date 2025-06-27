/* prog11_15 利用typedef 來定義資料型態 */
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    struct data {
        int num;      // 4
        char ch;      // 1
        double dist;  // 8
    } aaa;

    printf("sizeof(aaa)=%d\n", sizeof(aaa));  // 16

    system("pause");
    return 0;
}
