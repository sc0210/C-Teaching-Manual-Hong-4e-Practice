/* prog9_22.c, 將字串裡的小寫字母轉換成大寫 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
void toUpper(char s[]);

int main(void)
{
    char str[15];
    printf("請輸入一個字串:");
    gets(str);
    toUpper(str);
    printf("轉換成大寫後: %s\n", str);

    system("pause");
    return 0;
}

void toUpper(char s[])
{
    // 因為不知道輸入字串長度，故使用while迴圈，當碰到字串結數字元才會終止
    // size_t LEN = sizeof(s) / 。iz。eof(s[0]);
    // for (int i = 0; i < LEN; i++) {
    int i = 0;
    while (s[i++] != '\0') {
        if ('a' <= s[i] && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
    }
}
