/* prog11_8 使用指向結構的指標 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int main(void)
{
    struct data {
        char name[10];
        int math;
        int eng;
    } student, *ptr;

    ptr = &student;
    printf("學生姓名: ");
    gets(ptr->name);
    printf("數學成績: ");
    scanf("%d", &ptr->math);
    printf("英文成績: ");
    scanf("%d", &ptr->eng);

    printf("數學成績=%d,", ptr->math);
    printf("英文成績=%d,", ptr->eng);
    printf("平均成績=%.2f\n", (ptr->math + ptr->eng) / 2.0);

    system("pause");
    return 0;
}