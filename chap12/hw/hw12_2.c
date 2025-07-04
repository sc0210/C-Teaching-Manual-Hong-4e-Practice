/* prog12_1, 顯示檔案內容，並計算字元數目 */
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 5

int main(void)
{
    /* 12.2 1*/
    FILE *fptr; /* 宣告指向檔案的指標fptr */
    char str[LENGTH];

    fptr = fopen(
        "C:\\Users\\sam88\\Documents\\development\\C-"
        "langugage\\chap12\\data\\C-"
        "langugage\\chap12\\data\\data.txt",
        "r");
    if (fptr != NULL) {
        printf("Each time only read 5 char\n");
        while (fgets(str, LENGTH, fptr) != NULL) {
            printf("%s\n", str);
        }
        fclose(fptr);
    } else {
        printf("檔案開啟失敗\n");
        perror("檔案開啟失敗");  // 會顯示系統錯誤訊息
    }

    /* 12.2 2*/
    FILE *fptr1, *fptr2; /* 宣告指向檔案的指標fptr1, fptr2 */
    char ch;             /* 宣告字元變數ch，用來接收讀取的字元 */
    int count = 0;

    fptr1 = fopen(
        "C:\\Users\\sam88\\Documents\\development\\C-"
        "langugage\\chap12\\data\\data.txt",
        "r");
    fptr2 = fopen(
        "C:\\Users\\sam88\\Documents\\development\\C-"
        "langugage\\chap12\\data\\output.txt",
        "w");

    if ((fptr1 != NULL) && (fptr2 != NULL)) {
        while ((ch = getc(fptr1)) != EOF) {
            putc(ch, fptr2);
            count++;

            // 額外列印偵錯訊息：
            if (ch == '\n')
                printf("[\\n]");
            else if (ch == '\r')
                printf("[\\r]");
            else
                printf("%c", ch);
        }
        fclose(fptr1);
        fclose(fptr2);
        printf("檔案拷貝完成!! 總共有%d字元\n", count);
    } else {
        printf("檔案開啟失敗\n");
        perror("檔案開啟失敗");  // 會顯示系統錯誤訊息
    }


    system("pause");
    return 0;
}
