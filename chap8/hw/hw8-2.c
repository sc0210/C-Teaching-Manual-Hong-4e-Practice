#include <math.h>
#include <stdio.h>

int cube(int x);
double square(double x);
int mod(int x, int y);

int main(void)
{
    printf("3.\tcube(2)=%d\n", cube(2));
    printf("4.\tsquare(4)=%.2f\n", square(4.0));
    printf("5.\tmod(17/5)=%d\n", mod(17, 5));
    return 0;
}

int cube(int x)
{
    return pow(x, 3);
}

double square(double x)
{
    return pow(x, 2);
}

int mod(int x, int y)
{
    return x % y;
}