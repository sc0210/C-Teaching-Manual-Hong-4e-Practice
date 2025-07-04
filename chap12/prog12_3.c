/* prog12_3, 由鍵盤輸入字串，並附加到檔案output.txt中 */
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 30
#define ENTER 13 /* ENTER 鍵的 ASCII碼為 13 */

int main(void)
{
    FILE *fptr;        /* 宣告指向檔案的指標fptr */
    char str[MAX], ch; /* 宣告字元變數ch，用來接收讀取的字元 */
    int i = 0;

    fptr = fopen(
        "C:\\Users\\sam88\\Documents\\development\\C-"
        "langugage\\chap12\\data\\output.txt",
        "a");

    printf("請輸入字串，按下ENTER鍵結束輸入:\n");

    while ((ch = getche()) != ENTER && i < MAX) {
        str[i++] = ch;
    }
    putc('\n', fptr);                   /* 寫入換行字元 */
    fwrite(str, sizeof(char), i, fptr); /* 寫入字元陣列str */
    fclose(fptr);                       /* 關閉檔案 */
    printf("\n附加檔案完成!!\n");

    system("pause");
    return 0;
}
