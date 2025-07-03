/* prog12_1, 顯示檔案內容，並計算字元數目 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;    /* 宣告指向檔案的指標fptr */
    char ch;       /* 宣告字元變數ch，用來接收讀取的字元 */
    int count = 0; /* 宣告整數count，用來計算檔案的字元數 */

    fptr = fopen("C:\\Users\\sam88\\Documents\\development\\data.txt", "r");
    if (fptr != NULL) {
        while ((ch = getc(fptr)) != EOF) {
            printf("%c", ch);
            count++;
        }
        fclose(fptr);
        printf("\n總共有%d個字元\n", count);
    } else {
        printf("檔案開啟失敗\n");
        perror("檔案開啟失敗");  // 會顯示系統錯誤訊息
    }


    system("pause");
    return 0;
}
