/* prog9_3.c, 查詢陣列所佔的記憶空間 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double data[4];
    printf("陣列元素所佔的位元組:%d\n", (int) sizeof(data[0]));
    printf("整個暫列所佔的位元組:%d\n", (int) sizeof(data));
    printf("陣列元素的個數:%d\n", (int) (sizeof(data) / sizeof(data[0])));

    system("pause");
    return 0;
}