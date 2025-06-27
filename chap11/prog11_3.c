/* prog11_3 結構變數的初執設定 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct data {
        char name[10];
        int math;
    };

    struct data student = {"Marry Wang", 74}; /* 設定結構變數初值 */

    printf("姓名:%s\n", student.name);
    printf("成績:%d\n", student.math);

    system("pause");
    return 0;
}