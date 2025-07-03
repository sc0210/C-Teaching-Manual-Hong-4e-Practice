/* prog12_4, 使用 fread() 函數讀取檔案內容 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 80

int main(void)
{
    FILE *fptr;
    char str[MAX];
    int bytes;
    fptr = fopen("C:\\Users\\sam88\\Documents\\development\\output.txt", "r");

    while (!feof(fptr)) { /* 如果還沒讀到檔尾 */
        bytes = fread(str, sizeof(char), MAX, fptr);
        if (bytes < MAX) {
            str[bytes] = '\0';
        }
        printf("%s\n", str);
    }

    fclose(fptr);

    system("pause");
    return 0;
}
