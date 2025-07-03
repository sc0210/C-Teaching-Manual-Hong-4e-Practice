/* prog12_8, 輸入資料到二進位檔案 */
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
    } student = {"Jenny", 96};

    f1 = open("C:\\Users\\sam88\\Documents\\development\\score.bin",
              O_CREAT | O_WRONLY | O_BINARY, S_IREAD);
    if (f1 != -1) {
        write(f1, &student, sizeof(student));
        close(f1);
        printf("資料已寫入檔案!!\n");
    } else {
        printf("資料寫入失敗!!\n");
    }

    system("pause");
    return 0;
}
