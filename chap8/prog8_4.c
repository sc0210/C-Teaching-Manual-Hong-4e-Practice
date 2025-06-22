/* prog8_4.c, display()的練習 */
#include <stdio.h>
#include <stdlib.h>

void display(char, int);
int main(void)
{
    int n;
    char ch;
    printf("請輸入欲列印的字元\n");
    scanf("%c", &ch);
    printf("請問要印出幾個字元:\n");
    scanf("%d", &n);

    display(ch, n);

    system("pause");
    return 0;
}

void display(char ch, int n)
{
    for (int i = n; i > 0; i--) {
        printf("%c", ch);
    }
    printf("\n");
}