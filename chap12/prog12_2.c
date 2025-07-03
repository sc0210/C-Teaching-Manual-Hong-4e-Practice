/* prog12_2, 拷貝檔案內容到其他的檔案 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr1, *fptr2; /* 宣告指向檔案的指標fptr1, fptr2 */
    char ch;             /* 宣告字元變數ch，用來接收讀取的字元 */

    fptr1 = fopen("C:\\Users\\sam88\\Documents\\development\\data.txt", "r");
    fptr2 = fopen("C:\\Users\\sam88\\Documents\\development\\output.txt", "w");

    if ((fptr1 != NULL) && (fptr2 != NULL)) {
        while ((ch = getc(fptr1)) != EOF) {
            putc(ch, fptr2);
        }
        fclose(fptr1);
        fclose(fptr2);
        printf("檔案拷貝完成!!\n");
    } else {
        printf("檔案開啟失敗\n");
        perror("檔案開啟失敗");  // 會顯示系統錯誤訊息
    }


    system("pause");
    return 0;
}
