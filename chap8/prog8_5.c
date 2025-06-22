/* prog8_5.c, abs()的練習 */
#include <stdio.h>
#include <stdlib.h>

int abs(int);
int main(void)
{
    int n;
    printf("Input an integer\n");
    scanf("%d", &n);
    printf("abs(%d)=%d\n", n, abs(n));
    system("pause");
    return 0;
}

int abs(int n)
{
    if (n <= 0)
        return -1 * n;
    else
        return n;
}