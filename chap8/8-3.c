#include <math.h>
#include <stdio.h>

int power(int x, int n);
int primer(int x);
int is_primer(int x);
double f(double x);

int main(void)
{
    power(5, 3);
    printf("\n");

    primer(1);
    primer(2);
    primer(5);
    primer(10);
    primer(168);
    printf("\n");

    f(-3.2);
    f(-2.1);
    f(0);
    f(2.1);
    return 0;
}

int power(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= x;
    }
    printf("pow(%d,%d)=%d\n", x, n, res);
    return res;
    // return pow(x,n);
}

int primer(int x)
{
    int num = 2;
    for (int cnt = 1; cnt < x;) {
        num++;
        if (is_primer(num) == 1) {
            cnt++;
        }
        // printf("curr=%d, primer=%d\n",num,is_primer(num));
    }
    printf("The %d's primer number is %d\n", x, num);
    return num;
}

int is_primer(int x)
{
    if (x == 1)
        return 0;
    if (x == 2)
        return 1;
    // when input is larger than 2
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;  // not primer
        }
    }
    return 1;
}

double f(double x)
{
    printf("3*pow(%.2f,3) + 2*%.2f - 1 = %.2f\n", x, x,
           3 * pow(x, 3) + 2 * x - 1);
    return 3 * pow(x, 3) + 2 * x - 1;
}