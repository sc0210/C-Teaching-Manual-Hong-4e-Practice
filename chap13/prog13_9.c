/* prog13_9, 複製檔案內容 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fptr1, *fptr2;
    char ch;

    if (argc == 3) {
        fptr1 = fopen(argv[1], "r");
        fptr2 = fopen(argv[2], "w");
        if ((fptr1 != NULL) && (fptr2 != NULL)) {
            while ((ch = getc(fptr1)) != EOF) {
                putc(ch, fptr2);
            }
            fclose(fptr1);
            fclose(fptr2);
            printf("檔案拷貝完成!!\n");
        } else {
            printf("檔案開啟失敗!!\n");
        }
    } else {
        printf("請重新檢查輸入!!\n");
    }
    system("pause");
    return 0;
}
