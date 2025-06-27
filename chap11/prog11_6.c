/* prog11_6 結構陣列的大小 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct data {
        char name[10];  // 10 bytes
        int math;       // 4 bytes
        // A data structure need to be the largest units multiples
        // 14(x), 16(V)
    } student[10];

    printf("sizeof(student[3])=%d\n", sizeof(student[3]));  // 16
    printf("sizeof(student)=%d\n", sizeof(student));        // 160

    system("pause");
    return 0;
}