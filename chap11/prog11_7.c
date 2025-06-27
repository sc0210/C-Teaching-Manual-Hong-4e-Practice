/* prog11_7 結構陣列的使用 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int main(void)
{
    struct data {
        char name[10];
        int math;
    } student[MAX];

    for (int i = 0; i < MAX; i++) {
        printf("學生姓名: ");
        gets(student[i].name);
        printf("數學成績: ");
        scanf("%d", &student[i].math);
        fflush(stdin); /* 清除緩充區內的資跳 */
        /* 若沒有清除，當按下 Enter 時，會被 gets讀取到*/
    }

    for (int i = 0; i < MAX; i++) {
        printf("%s 的數學成績=%d\n", student[i].name, student[i].math);
    }
    system("pause");
    return 0;
}