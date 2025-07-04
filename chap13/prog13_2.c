/* prog13_2, 大型程式的範例(主程式) */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416
double area(double r);
double peri(double r);
void show(double r);

int main(void)
{
    printf("area(2.2)=%5.2f\n", area(2.2));
    printf("peri(1.4)=%5.2f\n", peri(1.4));
    system("pause");
    return 0;
}
