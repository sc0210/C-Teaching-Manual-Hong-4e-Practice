/* prog12_9, 讀取二進位檔案的內容 */
#include <fcntl.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include "sys/stat.h"

int main(void)
{
    int f1;
    struct data {       // 10 + 4 -> 16bytes
        char name[10];  // 10 bytes
        int math;       // 4 bytes
    } student;

    f1 = open("C:\\Users\\sam88\\Documents\\development\\score.bin",
              O_RDONLY | O_BINARY);
    if (f1 != -1) {
        read(f1, &student, sizeof(student));

        printf("student.name=%s\n", student.name);
        printf("student.math=%d\n", student.math);

        close(f1);
    } else {
        printf("資料開啟失敗!!\n");
    }

    system("pause");
    return 0;
}
