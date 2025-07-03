/* prog12_5, 複製檔案內容 */
#include <fcntl.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include "sys/stat.h"

#define SIZE 512 /* 設定 read() 一次可以讀取取的最大位元組為512 */

int main(void)
{
    char buffer[SIZE];
    int f1, f2, bytes;

    f1 = open("C:\\Users\\sam88\\Documents\\development\\data.txt",
              O_RDONLY | O_TEXT);
    f2 = creat("C:\\Users\\sam88\\Documents\\development\\output2.txt",
               S_IWRITE);

    if ((f1 != -1) && (f2 != -1)) /* 測試檔案使否開啟成功 */
    {
        while (!eof(f1)) {
            bytes = read(f1, buffer, SIZE); /* 從f1讀取資料 */
            write(f2, buffer, bytes);       /* 將資料寫入檔案 f1 中 */
        }
        close(f1);
        close(f2);
        printf("檔案拷貝完成\n");
    } else {
        printf("檔案拷貝失敗\n");
    }

    system("pause");
    return 0;
}
