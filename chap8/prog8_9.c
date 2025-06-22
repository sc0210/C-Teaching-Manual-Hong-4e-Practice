/* prog8_9.c, 用萊布尼茲方發故算pi */
#include <stdio.h>
#include <stdlib.h>

double Leibniz(int);
double power(double, int);
int main(void)
{
    int i;
    for (int i = 1; i <= 10000; i++) {
        printf("Leibniz(%d)=%12.10f\n", i, Leibniz(i));
    }

    system("pause");
    return 0;
}

double Leibniz(int num)
{
    double sum = 0;
    for (int i = 1; i <= num; i++) {
        sum = sum + power(-1.0, i - 1) / (2 * i - 1);
    }
    return 4 * sum;
}

double power(double base, int n)
{
    double res = 1.0;
    for (int i = n; i > 0; i--) {
        res *= base;
    }
    return res;
}