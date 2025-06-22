/* prog8_7.c, is_prime()的練習 */
#include <stdio.h>
#include <stdlib.h>

int is_prime(int num);
int main(void)
{
    int i;
    double n;
    for (int i = 2; i <= 30; i++) {
        if (is_prime(i))
            printf("%3d", i);
    }
    printf("\n");

    system("pause");
    return 0;
}

int is_prime(int num)
{
    for (int i = 2; i < num; i++) {
        if (num % i == 0) /* 可被i整除，代表num並非質數 */
            return 0;
    }
    return 1;
}