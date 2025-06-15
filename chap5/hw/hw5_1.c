#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;

    /* hw5_1a */
    printf(" /* hw5_1a */\n");
    a = 8;
    printf("a = %d\n", ++a);  // 9
    printf("a = %d\n", a--);  // 9

    /* hw5_1b */
    printf("/* hw5_1b */\n");
    a = 10, b = 20;
    a = a % 5;
    b = b % 6;
    printf("a = %d\n", a);  // 0
    printf("b = %d\n", b);  // 2

    /* hw5_1c */
    printf("/* hw5_1c */\n");
    a = 20, b = 5;
    a = a % b;
    b = b * 3;
    printf("a = %d\n", a);  // 0
    printf("b = %d\n", b);  // 15

    /* hw5_1d */
    bool s1 = 'a' < 28;        // false
    bool s2 = 4 + 3 == 8 - 1;  // true
    bool s3 = 8 > 2;           // ture
    bool s4 = 'a' != 26;       // true

    printf("ASCII of %c = %d\n", 'a', 'a');
    printf("%d %d %d %d\n", s1, s2, s3, s4);

    system("pause");
    return 0;
}