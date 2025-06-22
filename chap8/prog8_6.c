/* prog8_6.c, power()的練習 */
#include <stdio.h>
#include <stdlib.h>

double power(double, int);
int main(void)
{
    int i;
    double n;
    printf("請輸入底數與次方\n");
    scanf("%lf,%d", &n, &i);
    printf("%lf的%d次方=%.3f\n", n, i, power(n, i));
    system("pause");
    return 0;
}

double power(double base, int n)
{
    double ans = 1;
    for (int i = n; i > 0; i--) {
        ans *= base;
    }
    return ans;
}