#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int power(int x, int n);
int primer(int x);
int is_primer(int x);
double f(double x);
double my_func(int n);
int is_mer(int x);
int is_prime_u64(uint64_t n);
int is_mersenne(uint64_t n);

int main(void)
{
    printf("\n/*  6.  */\n");
    power(5, 3);

    printf("\n/*  7.  */\n");
    primer(1);
    primer(2);
    primer(5);
    primer(10);
    primer(168);

    printf("\n/*  8.  */\n");
    f(-3.2);
    f(-2.1);
    f(0);
    f(2.1);

    printf("\n/*  9.  */\n");
    printf("is_prime(%d)=%d\n", 1, is_prime_u64(1));

    printf("\n/*  10.  */\n");
    uint64_t mersenne[9] = {0};
    int cnt = 0;
    uint64_t num = 1;
    for (uint64_t p = 2; cnt < 9; ++p) {
        if (!is_prime_u64(p))
            continue;                          /* p 不是質數就跳過 */
        uint64_t Mp = ((uint64_t) 1 << p) - 1; /* 2^p - 1 */
        if (is_prime_u64(Mp)) {
            mersenne[cnt] = Mp;
            printf("%2d) 2^%-2llu – 1 = %llu\n", cnt + 1,
                   (unsigned long long) p, (unsigned long long) Mp);
            ++cnt;
        }
    }

    printf("\n/*  12.  */\n");
    for (int i = 3; i <= 25; i++) {
        printf("my_func(%d)=%lf\n", i, my_func(i));
        if (1 - my_func(i) <= 0.0000001)
            break;
    }

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
        if (is_prime_u64(num) == 1) {
            cnt++;
        }
        // printf("curr=%d, primer=%d\n",num,is_primer(num));
    }
    printf("The %d's primer number is %d\n", x, num);
    return num;
}

int is_prime_u64(uint64_t n) /* √n 判斷，比逐一到 n-1 快非常多 */
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (uint64_t i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int is_mersenne(uint64_t n) /* 判斷 n+1 是否為 2 的冪次 */
{
    return ((n + 1) & n) == 0;
}

double f(double x)
{
    printf("3*pow(%.2f,3) + 2*%.2f - 1 = %.2f\n", x, x,
           3 * pow(x, 3) + 2 * x - 1);
    return 3 * pow(x, 3) + 2 * x - 1;
}

double my_func(int n)
{
    double res = 0.0;
    for (int i = 1; i <= n; i++) {
        res += (1.0 / pow(2, i));
    }
    return res;
}