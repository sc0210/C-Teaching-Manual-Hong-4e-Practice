/* count.c, 將全域變數的值加1，並列印出來 */
#include <stdio.h>
void count(double r)
{
    extern int cnt;
    cnt++;
    printf("cnt=%d\n", cnt);
}