/* prog11_15 利用typedef 來定義資料型態 */
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    enum boolean { FALSE, TURE } test;

    test = 5 < 20;
    if (test) {
        printf("5<20成立\n");
    } else {
        printf("5>=20成立\n");
    }

    printf("sizeof(TRUE)=%d\n", sizeof(TURE));

    system("pause");
    return 0;
}
